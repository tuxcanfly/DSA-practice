#include <stdio.h>
#include <iostream>

using namespace std;

long long unsigned int fact (const long long unsigned int& k)
{
    if (k == 1) {
        return 1;
    }
    else {
        return k * fact(k-1);
    }
}

int main ()
{
    int n;
    long long unsigned int x, k;
    scanf("%d", &n);
    while (n--) {
        scanf("%lld", &k);
        x = fact(k);
        printf("%lld\n", x);
    }
}
