#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1.1/FloatRange.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FloatRange z;
			bool k =0;
			k = z.rangeСheck(k);
			Assert::AreEqual(k, false);
		}
	};
}
