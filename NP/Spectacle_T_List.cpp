#include "Spectacle_T_List.h"
#include "Spectacle_File.h"
Spectacle_T_list::Spectacle_T_list() {
	Spectacle_File::Read_From_File(items, n);
}
Spectacle_T_list::~Spectacle_T_list() {
	Spectacle_File::Write_to_File(items, n);
}
void Spectacle_T_list::Add(Spectacle& item) {
	T_list<Spectacle>::Add(item);
}
void Spectacle_T_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index - 1; i < n; i++) {
		items[i] = items[i + 1];
	}
	n--;
}
void Spectacle_T_list::Print_Info()const {
	T_list<Spectacle>::Print_Info();
}
void Spectacle_T_list::Show_Most_Exspensive_Spectacle()const {
	int tprice = items[0].Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Price() > tprice) {
			tprice = items[i].Get_Price();
			k = i;
		}
	}
	cout << "Most Expsensive Spectacle is " << items[k].Get_Name() << " with : " << items[k].Get_Price() << "$\n";
}
void Spectacle_T_list::Show_Most_Cheapest_Spectacle()const {
	int tprice = items[0].Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[i].Get_Price() < tprice) {
			tprice = items[i].Get_Price();
			k = i;
		}
	}
	cout << "Cheapest Spectacle is " << items[k].Get_Name() << " with : " << items[k].Get_Price() << "$\n";
}
void Spectacle_T_list::Show_Longest_Spectacle()const {
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
void Spectacle_T_list::Show_Shortest_Spectacle()const {
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