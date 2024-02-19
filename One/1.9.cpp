#include <iostream>
using namespace std;

/* 输出50到100之间的整数相加的和 */

int main()
{
    int sum = 0, val = 50;

    while (val <= 100)
    {
        sum += val;
        val++;
    }

    std::cout << "the sum of " << sum << std::endl;

    return 0;
}