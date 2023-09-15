

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service4 : public ISprint0Task4
{
    
        virtual int Calculate (int a, int b, int c, int d)
    { 
            return (a * b) + (c * d);
    }
};