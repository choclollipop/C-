/*
    计算-100 累加到100的终值
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    
    for (int idx = -100; idx <= 100; idx++)
    {
        sum += idx;
    }

    std::cout << "sum is " << sum << std::endl;

    return 0;
}