#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 8.1.2(String)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string s;
			s = "bbbbabcbbbb";
			Change(s);

			Assert::AreEqual(s[2], '*');
		}
	};
}
