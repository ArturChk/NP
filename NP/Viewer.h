#pragma once
#include "Person.h"
class Viewer :public Person {
protected:
    string place;
public:
    Viewer(string name = "", string surname = "", int age = 0, string place="");
    void Print_Info()const;
    string Get_Place()const;
   
};