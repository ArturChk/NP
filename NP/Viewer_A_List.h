#pragma once
#include "Viewer.h"
#include "A_List.h"
class Viewer_A_List: public A_List<Viewer> {
public:
	virtual void Show_Oldest_Age_Viewer()const=0;
	virtual void Show_Youngest_Age_Viewer()const=0;
};