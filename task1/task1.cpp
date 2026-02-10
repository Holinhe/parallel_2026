#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float sum_f = 0;
    float *array_f{new float[10000000]{}};
    for(int i = 0; i < 10000000; i++)
    {
        float a = sinf(M_PI * 2 / 10000000 * i);
        array_f[i] = a;
        sum_f += a;
    }
    printf("%.20f\n", sum_f);
    double sum_d = 0;
    double *array_d{new double[10000000]{}};
    for(int i = 0; i < 10000000; i++)
    {
        double a = sin(M_PI * 2 / 10000000 * i);
        array_d[i] = a;
        sum_d += a;
    }
    printf("%.20lf\n", sum_d);
}