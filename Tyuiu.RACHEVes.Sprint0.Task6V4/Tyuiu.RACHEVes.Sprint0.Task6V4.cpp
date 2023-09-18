// Tyuiu.RACHEVes.Sprint0.Task6V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
    cout << "¬введите число x -";
	cin >> x;
	cout << "¬ведите число y -";
	cin >> y;
	double D = (5 * x) / (7 + y);
	cout << "–ешение примера (5 * x) / (7 + y) = "<< D << endl;
	return 0;
}
