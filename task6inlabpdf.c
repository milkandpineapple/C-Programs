#include <stdio.h>
int main ()
{
    int input;
    printf ("Enter The Number :");
    scanf ("%d",&input);

    if (input%2==0)
     {printf ("%d", input);}
    else if (input%5==0)
     {printf ("%d", input);}
    else 
     {printf ("Not a multiple of 2 or 5.");}

    return 0;
}