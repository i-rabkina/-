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
		cout << "������������, �� ����� ��� �������������\n";
		cout<<"1. ������ ������\n";
		cout << "2. ������� ������\n";
		cout << "3. ������������� ������\n";
		cout << "4. �����\n";
		cout << "�������� ��������: ";
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