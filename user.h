#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
using namespace std;

class User {
public:
	User() {
		int choise;
		cout << "Здравствуйте, вы вошли как пользователь\n";
		cout << "Чтобы выйти нажмите 0\n";
		cout << "Выберите действие: ";
		cin >> choise;
		
	}
};