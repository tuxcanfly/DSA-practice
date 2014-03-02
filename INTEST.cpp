#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int n, i, k, x = 0;
    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d", &i);
        if (i % k == 0) {
            x++;
        }
    }
    printf("%d", x);
}
