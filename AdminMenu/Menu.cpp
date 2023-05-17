#pragma once
#include"Menu.h"
#include"..//NP/Concert.h"
#include"..//NP/Spectacle.h"
#include"..//NP/Viewer.h"
#include"..//NP/Worker.h"
#include"..//NP/A_Factory_List.h"
#include "..//NP/A_Factory_List.h"
#include "..//NP/Inheritance_Factory.h"
#include "..//NP/Template_Factory.h"
#include "..//NP/Provider.h"
#include<iostream>
#include<string>
using namespace std;

Menu::Menu()
{
	Provider provider;
	A_Factory_List* listFactory = provider.Get_Factory_List();

	Concertlist = listFactory->Get_Concert_List();
	Spectaclelist = listFactory->Get_Spectacle_List();
	Viewerlist = listFactory->Get_Viewer_List();
	Workerlist = listFactory->Get_Worker_List();
}

Menu::~Menu()
{
	delete Concertlist;
	delete Spectaclelist;
	delete Viewerlist;
	delete Workerlist;
}

void Menu::Show()
{
	cout << "Perfomance Admin Menu!";

	int userInput;

	do {
		showMainMenu();

		cin >> userInput;

		if (userInput == 1) {
			ShowConcertMenu();
			continue;
		}

		if (userInput == 2) {
			ShowSpectacleMenu();
			continue;
		}

		if (userInput == 3) {
			ShowViewerMenu();
			continue;
		}

		if (userInput == 4) {
			ShowWorkerMenu();
			continue;
		}


	} while (userInput != 0);
}

void Menu::showMainMenu()
{
	cout << endl
		<< "Please select an option:\n"
		<< "1. Concert menu.\n"
		<< "2. Spectacle menu.\n"
		<< "3. Viewer menu.\n"
		<< "4. Worker menu.\n"
		<< "0. Exit.\n";
}

void Menu::ShowConcertMenu() {
	int key = -1;
	while (key != 0) {
		cout << "Please select an option:\n 1.Add new Concert\n2.Show all concerts\n3.Print the cheapest concert\n4.Delete concert\n0.Back\n";
		cin >> key;
		if (key == 1) {
			AddNewConcert();
		}
		else if (key == 2) {
			Concertlist->Print_Info();
		}
		else if (key == 3) {
			Concertlist->Show_Most_Cheapest_Concert();
		}
		else if (key == 4) {
			Delete_Concert();
		}
	}
}

