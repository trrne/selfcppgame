#include <iostream>
#include <map>
#include <random>
#include <ctime>
#include <string>
#include <vector>

#include "v2.hpp"
#include "mathf.hpp"
#include "lottery.hpp"

using namespace trrne;
using namespace std;

int main()
{
    v2 a(2, 4), b(8, 12);
    // V2 c = a + b, d = a - b, e = a * b, f = a / b;
    // cout << "a:" << a.to_string() << ", b:" << b.to_string() << endl;
    // cout << "+: " << c.to_string() << endl
    //      << "-: " << d.to_string() << endl
    //      << "*: " << e.to_string() << endl
    //      << "/: " << f.to_string() << endl;

    // cout << mathf::floor(0.1234567890, 2) << endl;

    // cout << rnd::randfloat(0.0, 9.0) << endl;
    vector<float> weights = {1, 100};
    // string rares[3]{"R", "SR", "SSR"};
    // random_device rd;
    // for (int i = 0; i < 16; i++)
    {
        // cout << rares[lottery::binary_search_tree(weights)] << endl;
        cout << lottery::binary_search_tree(weights) << endl;

        // cout << rnd::randuniform(0, 10) << endl;
        // cout << rnd::randint(0, 10) << endl;

        // cout << rd() << endl;
    }

    return 0;
}
