#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int n = 5;
            int array[2 * n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            recursiveSwap(array, 0, 2 * n - 1);

            Assert::AreEqual(2, array[0]);
            Assert::AreEqual(1, array[1]);
            Assert::AreEqual(4, array[2]);
            Assert::AreEqual(3, array[3]);
            Assert::AreEqual(6, array[4]);
            Assert::AreEqual(5, array[5]);
            Assert::AreEqual(8, array[6]);
            Assert::AreEqual(7, array[7]);
            Assert::AreEqual(10, array[8]);
            Assert::AreEqual(9, array[9]);
		}
	};
}
