#include <stdio.h>
int main () 
{
    int a,b ;
    printf("Enter First and Second Numbers :");
    scanf ("%d %d", &a,&b);

    if (a>b)
     printf ("First is Greater = %d",a);
    else
     printf ("Second is Greater = %d", b);
}