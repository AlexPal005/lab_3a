#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab_3a\Tree.cpp"

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
			Assert::AreEqual(7, test.search(6)->parent->key);
			Assert::AreEqual('b',test.search(2)->color);
			Assert::AreEqual(7, test.search(4)->right->key);
			Assert::AreEqual(2, test.search(4)->left->key);
			
		}
		TEST_METHOD(delTest) {

			Tree test;
			int arr_test[5] = { 6,4,2,7,8 };

			for (int i = 0; i < 5; i++) {
				test.insert(arr_test[i]);
			}
			test.del(7);
			Assert::AreEqual(8, test.search(6)->right->key);
			Assert::AreEqual('r', test.search(6)->right->color);
			Assert::AreEqual(4, test.search(6)->parent->key);
		}
	};
}
