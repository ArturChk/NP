#include "Concert_list.h"
#include "Concert_File.h"
Concert_list::Concert_list() {
	Concert** concerts;
	Concert_File::Read_From_File(concerts, n);
	perfomances = (Perfomance**)concerts;
}
Concert_list::~Concert_list() {
	Concert_File::Write_to_File((Concert**)perfomances, n);
}
void Concert_list::Add(Concert& concert) {
	Perfomance_list::Add(new Concert(concert));
}
void Concert_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index-1; i < n; i++) {
		perfomances[i] = perfomances[i + 1];
	}
	n--;
}
void Concert_list::Print_Info()const {
	Perfomance_list::Print_Info();
}

void Concert_list::Show_Most_Exspensive_Concert()const {
	int tprice = perfomances[0]->Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Price() > tprice) {
			tprice = perfomances[i]->Get_Price();
			k = i;
		}
	}
	cout << "Most Expsensive Concert is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Price() << "$\n";
}
void Concert_list::Show_Most_Cheapest_Concert()const {
	int tprice = perfomances[0]->Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Price() < tprice) {
			tprice = perfomances[i]->Get_Price();
			k = i;
		}
	}
	cout << "Cheapest Concert is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Price() << "$\n";
}
void Concert_list::Show_Longest_Concert()const {
	int tduration = perfomances[0]->Get_Duration();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Duration() > tduration) {
			tduration = perfomances[i]->Get_Duration();
			k = i;
		}
	}
	cout << "Longest Perfomance is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Duration() << " minutes\n";
}
void Concert_list::Show_Shortest_Concert()const {
	int tduration = perfomances[0]->Get_Duration();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Duration() < tduration) {
			tduration = perfomances[i]->Get_Duration();
			k = i;
		}
	}
	cout << "Shortest Perfomance is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Duration() << "minutes\n";
}
int Concert_list::Get_N()const {
	return n;
}