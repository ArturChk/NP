#include "Viewer_list.h"
#include "Viewer_File.h"
Viewer_list::Viewer_list() {
    Viewer** viewers;
    Viewer_File::Read_From_File(viewers, n);
    persons = (Person**)viewers;
}
Viewer_list::~Viewer_list() {
    Viewer_File::Write_to_File((Viewer**)persons, n);
}
void Viewer_list::Add(Viewer& viewer) {
    Person_list::Add(new Viewer(viewer));
}
void Viewer_list::Delete(int index) {
    if (index == 0) return;
    for (int i = index-1; i < n; i++) {
        persons[i] = persons[i + 1];
    }
    n--;
}
void Viewer_list::Print_Info()const {
    Person_list::Print_Info();
}

void Viewer_list::Show_Oldest_Age_Viewer()const {
	int tage = persons[0]->Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (persons[0]->Get_Age() > tage) {
			tage = persons[0]->Get_Age();
			k = i;
		}
	}
	cout << "Oldest viewer is " << persons[k]->Get_Name() << "with " << persons[k]->Get_Age() << " years\n";
}
void Viewer_list::Show_Youngest_Age_Viewer()const {
	int tage = persons[0]->Get_Age();
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (persons[0]->Get_Age() < tage) {
			tage = persons[0]->Get_Age();
			k = i;
		}
	}
	cout << "Younger viewer is " << persons[k]->Get_Name() << "with " << persons[k]->Get_Age() << " years\n";
}