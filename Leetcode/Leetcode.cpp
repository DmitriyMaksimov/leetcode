#include <iostream>
#include <vector>
#include <numeric>

// Catch2
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

using namespace std;

#include "solutions/136_SingleNumber.h"
#include "solutions/26_RemoveDuplicatesFromSortedArray.h"
#include "solutions/9_PalindromeNumber.h"
#include "solutions/1480_RunningSumOf1dArray.h"
#include "solutions/1672_RichestCustomerWealth.h"


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
