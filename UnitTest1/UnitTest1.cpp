#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2_rec/6.2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 7;
			int a[n] = { 5,15,-9,7,1,-56,38 };
			t = Max(a, n, 1, a[0]);
			Assert::AreEqual(t, 38);
		}
	};
}
