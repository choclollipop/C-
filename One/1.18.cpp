/*
    判断输入一组数据中同一个数据连续出现的次数
*/

#include <iostream>
using namespace std;

int main()
{
    int cur = 0, val = 0;

    if (std::cin >> cur)
    {
        int count = 1;
        while (std::cin >> val)
        {
            if (val == cur)
            {
                count++;
            }
            else
            {
                std::cout << cur << " occurs " << count << " times " << std::endl;
                cur = val;
                count = 1;
            }
        }

        std::cout << cur << " occurs " << count << " times " << std::endl;

    }

    return 0;
}