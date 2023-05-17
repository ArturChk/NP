#include "Person.h"
Person::Person(string name, string surname, int age) :name(name), surname(surname), age(age){}
void Person::Print_Info()const {
    cout << name << " | " << surname << " | " << age << endl;
}
string Person::Get_Name()const {
    return name;
}
string Person::Get_Surname()const {
    return surname;
}
int Person::Get_Age()const {
    return age;
}