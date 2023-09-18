// Tyuiu.RACHEVes.Sprint0.Task5V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int s = 67; // Расстояние
	double r = 8.5; // Расход бензина
	double p = 6.5; // Цена бензина
	double U;
	double S;
	double K;
	S = (2 * s);
	K = S / 100;
	U = K * p * r;
	cout << U;
	return 0;
}
