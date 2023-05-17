#pragma once
template <class T>
class A_List {
public:
	virtual void Add(T& item) = 0;
	virtual void Delete(int index) = 0;
	virtual void Print_Info()const = 0;
};