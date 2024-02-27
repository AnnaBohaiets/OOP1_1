#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPlab_1.1/Fraction.h"
#include "../OOPlab_1.1/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestOOP11
{
	TEST_CLASS(UnitTestOOP11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction f;
			f.SetFirst(5);
			f.SetSecond(2);
			int p = f.GetFirst();
			int s = f.GetSecond();
			Assert::AreEqual(5, p);
			Assert::AreEqual(2, s);

		}
	};
}
