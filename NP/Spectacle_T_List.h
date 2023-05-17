#pragma once
#include "Spectacle.h"
#include "T_List.h"
#include "Spectacle_A_List.h"
class Spectacle_T_list :public T_list<Spectacle>,public Spectacle_A_List {
public:
	Spectacle_T_list();
	~Spectacle_T_list();
	void Add(Spectacle& item);
	void Delete(int index);
	void Print_Info()const;
	void Show_Most_Exspensive_Spectacle()const;
	void Show_Most_Cheapest_Spectacle()const;
	void Show_Longest_Spectacle()const;
	void Show_Shortest_Spectacle()const;

};