void Menu::AddNewConcert()
{
	int key = -1;;

	cout << "\tAdd Concert or back to main menu\n"
		<< "\t1. Add\n \t0. Back.\n";

	cin >> key;

	if (key == 0)
		return;

	string name, genre, group_name;
	int group_capacity, duration, price;
	cout << "Name: "; cin.get(); getline(cin, name);
	cout << "Group_Name: "; getline(cin, group_name);
	cout << "Genre: "; getline(cin, genre);
	cout << "Group_Capacity: "; cin >> group_capacity;
	cout << "Duration: "; cin >> duration;
	cout << "Price:"; cin >> price;
	try
	{
		Concert concert(name, genre, duration, price, group_name, group_capacity);
		Concertlist->Add(concert);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
	
}
void Menu::Delete_Concert() {
	cout << "Please select the Concert what you want to delete: ";
	int index = 1;
	try
	{
		Concertlist->Print_Info();
		cin >> index;
		Concertlist->Delete(index);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}
void Menu::ShowSpectacleMenu() {
	int key = -1;
	while (key != 0) {
		cout << "Please select an option:\n 1.Add new Spectacle\n2.Show all Spectacle\n3.Print the cheapest Spectacle\n4.Delete Spectacle\n0.Back\n";
		cin >> key;
		if (key == 1) {
			AddNewSpectacle();
		}
		else if (key == 2) {
			Spectaclelist->Print_Info();
		}
		else if (key == 3) {
			Spectaclelist->Show_Most_Cheapest_Spectacle();
		}
		else if (key == 4) {
			Delete_Spectacle();
		}
	}
}
void Menu::AddNewSpectacle()
{
	int key = -1;;

	cout << "\tAdd Spectacle or back to main menu\n"
		<< "\t1. Add\n \t0. Back.\n";

	cin >> key;

	if (key == 0)
		return;

	string name, genre, theatre;
	int capacity, duration, price;
	cout << "Name: "; cin.get(); getline(cin, name);
	cout << "Genre: ";  getline(cin, genre);
	cout << "Theatre: "; getline(cin, theatre);
	cout << "Capacity: "; cin >> capacity;
	cout << "Duration: "; cin >> duration;
	cout << "Price:"; cin >> price;
	try
	{
		Spectacle spectacle(name, genre, duration, price, theatre, capacity);
		Spectaclelist->Add(spectacle);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}

void Menu::Delete_Spectacle() {
	cout << "Please select the Spectacle what you want to delete: ";
	int index = 1;
	try
	{
		Spectaclelist->Print_Info();
		cin >> index;
		Spectaclelist->Delete(index);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}
void Menu::ShowViewerMenu() {
	int key = -1;
	while (key != 0) {
		cout << "Please select an option:\n 1.Add new Viewer\n2.Show all Viewer\n3.Print the oldest Viewer\n4.Delete Viewer\n0.Back\n";
		cin >> key;
		if (key == 1) {
			AddNewViewer();
		}
		else if (key == 2) {
			Viewerlist->Print_Info();
		}
		else if (key == 3) {
			Viewerlist->Show_Oldest_Age_Viewer();
		}
		else if (key == 4) {
			Delete_Viewer();
		}
	}
}
void Menu::AddNewViewer()
{
	int key = -1;;

	cout << "\tAdd Viewer or back to main menu\n"
		<< "\t1. Add\n \t0. Back.\n";

	cin >> key;

	if (key == 0)
		return;

	string name, surname, place;
	int age;
	cout << "Name: "; cin >> name;
	cout << "Surname: "; cin >> surname;
	cout << "Place: "; cin >> place;
	cout << "Age: "; cin >> age;
	try
	{
		Viewer viewer(name, surname, age, place);
		Viewerlist->Add(viewer);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}
void Menu::Delete_Viewer() {
	cout << "Please select the Viewer what you want to delete: ";
	int index = 1;
	try
	{
		Viewerlist->Print_Info();
		cin >> index;
		Viewerlist->Delete(index);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}
void Menu::ShowWorkerMenu() {
	int key = -1;
	while (key != 0) {
		cout << "Please select an option:\n 1.Add new Worker\n2.Show all Worker\n3.Print the oldest Worker\n4.Delete Worker\n0.Back\n";
		cin >> key;
		if (key == 1) {
			AddNewWorker();
		}
		else if (key == 2) {
			Workerlist->Print_Info();
		}
		else if (key == 3) {
			Workerlist->Show_Oldest_Age_Worker();
		}
		else if (key == 4) {
			Delete_Worker();
		}
	}
}

void Menu::AddNewWorker()
{
	int key = -1;;

	cout << "\tAdd Viewer or back to main menu\n"
		<< "\t1. Add\n \t0. Back.\n";

	cin >> key;

	if (key == 0)
		return;

	string name, surname, position;
	int age, salary;
	cout << "Name: "; cin >> name;
	cout << "Surname: "; cin >> surname;
	cout << "Position: "; cin >> position;
	cout << "Age: "; cin >> age;
	cout << "Salary: "; cin >> salary;
	try
	{
		Worker worker(name,surname, position, age, salary);
		//Worker worker;
		//cin >> worker;
		Workerlist->Add(worker);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}

void Menu::Delete_Worker() {
	cout << "Please select the Worker what you want to delete: ";
	int index = 1;
	try
	{
		Workerlist->Print_Info();
		cin >> index;
		Workerlist->Delete(index);
	}
	catch (const std::exception&)
	{
		cout << "Error: Something wrong\n";
	}
}