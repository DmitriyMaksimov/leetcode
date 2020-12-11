#include <iostream>
#include <vector>

// Catch2
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

using namespace std;

#include "solutions/136_SingleNumber.h"
#include "solutions/26_RemoveDuplicatesFromSortedArray.h"


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
