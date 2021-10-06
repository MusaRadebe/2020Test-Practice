
TEST_CASE("No character matching")
{

    std::string s1 = "Hello There!";
    std::string s2 = "My vctr";

    auto first1 = s1.begin();
    auto last1 = s1.end();

    auto first2 = s2.begin();
    auto last2 = s2.end();

    auto iter = find_first_of(first1,last1,first2,last2);
    auto ch = *iter;

    CHECK(ch == ' ');

}