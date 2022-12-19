#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13_1/Lab_13_1.cpp"
#include "../Lab_13_1/Dod.cpp"
#include "../Lab_13_1/Sum.cpp"
#include "../Lab_13_1/Var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab131
{
	TEST_CLASS(UnitTestLab131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			xp = 10.0; xk = 100.0; dx = 10.0; eps = 0.00001;
			x = xp;
			while (x < xk && abs(x) > 1)
			{
				sum();
				Assert::AreEqual(S, atanh(1.0 / x), eps);
				x += dx;
			}

		}
	};
}