#include "Worker_list.h"
#include "Worker_File.h"
Worker_list::Worker_list() {
    Worker** workers;
    Worker_File::Read_From_File(workers, n);
    persons = (Person**)workers;
}
Worker_list::~Worker_list() {
    Worker_File::Write_to_File((Worker**)persons, n);
   
}
void Worker_list::Add(Worker& worker) {
    Person_list::Add(new Worker(worker));
}
void Worker_list::Delete(int index) {
    if (index == 0) return;
    for (int i = index-1; i < n; i++) {
        persons[i] = persons[i + 1];
    }
    n--;
}
void Worker_list::Print_Info()const {
    Person_list::Print_Info();
}
void Worker_list::Show_Operation(string operation, int index1, int index2) const{
    if (operation == "=") {
        cout << "Before:\n";
        cout << persons[index1];
        persons[index1] = persons[index2];
        cout << "After:\n";
        cout << persons[index1];
    }
    else if (operation == "+=") {
        cout << "Before:\n";
        cout << persons[index1];
        persons[index1] = persons[index2];
        cout << "After:\n";
        cout << persons[index1];
    }
}
void Worker_list::Show_Oldest_Age_Worker()const {
	int tage = persons[0]->Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (persons[0]->Get_Age() > tage) {
			tage = persons[0]->Get_Age();
			k = i;
		}
	}
	cout << "Oldest worker is " << persons[k]->Get_Name() << "with " << persons[k]->Get_Age() << " years\n";
}
void Worker_list::Show_Youngest_Age_Worker()const {
	int tage = persons[0]->Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (persons[0]->Get_Age() < tage) {
			tage = persons[0]->Get_Age();
			k = i;
		}
	}
	cout << "Younger worker is " << persons[k]->Get_Name() << "with " << persons[k]->Get_Age() << " years\n";
}