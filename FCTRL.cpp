#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int num_zeroes (const int& k)
{
    int i;
    long int d_5 = 0;
    for (i=1; pow(5, i)<=k; i++) {
        d_5 += k / pow(5, i);
    }
    return d_5;
}

int main ()
{
    int n, x;
    int k;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &k);
        x = num_zeroes(k);
        printf("%d\n", x);
    }
}
