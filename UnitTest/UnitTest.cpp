#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab_3a\Tree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(insertTest)
		{
			Tree test;
			int arr_test[5] = { 6,4,2,7,8 };
			for (int i = 0; i < 5; i++) {
				test.insert(arr_test[i]);
			}
		}
	};
}
