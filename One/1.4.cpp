#include <iostream>
using namespace std;

/* 从键盘获取两个整数，输出两个整数的乘积 */

int main ()
{
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;
    std:: cout << "The mul of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;

    return 0;
}