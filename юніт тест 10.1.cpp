#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 10.1/лаба 10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест101
{
	TEST_CLASS(юніттест101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k;
			k = main();
			Assert::AreEqual(k, 0);
		}
	};
}
