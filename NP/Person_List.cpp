#include "Person_List.h"
Person_list::Person_list() {
	n = 0;
	persons = new Person * [100];
}
Person_list::~Person_list() {
	for (int i = 0; i < n; i++) {
		delete persons[i];
	}
	delete[] persons;
}
void Person_list::Print_Info()const {
	for (int i = 0; i < n; i++) {
		persons[i]->Print_Info();
	}
}
void Person_list::Add(Person* person) {
	persons[n] = person;
	n++;
}