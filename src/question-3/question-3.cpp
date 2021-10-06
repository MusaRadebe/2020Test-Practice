#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int Square(int x)
{
    return pow(x,2);

}

int main()
{
    vector<int>myVec{2,3,4,6};
    vector<int>vec_of_squares(myVec.size());
    auto first = myVec.begin();
    auto last = myVec.end();

    transform(first,last,begin(vec_of_squares),Square);
    auto sum =0.0;

    auto sum_of_squares = accumulate(vec_of_squares.begin(),vec_of_squares.end(),sum);

    auto rms_ = sqrt(sum_of_squares/vec_of_squares.size());
     cout << rms_;

    return 0;
}

