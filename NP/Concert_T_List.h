#pragma once
#include "Concert.h"
#include "T_List.h"
#include "Concert_A_List.h"
class Concert_T_list :private T_list<Concert>,public Concert_A_List {
public:
	Concert_T_list();
	~Concert_T_list();
	void Add(Concert& item);
	void Delete(int index);
	void Print_Info()const;
	void Show_Most_Exspensive_Concert()const;
	void Show_Most_Cheapest_Concert()const;
	void Show_Longest_Concert()const;
	void Show_Shortest_Concert()const;

};