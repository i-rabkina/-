#pragma once

#define TOURISM_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include"admin.h"
#include"user.h"
using namespace std;

class Tourism
{
    char* rout; // ����� ��������
    char* type; // ��� �������
    int complexity; // ��������� ��������� - �� 1 �� 6
    double weight; // ��� �� ������ ��������
    int days; // ���������� ����
public:
    Tourism(char* reg, char* type, int category, double weight, int days) :
        rout(reg), type(type), complexity(category),
        weight(weight), days(days) 
    {

    }
    //Tourism(){}
    void login()
    {
        int result = 0;
        puts("1. ����� ��� ������������");
        puts("2. ����� ��� �������������");
        puts("3. �����");
        cout << "�������� �������: ";
        cin >> result;

        switch (result) {
        case 1:
        {
            system("cls");
            User* user = new User();
        }
        break;
        case 2:
        {
            system("cls");
            Admin* admin = new Admin();
        }
        break;
        }
    }
};

