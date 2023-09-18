#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.RACHEVes.Sprint0/Tyuiu.RACHEVes.Sprint0.Task5.V0.Lib/Tyuiu.RACHEVes.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod5)
		{
			ISprint0Task5* date = new Service5();
			int s = 67, float r = 8.5, float p = 6.5, u;
			u = date-> Calculate(s, r, p, u);

			Assert::AreEqual(74.04, u);

		}
	};
}
