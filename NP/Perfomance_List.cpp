#include "Perfomance_List.h"
Perfomance_list::Perfomance_list() {
	n = 0;
	perfomances = new Perfomance * [100];
}
Perfomance_list::~Perfomance_list() {
	for (int i = 0; i < n; i++) {
		delete perfomances[i];
	}
	delete[] perfomances;
}
void Perfomance_list::Print_Info()const {
	for (int i = 0; i < n; i++) {
		perfomances[i]->Print_Info();
	}
}
void Perfomance_list::Add(Perfomance*perfomance) {
	perfomances[n] = perfomance;
	n++;
}
int Perfomance_list::Get_N()const {
	return n;
}

