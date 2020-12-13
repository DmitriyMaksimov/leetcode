#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <set>
#include <array>

// Catch2
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

using namespace std;

#include "solutions/136_SingleNumber.h"
#include "solutions/26_RemoveDuplicatesFromSortedArray.h"
#include "solutions/9_PalindromeNumber.h"
#include "solutions/1480_RunningSumOf1dArray.h"
#include "solutions/1672_RichestCustomerWealth.h"
#include "solutions/1684_CountTheNumberOfConsistentStrings.h"
#include "solutions/1603_DesignParkingSystem.h"
#include "solutions/1528_ShuffleString.h"
#include "solutions/1281_SubtractTheProductAndSumOfDigitsOfAnInteger.h"
#include "solutions/1313_DecompressRunLengthEncodedList.h"
#include "solutions/1662_CheckIfTwoStringArraysAreEquivalent.h"
#include "solutions/1389_CreateTargetArrayInTheGivenOrder.h"


TEST_CASE("Single Number", "[136]")
{
	Solution_136 solution;

	SECTION("Example 1")
	{
		auto v = vector<int>({2, 2, 1});
		REQUIRE(solution.singleNumber(v) == 1);
	}

	SECTION("Example 2")
	{
		auto v = vector<int>({4, 1, 2, 1, 2});
		REQUIRE(solution.singleNumber(v) == 4);
	}

	SECTION("Example 3")
	{
		auto v = vector<int>({1});
		REQUIRE(solution.singleNumber(v) == 1);
	}

	SECTION("Edge cases")
	{
		auto v = vector<int>({-3 * 10000, 3 * 10000, -3 * 10000});
		REQUIRE(solution.singleNumber(v) == 3 * 10000);
	}
}

TEST_CASE("26. Remove Duplicates from Sorted Array", "[26]")
{
	Solution_26 solution;

	SECTION("Example 1")
	{
		auto v = vector<int>({1, 1, 2});
		const auto expected = vector<int>({1, 2});
		REQUIRE(solution.removeDuplicates(v) == expected.size());
		REQUIRE(vector<int>(v.begin(), v.begin() + expected.size()) == expected);
	}

	SECTION("Example 2")
	{
		auto v = vector<int>({0, 0, 1, 1, 1, 2, 2, 3, 3, 4});
		const auto expected = vector<int>({0, 1, 2, 3, 4});
		REQUIRE(solution.removeDuplicates(v) == expected.size());
		REQUIRE(vector<int>(v.begin(), v.begin() + expected.size()) == expected);
	}
}

TEST_CASE("9. Palindrome Number", "[9]")
{
	Solution_9 solution;

	SECTION("Example 1")
	{
		REQUIRE(solution.isPalindrome(121) == true);
	}

	SECTION("Example 2")
	{
		REQUIRE(solution.isPalindrome(-121) == false);
	}

	SECTION("Example 3")
	{
		REQUIRE(solution.isPalindrome(10) == false);
	}

	SECTION("Example 4")
	{
		REQUIRE(solution.isPalindrome(-101) == false);
	}

	SECTION("Example 4")
	{
		REQUIRE(solution.isPalindrome(1234321) == true);
	}
}

TEST_CASE("1480. Running Sum of 1d Array", "[1480]")
{
	Solution_1480 solution;

	SECTION("Example 1")
	{
		auto v = vector<int>({1, 2, 3, 4});
		const auto expected = vector<int>({1, 3, 6, 10});
		REQUIRE(solution.runningSum(v) == expected);
	}

	SECTION("Example 2")
	{
		auto v = vector<int>({1, 1, 1, 1, 1});
		const auto expected = vector<int>({1, 2, 3, 4, 5});
		REQUIRE(solution.runningSum(v) == expected);
	}

	SECTION("Example 3")
	{
		auto v = vector<int>({3, 1, 2, 10, 1});
		const auto expected = vector<int>({3, 4, 6, 16, 17});
		REQUIRE(solution.runningSum(v) == expected);
	}
}

TEST_CASE("1672. Richest Customer Wealth", "[1672]")
{
	Solution_1672 solution;

	SECTION("Example 1")
	{
		auto v = vector<vector<int>>({{1, 2, 3}, {3, 2, 1}});
		REQUIRE(solution.maximumWealth(v) == 6);
	}

	SECTION("Example 2")
	{
		auto v = vector<vector<int>>({{1, 5}, {7, 3}, {3, 5}});
		REQUIRE(solution.maximumWealth(v) == 10);
	}

	SECTION("Example 3")
	{
		auto v = vector<vector<int>>({{2, 8, 7}, {7, 1, 3}, {1, 9, 5}});
		REQUIRE(solution.maximumWealth(v) == 17);
	}
}

