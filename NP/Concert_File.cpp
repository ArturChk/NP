#include "Concert_File.h"
#include <fstream>
void Concert_File::Read_From_File(Concert*& concerts, int& n) {
	ifstream fin("C:\\Users\\Артур\\source\\repos\\NP\\Concerts.txt");
	concerts = new Concert[10];
	string name, group_name, genre;
	int group_capacity, duration, price;
	while (!fin.eof()) {
		getline(fin, name, '|');
		getline(fin, group_name, '|');
		getline(fin, genre, '|');
		fin >> group_capacity >> duration >> price;
		fin.get();
		concerts[n] = Concert(name, genre, duration, price, group_name, group_capacity);
		n++;
	}
	fin.close();
}
void Concert_File::Write_to_File(Concert* concerts, int n) {
	ofstream fout("Concerts.txt");
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < concerts[i].Get_Name().length(); k++) {
			if (concerts[i].Get_Name()[k] != '\n')
				fout << concerts[i].Get_Name()[k];
		}
		fout << '|';
		for (int k = 0; k < concerts[i].Get_Group_Name().length(); k++) {
			if (concerts[i].Get_Group_Name()[k] != '\n')
				fout << concerts[i].Get_Group_Name()[k];
		}
		fout << '|';
		for (int k = 0; k < concerts[i].Get_Genre().length(); k++) {
			if (concerts[i].Get_Genre()[k] != '\n')
				fout << concerts[i].Get_Genre()[k];
		}
		fout << '|';

		fout << concerts[i].Get_Group_Capacity() << ' ' << concerts[i].Get_Duration() << ' ' << concerts[i].Get_Price();
		if (i != n - 1) fout << endl;
	}
	fout.close();
}
void Concert_File::Read_From_File(Concert**& concerts, int& n) {
	ifstream fin("Concerts.txt");
	concerts = new Concert * [100];
	string name, group_name, genre;
	int group_capacity, duration, price;
	while (!fin.eof()) {
		getline(fin, name, '|');
		getline(fin, group_name, '|');
		getline(fin, genre, '|');
		fin >> group_capacity >> duration >> price;
		fin.get();
		concerts[n] = new Concert(name, genre, duration, price, group_name, group_capacity);
		n++;
	}
	fin.close();
}
void Concert_File::Write_to_File(Concert** concerts, int n) {
	ofstream fout("Concerts.txt");
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < concerts[i]->Get_Name().length(); k++) {
			if (concerts[i]->Get_Name()[k] != '\n')
				fout << concerts[i]->Get_Name()[k];
		}
		fout << '|';
		for (int k = 0; k < concerts[i]->Get_Group_Name().length(); k++) {
			if (concerts[i]->Get_Group_Name()[k] != '\n')
				fout << concerts[i]->Get_Group_Name()[k];
		}
		fout << '|';
		for (int k = 0; k < concerts[i]->Get_Genre().length(); k++) {
			if (concerts[i]->Get_Genre()[k] != '\n')
				fout << concerts[i]->Get_Genre()[k];
		}
		fout << '|';

		fout << concerts[i]->Get_Group_Capacity() << ' ' << concerts[i]->Get_Duration() << ' ' << concerts[i]->Get_Price();
		if (i != n - 1) fout << endl;
	}
	fout.close();
}