#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib/Tyuiu.RACHEVes.Sprint0.Task4.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod4)
		{
			ISprint0Task4* date = new Service4();
			int a = 2;
			int b = 3;
			int c = 7;
			int d = 4;
			int i;
			i = date->Calculate(a, b, c, d);
			Assert::AreEqual(34, i); //check
		}
	};
}
