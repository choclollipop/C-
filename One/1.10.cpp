/*
    输出10到0之间的数据
*/

#include <iostream>
using namespace std;

int main()
{
    int val = 10;

    while (val >= 0)
    {
        std::cout << val << std::endl;
        val--;
    }

    return 0;
}