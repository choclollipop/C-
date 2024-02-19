/*
    输入两个整数，打印区间内的数值
*/

#include <iostream>
using namespace std;

int main()
{
    int val1 = 0, val2 = 0;

    std::cin >> val1 >> val2;

    while (val2 >= val1)
    {
        std::cout << val2 << " ";
        val2--;
    }
    
    std::cout << std::endl;

    return 0;
}