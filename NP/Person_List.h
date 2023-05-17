#pragma once
#include "Person.h"
class Person_list {
protected:
	Person** persons;
	int n;
	void Add(Person* person);
public:
	Person_list();
	~Person_list();
	void Print_Info()const;
};