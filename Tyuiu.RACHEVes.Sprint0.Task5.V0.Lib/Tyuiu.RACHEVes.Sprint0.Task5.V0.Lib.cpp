
#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service5 : public ISprint0Task5
{
	virtual int Calculate(int s, float r, float p, float u )
	{
		return (((2 * s) * (r / 100)) * p);
	}
};