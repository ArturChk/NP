#include "Concert_T_List.h"
#include "Concert_File.h"
Concert_T_list::Concert_T_list() {
	Concert_File::Read_From_File(items, n);
}
Concert_T_list::~Concert_T_list() {
	Concert_File::Write_to_File(items, n);
}
void Concert_T_list::Add(Concert& item) {
	T_list<Concert>::Add(item);
}
void Concert_T_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index - 1; i < n; i++) {
		items[i] = items[i + 1];
	}
	n--;
}
void Concert_T_list::Print_Info()const {
	T_list<Concert>::Print_Info();
}

void Concert_T_list::Show_Most_Exspensive_Concert()const {
	int tprice = items[0].Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Price() > tprice) {
			tprice = items[i].Get_Price();
			k = i;
		}
	}
	cout << "Most Expsensive Concert is " << items[k].Get_Name() << " with : " << items[k].Get_Price() << "$\n";
}
void Concert_T_list::Show_Most_Cheapest_Concert()const {
	int tprice = items[0].Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Price() < tprice) {
			tprice = items[i].Get_Price();
			k = i;
		}
	}
	cout << "Cheapest Concert is " << items[k].Get_Name() << " with : " << items[k].Get_Price() << "$\n";
}
void Concert_T_list::Show_Longest_Concert()const {
	int tduration = items[0].Get_Duration();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Duration() > tduration) {
			tduration = items[i].Get_Duration();
			k = i;
		}
	}
	cout << "Longest Perfomance is " << items[k].Get_Name() << " with : " << items[k].Get_Duration() << " minutes\n";
}
void Concert_T_list::Show_Shortest_Concert()const {
	int tduration = items[0].Get_Duration();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Duration() < tduration) {
			tduration = items[i].Get_Duration();
			k = i;
		}
	}
	cout << "Shortest Perfomance is " << items[k].Get_Name() << " with : " << items[k].Get_Duration() << "minutes\n";
}