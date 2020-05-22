#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);
    if (k < 0 || n < 0)
        return 0;
    if (k >= n)
        return 1;
    if (k == 0)
        return n;
    int res = ceil(((double)n/((double)k + (double)1)));
    printf("%d\n", res);
    return res;
}