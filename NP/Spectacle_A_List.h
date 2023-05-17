#pragma once
#include "Spectacle.h"
#include "A_List.h"
class Spectacle_A_List :public A_List<Spectacle> {
public:
	virtual void Show_Most_Exspensive_Spectacle()const = 0;
	virtual void Show_Most_Cheapest_Spectacle()const = 0;
	virtual void Show_Longest_Spectacle()const = 0;
	virtual void Show_Shortest_Spectacle()const = 0;
};