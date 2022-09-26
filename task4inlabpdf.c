#include <stdio.h>
int main ()
{
    int a,b ;
    printf ("Enter Two Numbers :");
    scanf ("%d %d", &a, &b);
    int c = a-b;
    int d = b-a;

    if (a>b)
     printf ("%d", c);
    else
    printf ("%d", d);
}