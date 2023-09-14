#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint.Task3.V0.Lib/Tyuiu.RACHEVes.Sprint.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service1();

			    int a = 3,	b = 4,	c = 5,	d;

			d = date->SummV3(a, b, c);

			Assert::AreEqual(12, d);
		}
	};
}