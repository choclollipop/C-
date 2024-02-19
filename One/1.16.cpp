/*
    获取一组数据并计算它们的和
    从键盘获取数值的时候结束输入是CTRL + D
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, val = 0;

    while (std::cin >> val)
    {
        sum += val;
    }

    std::cout << "this numbers sum is " << sum << std::endl;

    return 0;
}