#pragma once
#include"../NP/Concert_A_List.h"
#include"../NP/Spectacle_A_List.h"
#include"../NP/Viewer_A_List.h"
#include"../NP/Worker_A_List.h"

class Menu
{
	Concert_A_List* Concertlist;
	Spectacle_A_List* Spectaclelist;
	Viewer_A_List* Viewerlist;
	Worker_A_List* Workerlist;

public:
	void Show();
	Menu();
	~Menu();

private:
	void showMainMenu();

	void ShowConcertMenu();
	void ShowSpectacleMenu();
	void ShowViewerMenu();
	void ShowWorkerMenu();

	void AddNewConcert();
	void AddNewSpectacle();
	void AddNewViewer();
	void AddNewWorker();
	
	void Delete_Concert();
	void Delete_Spectacle();
	void Delete_Viewer();
	void Delete_Worker();

};