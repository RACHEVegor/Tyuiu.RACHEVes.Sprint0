// Tyuiu.RACHEVes.Sprint0Task7V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите 6-и-значное число =  " << endl;
    int number;
    cin >> number;
    int a = number / 100000; // 
    int b = (number / 10000) % 10;
    int c = (number / 1000) % 10;
    int d = (number / 100) % 10;
    int e = (number / 10) % 10;
    int f = number % 10;

    int p;
    cout << "Введите 3-х-значное число или цифру p =";
    cin >> p;
    bool l = (a == p) || (b == p) || (c == p) || (d == p) || (e == p) || (f == p);
    cout << "В записи 6-и-значного числа " << number << ":\t" << boolalpha << l << endl;
}

