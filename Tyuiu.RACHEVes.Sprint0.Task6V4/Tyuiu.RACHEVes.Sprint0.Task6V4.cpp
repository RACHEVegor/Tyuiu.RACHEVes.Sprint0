// Tyuiu.RACHEVes.Sprint0.Task6V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
    cout << "�������� ����� x -";
	cin >> x;
	cout << "������� ����� y -";
	cin >> y;
	double D = (5 * x) / (7 + y);
	cout << "������� ������� (5 * x) / (7 + y) = "<< D << endl;
	return 0;
}
