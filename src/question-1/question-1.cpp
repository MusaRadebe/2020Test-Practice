
<<<<<<< HEAD
#include <string>
#include <algorithm>
#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("No character matching")
{
    std::string s1 = "HelloThere!";
    std::string s2 = "Myvct";

    auto first1 = s1.begin();
    auto last1 = s1.end();

    auto first2 = s2.begin();
    auto last2 = s2.end();

    auto iter = find_first_of(first1,last1,first2,last2);
    auto ch = *iter;

    CHECK(ch == NULL);

}

TEST_CASE("Character 'l' matching")
{

    std::string s1 = "Hello There!";
    std::string s2 = "Yo world";

    auto first1 = s1.begin();
    auto last1 = s1.end();

    auto first2 = s2.begin();
    auto last2 = s2.end();

    auto iter = find_first_of(first1,last1,first2,last2);
    auto ch = *iter;

    CHECK(ch == 'l');

}

TEST_CASE("Last character matching")
{

    std::string s1 = "My string";
    std::string s2 = "good";
=======
TEST_CASE("No character matching")
{

    std::string s1 = "Hello There!";
    std::string s2 = "My vctr";
>>>>>>> question-2

    auto first1 = s1.begin();
    auto last1 = s1.end();

    auto first2 = s2.begin();
    auto last2 = s2.end();

    auto iter = find_first_of(first1,last1,first2,last2);
    auto ch = *iter;

<<<<<<< HEAD
    CHECK(ch == 'g');

}
=======
    CHECK(ch == ' ');

}
>>>>>>> question-2
