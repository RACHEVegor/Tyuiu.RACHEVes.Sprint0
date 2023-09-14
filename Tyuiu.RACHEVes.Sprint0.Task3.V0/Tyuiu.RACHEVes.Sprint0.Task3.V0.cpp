// Tyuiu.RACHEVes.Sprint0.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint.Task3.V0.Lib/Tyuiu.RACHEVes.Sprint.Task3.V0.Lib.cpp"
using namespace std; // пишем данную команду, чтобы на каждой строке не вводить std::

int main()
{
    
    ISprint0Task3* date = new Service1();
   
    cout << "Rachev Egor\n";
    cout << "P = a + b + c\n";
    cout << "Result = " << date->SummV3(10, 11, 5);
    cout << std:: endl;
}
