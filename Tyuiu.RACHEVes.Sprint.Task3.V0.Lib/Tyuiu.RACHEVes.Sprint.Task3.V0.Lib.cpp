// Include necessary headers
#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service1 : public ISprint0Task3
{
	virtual int SummV3(int a, int b, int c) override
	{
		return a + b + c;
	}

};
