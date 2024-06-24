#include <vector>
#include <iostream>
#include <functional>


void foo(int i)
{
    std::cout << i << '\n';
}


int main()
{
    std::vector<std::function<void(int)>> vfunc;
    vfunc.push_back(foo);
    vfunc[0](1);
    return 0;
}