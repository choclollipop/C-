/*
    修改1.11的程序，添加如果第一个输入的值大于第二个输入的值的情况
*/

#include <iostream>
using namespace std;

int main ()
{
    int val1 = 0;
    int val2 = 0;

    std::cin >> val1 >> val2;

    if (val1 >= val2)
    {
        while (val1 >= val2)
        {
            std::cout << val1 << " ";
            val1--;
        }
    }
    else
    {
        while (val1 <= val2)
        {
            std::cout << val2 << " ";
            val2--;
        }
    }

    std::cout << std::endl;

    return 0;
}