#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string surname;
    int age;
public:
    Person(string name = "", string surname = "", int age = 0);
    virtual void Print_Info()const;
    string Get_Name()const;
    string Get_Surname()const;
    int Get_Age()const;
};