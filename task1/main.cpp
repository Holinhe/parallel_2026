#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#if USE_FLOAT
using var = float;
#else
using var = double;
#endif

int main()
{
    var sum_v = 0;
    int size = 10000000;
    var *array_v{new var[size]{}};
    for(int i = 0; i < size; i++)
    {
        var res = sin(M_PI * 2 / size * i);
        array_v[i] = res;
        sum_v += res;
    }
    cout << sum_v << endl;
}
