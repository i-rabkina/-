#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Admin 
{
public:
	Admin() {
		cout << "Здравствуйте, вы вошли как администратор\n";
		cout<<"1. Ввести данные\n";
		cout << "2. Удалить данные\n";
		cout << "3. Редактировать данные\n";
		cout << "4. Выйти\n";
		cout << "Выберите действие: ";
		int choise;
		cin >> choise;
		switch (choise)
		{
			case 1:
			insertData();
			break;
		}
	}
	void insertData() 
	{
		std::ifstream inputFile("tourism.txt");
		if (!inputFile)
		{
			std::cout << "Error opening file." << std::endl;
			
		}
		//Tourism* t = new Tourism();
	}
};