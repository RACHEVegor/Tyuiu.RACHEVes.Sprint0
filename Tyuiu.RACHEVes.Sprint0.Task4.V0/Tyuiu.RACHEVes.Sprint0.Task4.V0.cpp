#include <iostream>
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib.cpp"
using namespace std; //чтобы в каждой строке не писать std ::
int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    ISprint0Task4* date = new Service4();
    cout << "\tRachev Egor Sergeevich\n";
    cout << "\t–ешение примера четвЄртого варианта (2*3)+(7*4)\n"; // тут € немного с табул€цией поигралс€ :)
    cout << "\tќтвет = " << date->Calculate(2, 3, 7, 4);
}
