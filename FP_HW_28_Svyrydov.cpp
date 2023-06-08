// FP_HW_28_Svyrydov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"

using namespace std;

#define Task 1

int main()
{
#if Task == 1
	Task1();
#elif Task == 2
	Task2();
#elif Task == 3
	Task3();
#endif

}