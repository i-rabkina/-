#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include "user.h"
#include"admin.h"
#include "tourism.h"
using namespace std;



int main() {
    setlocale(LC_ALL, "rus");
    Tourism* t = new Tourism();
    t->login();
    
}