#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.1/Triad.h"
#include "../OOP3.1/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad triad1(3, 5, 7);
			Triad triad2(4, 6, 8);

			
			bool result = triad1 < triad2;

			// Assert
			Assert::IsTrue(result);
		}
	};
}
