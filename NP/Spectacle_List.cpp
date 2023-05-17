#include "Spectacle_list.h"
#include "Spectacle_File.h"
Spectacle_list::Spectacle_list() {
	Spectacle** spectacles;
	Spectacle_File::Read_From_File(spectacles, n);
	perfomances = (Perfomance**)spectacles;
}
Spectacle_list::~Spectacle_list() {
	Spectacle_File::Write_to_File((Spectacle**)perfomances, n);
}
void Spectacle_list::Add(Spectacle& spectacle) {
	Perfomance_list::Add(new Spectacle(spectacle));
}
void Spectacle_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index-1; i < n; i++) {
		perfomances[i] = perfomances[i + 1];
	}
	n--;
}
void Spectacle_list::Print_Info()const {
	Perfomance_list::Print_Info();
}
void Spectacle_list::Show_Most_Exspensive_Spectacle()const {
	int tprice = perfomances[0]->Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Price() > tprice) {
			tprice = perfomances[i]->Get_Price();
			k = i;
		}
	}
	cout << "Most Expsensive Spectacle is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Price() << "$\n";
}
void Spectacle_list::Show_Most_Cheapest_Spectacle()const {
	int tprice = perfomances[0]->Get_Price();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (perfomances[i]->Get_Price() < tprice) {
			tprice = perfomances[i]->Get_Price();
			k = i;
		}
	}
	cout << "Cheapest Spectacle is " << perfomances[k]->Get_Name() << " with : " << perfomances[k]->Get_Price() << "$\n";
}
void Spectacle_list::Show_Longest_Spectacle()const {
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
void Spectacle_list::Show_Shortest_Spectacle()const {
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