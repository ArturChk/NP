#include "Viewer_File.h"
#include <fstream>
void Viewer_File::Read_From_File(Viewer*& viewers, int& n) {
    ifstream fin("Viewers.txt");
    viewers = new Viewer[100];
    string name, surname, place;
    int age;
    while (!fin.eof()) {
        getline(fin, name, '|');
        getline(fin, surname, '|');
        getline(fin, place, '|');
        fin >> age;
        fin.get();
        viewers[n] = Viewer(name,surname,age,place);
        n++;
    }
    fin.close();
}

void Viewer_File::Write_to_File(Viewer* viewers, int n) {
    ofstream fout("Viewers.txt");
    for (int i = 0; i < n; i++) {
        fout << viewers[i].Get_Name() << '|' << viewers[i].Get_Surname() << '|' << viewers[i].Get_Place() << '|';
        fout << viewers[i].Get_Age();
        if (i != n - 1) fout << endl;
    }
    fout.close();
}
void Viewer_File::Read_From_File(Viewer**& viewers, int& n) {
    ifstream fin("Viewers.txt");
    viewers = new Viewer * [100];
    string name, surname, place;
    int age;
    while (!fin.eof()) {
        getline(fin, name, '|');
        getline(fin, surname, '|');
        getline(fin, place, '|');
        fin >> age;
        fin.get();
        viewers[n] = new Viewer(name, surname, age, place);
        n++;
    }
    fin.close();
}

void Viewer_File::Write_to_File(Viewer** viewers, int n) {
    ofstream fout("Viewers.txt");
    for (int i = 0; i < n; i++) {
        fout << viewers[i]->Get_Name() << '|' << viewers[i]->Get_Surname() << '|' << viewers[i]->Get_Place() << '|';
        fout << viewers[i]->Get_Age();
        if (i != n - 1) fout << endl;
    }
    fout.close();
}