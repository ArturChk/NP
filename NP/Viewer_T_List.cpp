#include "Viewer_T_List.h"
#include "Viewer_File.h"
Viewer_T_list::Viewer_T_list() {
	Viewer_File::Read_From_File(items, n);
}
Viewer_T_list::~Viewer_T_list() {
	Viewer_File::Write_to_File(items, n);
}
void Viewer_T_list::Add(Viewer& item) {
	T_list<Viewer>::Add(item);
}
void Viewer_T_list::Delete(int index) {
	if (index == 0) return;
	for (int i = index - 1; i < n; i++) {
		items[i] = items[i + 1];
	}
	n--;
}
void Viewer_T_list::Print_Info()const {
	T_list<Viewer>::Print_Info();
}
void Viewer_T_list::Show_Oldest_Age_Viewer()const {
	int tage = items[0].Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[0].Get_Age() > tage) {
			tage = items[0].Get_Age();
			k = i;
		}
	}
	cout << "Oldest viewer is " << items[k].Get_Name() << "with " << items[k].Get_Age() << " years\n";
}
void Viewer_T_list::Show_Youngest_Age_Viewer()const {
	int tage = items[0].Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (items[0].Get_Age() < tage) {
			tage = items[0].Get_Age();
			k = i;
		}
	}
	cout << "Younger viewer is " << items[k].Get_Name() << "with " << items[k].Get_Age() << " years\n";
}