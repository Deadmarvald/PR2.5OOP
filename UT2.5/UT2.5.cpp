#include "pch.h"
#include "CppUnitTest.h"
#include "../PR2.5/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT25
{
	TEST_CLASS(UT25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.SetFirstNum(1);

			Assert::AreEqual(a.GetFirstNum(), 1.);
		}
	};
}