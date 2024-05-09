#include <iostream>
#include "utils.hpp"

namespace utils {

void foo()
{
    using namespace std;

    cout << "foo\n";
}

int bar(int a, int b, int c)
{
    return a + b + c;
}

};
