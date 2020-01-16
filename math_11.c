#include <stdio.h>
int gcd ( int a, int b )
{
    int tmp;
    while (b!=0)
    {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
int main()
{
    int a, b, c;
    scanf ("%d %d", &a, &b);
    c = gcd(a, b);
    printf("%d\n", c);
    return 0;
}
