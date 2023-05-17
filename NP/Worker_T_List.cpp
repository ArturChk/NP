#include "Worker_T_List.h"
#include "Worker_File.h"
Worker_T_list::Worker_T_list() {
	Worker_File::Read_From_File(items, n);
}
Worker_T_list::~Worker_T_list() {
	Worker_File::Write_to_File(items, n);
}
void Worker_T_list::Add(Worker& item) {
	T_list<Worker>::Add(item);
}
void Worker_T_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index - 1; i < n; i++) {
		items[i] = items[i + 1];
	}
	n--;
}
void Worker_T_list::Print_Info()const {
	T_list<Worker>::Print_Info();
}
void Worker_T_list::Show_Oldest_Age_Worker()const {
	int tage = items[0].Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[0].Get_Age() > tage) {
			tage = items[0].Get_Age();
			k = i;
		}
	}
	cout << "Oldest worker is " << items[k].Get_Name() << "with " << items[k].Get_Age() << " years\n";
}
void Worker_T_list::Show_Youngest_Age_Worker()const {
	int tage = items[0].Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[0].Get_Age() < tage) {
			tage = items[0].Get_Age();
			k = i;
		}
	}
	cout << "Younger worker is " << items[k].Get_Name() << "with " << items[k].Get_Age() << " years\n";
}