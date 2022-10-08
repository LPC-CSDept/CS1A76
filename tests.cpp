// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 finduserstring()", "[example]")
{
	int cstrlen, userlen, position;
	char cstr[] = "Chocolate";
	char userstr[100];

	cstrlen = strlen(cstr);
	userstr[0] = 'c';
	userstr[1] = 'o';
	userstr[2] = 'l';
	userstr[3] = '\0';
	userlen = strlen(userstr);

	position = finduserstring(cstr, cstrlen, userstr, userlen);
	cout << "****************************************\n";
	REQUIRE(position == 3);
}
// tests for exercise 2
TEST_CASE("Ex2 deleteone()", "[example]")
{
	int cstrlen, userlen, position;
	char cstr[] = "C++ Programming";
	char userstr[100];

	cstrlen = strlen(cstr);
	userstr[0] = 'r';
	userstr[1] = 'a';
	userstr[2] = 'm';
	userstr[3] = '\0';
	userlen = strlen(userstr);

	position = finduserstring(cstr, cstrlen, userstr, userlen);
	cout << "****************************************\n";
	REQUIRE(position == 8);
}
