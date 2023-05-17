#include "Worker_File.h"
#include <fstream>
void Worker_File::Read_From_File(Worker*& workers, int& n) {
    ifstream fin("Workers.txt");
    workers = new Worker[100];
    string name, surname, position;
    int age, salary;
    while (!fin.eof()) {
        getline(fin, name, '|');
        getline(fin, surname, '|');
        getline(fin, position, '|');
        fin >> age >> salary;
        fin.get();
        workers[n] = Worker(name,surname,position,age, salary);
        n++;
    }
    fin.close();
}

void Worker_File::Write_to_File(Worker* workers, int n) {
    ofstream fout("Workers.txt");
    for (int i = 0; i < n; i++) {
        fout << workers[i].Get_Name()<<'|'<<workers[i].Get_Surname()<<'|'<<workers[i].Get_Position()<<'|';
        fout << workers[i].Get_Age() << ' ' << workers[i].Get_Salary();
        if (i != n - 1) fout << endl;
    }
    fout.close();
}

void Worker_File::Read_From_File(Worker**& workers, int& n) {
    ifstream fin("Workers.txt");
    workers = new Worker * [100];
    string name, surname, position;
    int age, salary;
    while (!fin.eof()) {
        getline(fin, name, '|');
        getline(fin, surname, '|');
        getline(fin, position, '|');
        fin >> age >> salary;
        fin.get();
        workers[n] = new Worker(name, surname, position, age, salary);
        n++;
    }
    fin.close();
}

void Worker_File::Write_to_File(Worker** workers, int n) {
    ofstream fout("Workers.txt");
    for (int i = 0; i < n; i++) {
        fout << workers[i]->Get_Name() << '|' << workers[i]->Get_Surname() << '|' << workers[i]->Get_Position() << '|';
        fout << workers[i]->Get_Age() << ' ' << workers[i]->Get_Salary();
        if (i != n - 1) fout << endl;
    }
    fout.close();
}