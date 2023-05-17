#include "Viewer.h"
Viewer::Viewer(string name, string surname, int age, string place)
    :Person(name, surname, age), place(place)
{}
void Viewer::Print_Info()const {
    cout << name << " | " << surname << " | " << age << " | " << place << endl;
}
string Viewer::Get_Place()const {
    return place;
}