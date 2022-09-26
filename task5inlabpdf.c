#include <stdio.h>
int main ()
{
    int a ;
    printf ("Enter The Number : ");
    scanf ("%d", &a);

    if (a%2==0)
    printf ("%d is a even number.", a);
    else 
    printf ("%d is odd number.", a);
}