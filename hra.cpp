// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include<time.h>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int num = 0;
	string input;
	int myNum = 0;
	int money = 500;
    srand(time(0));
	while (true)
	{
		num = rand() % 21;
		system("cls");
		if (money < 0) {
			cout << "prehral si";
			system("break");
		}
		else if (money > 800) {
			cout << "vyhral si!!";
			system("pause");
		}
		cout << "tvoj budget: " << money << "\n";
		cout << "vyber cislo (0-20) : ";
		cin >> myNum;
		if (myNum == num) {
			money += 150;
		}
		else
		{
			money -= 50;
		}
		cout << "cislo bolo: " << num << "\n";
		system("pause");
	}
}

