#include <iostream>
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib.cpp"
using namespace std; //����� � ������ ������ �� ������ std ::
int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    ISprint0Task4* date = new Service4();
    cout << "\tRachev Egor Sergeevich\n";
    cout << "\t������� ������� ��������� �������� (2*3)+(7*4)\n"; // ��� � ������� � ���������� ��������� :)
    cout << "\t����� = " << date->Calculate(2, 3, 7, 4);
}
