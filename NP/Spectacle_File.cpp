#include "Spectacle_File.h"
#include <fstream>
void Spectacle_File::Read_From_File(Spectacle*& spectacles, int& n) {
	ifstream fin("Spectacles.txt");
	spectacles = new Spectacle[100];
	string name,genre,theatre;
	int capacity,duration, price;
	while (!fin.eof()) {
		getline(fin, name, '|');
		getline(fin, genre, '|');
		getline(fin, theatre, '|');
		fin >> capacity >> duration >> price;
		fin.get();
		spectacles[n] = Spectacle(name,genre,duration,price,theatre,capacity);
		n++;
	}
	fin.close();
}
void Spectacle_File::Write_to_File(Spectacle* spectacles, int n) {
	ofstream fout("Spectacles.txt");
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < spectacles[i].Get_Name().length(); k++) {
			if (spectacles[i].Get_Name()[k] != '\n') {
				fout << spectacles[i].Get_Name()[k];
			}
		}
		fout << '|';
		for (int k = 0; k < spectacles[i].Get_Genre().length(); k++) {
			if (spectacles[i].Get_Genre()[k] != '\n') {
				fout << spectacles[i].Get_Genre()[k];
			}
		}
		fout << '|';
		for (int k = 0; k < spectacles[i].Get_Theatre().length(); k++) {
			if (spectacles[i].Get_Theatre()[k] != '\n') {
				fout << spectacles[i].Get_Theatre()[k];
			}
		}
		fout << '|';
		fout << spectacles[i].Get_Capacity() << ' ' << spectacles[i].Get_Duration() << ' ' << spectacles[i].Get_Price();
		if (i != n - 1) fout << endl;
	}
	fout.close();
}
void Spectacle_File::Read_From_File(Spectacle**& spectacles, int& n) {
	ifstream fin("Spectacles.txt");
	spectacles = new Spectacle * [100];
	string name, genre, theatre;
	int capacity, duration, price;
	while (!fin.eof()) {
		getline(fin, name, '|');
		getline(fin, genre, '|');
		getline(fin, theatre, '|');
		fin >> capacity >> duration >> price;
		fin.get();
		spectacles[n] = new Spectacle(name, genre, duration, price, theatre, capacity);
		n++;
	}
	fin.close();
}
void Spectacle_File::Write_to_File(Spectacle** spectacles, int n) {;
	ofstream fout("Spectacles.txt");
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < spectacles[i]->Get_Name().length(); k++) {
			if (spectacles[i]->Get_Name()[k] != '\n') {
				fout << spectacles[i]->Get_Name()[k];
			}
		}
		fout << '|';
		for (int k = 0; k < spectacles[i]->Get_Genre().length(); k++) {
			if (spectacles[i]->Get_Genre()[k] != '\n') {
				fout << spectacles[i]->Get_Genre()[k];
			}
		}
		fout << '|';
		for (int k = 0; k < spectacles[i]->Get_Theatre().length(); k++) {
			if (spectacles[i]->Get_Theatre()[k] != '\n') {
				fout << spectacles[i]->Get_Theatre()[k];
			}
		}
		fout << '|';
		fout << spectacles[i]->Get_Capacity() << ' ' << spectacles[i]->Get_Duration() << ' ' << spectacles[i]->Get_Price();
		if (i != n - 1) fout << endl;
	}
	fout.close();
}