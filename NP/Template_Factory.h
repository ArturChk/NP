#pragma once
#include "Concert_T_List.h"
#include "Spectacle_T_List.h"
#include "Worker_T_List.h"
#include "Viewer_T_List.h"
#include "A_Factory_List.h"
class Template_Factory :public A_Factory_List {
public:
	Concert_A_List* Get_Concert_List() {
		return new Concert_T_list;
	}
	Spectacle_A_List* Get_Spectacle_List() {
		return new Spectacle_T_list;
	}
	Viewer_A_List* Get_Viewer_List() {
		return new Viewer_T_list;
	}
	Worker_A_List* Get_Worker_List() {
		return new Worker_T_list;
	}
};