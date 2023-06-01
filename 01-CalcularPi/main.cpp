#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
    //necesito calcular 3,141592
    int i;
    float p = 0; 
    for (i = 0; i < 250000; i++)
    {
        p = (pow((-1), i) / ((2*i) + 1)) + p;
    }
    cout << setprecision(6) << fixed << p*4 << endl;
    return 0;
}