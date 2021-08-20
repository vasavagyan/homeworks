#include <iostream>
#include "mySharedPtr.h"


int main()
{
    mySharedPtr<int> p = new int;
    *p = 3;
    std::cout << *p;

    return 0;
}
