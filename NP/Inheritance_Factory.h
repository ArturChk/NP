#pragma once
#include "Concert_List.h"
#include "Spectacle_List.h"
#include "Worker_List.h"
#include "Viewer_List.h"
#include "A_Factory_List.h"
class Inheritance_Factory :public A_Factory_List {
public:
	Concert_A_List* Get_Concert_List() {
		return new Concert_list;
	}
	Spectacle_A_List* Get_Spectacle_List() {
		return new Spectacle_list;
	}
	Viewer_A_List* Get_Viewer_List() {
		return new Viewer_list;
	}
	Worker_A_List* Get_Worker_List() {
		return new Worker_list;
	}
};