TEST_CASE("1684. Count the Number of Consistent Strings", "[1684]")
{
	Solution_1684 solution;

	SECTION("Example 1")
	{
		const auto* allowed = "ab";
		auto words = vector<string>{"ad", "bd", "aaab", "baa", "badab"};
		REQUIRE(solution.countConsistentStrings(allowed, words) == 2);
	}

	SECTION("Example 2")
	{
		const auto* allowed = "abc";
		auto words = vector<string>{"a", "b", "c", "ab", "ac", "bc", "abc"};
		REQUIRE(solution.countConsistentStrings(allowed, words) == 7);
	}

	SECTION("Example 3")
	{
		const auto* allowed = "cad";
		auto words = vector<string>{"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
		REQUIRE(solution.countConsistentStrings(allowed, words) == 4);
	}
}

TEST_CASE("1603. Design Parking System", "[1603]")
{
	SECTION("Example 1")
	{
		ParkingSystem parkingSystem(1, 1, 0);
		REQUIRE(parkingSystem.addCar(1) == true);
		REQUIRE(parkingSystem.addCar(2) == true);
		REQUIRE(parkingSystem.addCar(3) == false);
		REQUIRE(parkingSystem.addCar(1) == false);
	}
}

TEST_CASE("1528. Shuffle String", "[1528]")
{
	Solution_1528 solution;

	SECTION("Example 1")
	{
		vector v{4, 5, 6, 7, 0, 2, 1, 3};
		REQUIRE(solution.restoreString("codeleet", v) == "leetcode");
	}

	SECTION("Example 2")
	{
		vector v{0, 1, 2};
		REQUIRE(solution.restoreString("abc", v) == "abc");
	}

	SECTION("Example 3")
	{
		vector v{3, 1, 4, 2, 0};
		REQUIRE(solution.restoreString("aiohn", v) == "nihao");
	}

	SECTION("Example 4")
	{
		vector v{4, 0, 2, 6, 7, 3, 1, 5};
		REQUIRE(solution.restoreString("aaiougrt", v) == "arigatou");
	}

	SECTION("Example 5")
	{
		vector v{1, 0, 2};
		REQUIRE(solution.restoreString("art", v) == "rat");
	}
}

TEST_CASE("1281. Subtract the Product and Sum of Digits of an Integer", "[1281]")
{
	Solution_1281 solution;

	SECTION("Example 1")
	{
		REQUIRE(solution.subtractProductAndSum(234) == 15);
	}

	SECTION("Example 2")
	{
		REQUIRE(solution.subtractProductAndSum(4421) == 21);
	}
}

TEST_CASE("1313. Decompress Run-Length Encoded List", "[1313]")
{
	Solution_1313 solution;

	SECTION("Example 1")
	{
		vector v{1, 2, 3, 4};
		REQUIRE(solution.decompressRLElist(v) == vector {2, 4, 4, 4});
	}

	SECTION("Example 2")
	{
		vector v{1, 1, 2, 3};
		REQUIRE(solution.decompressRLElist(v) == vector {1, 3, 3});
	}
}

TEST_CASE("1662. Check If Two String Arrays are Equivalent", "[1662]")
{
	Solution_1662 solution;

	SECTION("Example 1")
	{
		vector<string> v{"ab", "c"};
		vector<string> v2{"a", "bc"};
		REQUIRE(solution.arrayStringsAreEqual(v, v2) == true);
	}

	SECTION("Example 2")
	{
		vector<string> v{"a", "cb"};
		vector<string> v2{"ab", "c"};
		REQUIRE(solution.arrayStringsAreEqual(v, v2) == false);
	}

	SECTION("Example 3")
	{
		vector<string> v{"abc", "d", "defg"};
		vector<string> v2{"abcddefg"};
		REQUIRE(solution.arrayStringsAreEqual(v, v2) == true);
	}
}

TEST_CASE("1389. Create Target Array in the Given Order", "[1389]")
{
	Solution_1389 solution;

	SECTION("Example 1")
	{
		vector nums{0, 1, 2, 3, 4};
		vector index{0, 1, 2, 2, 1};
		REQUIRE(solution.createTargetArray(nums, index) == vector {0, 4, 1, 3, 2});
	}

	SECTION("Example 2")
	{
		vector nums{1, 2, 3, 4, 0};
		vector index{0, 1, 2, 3, 0};
		REQUIRE(solution.createTargetArray(nums, index) == vector {0, 1, 2, 3, 4});
	}

	SECTION("Example 3")
	{
		vector nums{1};
		vector index{0};
		REQUIRE(solution.createTargetArray(nums, index) == vector {1});
	}
}
