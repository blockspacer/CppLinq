#include "test_utility.hpp"
#include <iostream>
#include <linq/query.hpp>

using namespace std;
using namespace linq;

int main()
{
    int a1[]{ 1, 2, 3, 4, 5, 6 };
    int a2[]{ 2, 4, 6 };
    auto e = enumerable(a1) >> where([](int& a) { return a % 2 == 0; });
    if (test::equal(e.begin(), e.end(), a2, a2 + 3))
    {
        cout << "Success." << endl;
    }
    return 0;
}