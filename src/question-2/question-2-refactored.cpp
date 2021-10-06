
// C++ program to print Pascal's triangle

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::endl;


int fact(int n)
{
    return n > 1 ? fact(n - 1) * n : 1;
}

int main()
{
    auto r_max = 0,value = 0;

    std::cout << "Enter the number of rows of Pascal's Triangle" << endl;
    std::cin >> r_max;

    for(auto r = 0; r < r_max; r++)
    {
        // Print leading spaces
        for(auto i = r; i <= r_max; i++)
            std::cout << "  ";

        for(auto  i = 0; i <= r; i++)
        {
            value = fact(r)/(fact(i)*fact(r-i));
            std::cout << "  " << value;
        }
        std::cout << endl;
    }

    return 0;
}
