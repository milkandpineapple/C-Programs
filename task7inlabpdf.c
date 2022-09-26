#include <stdio.h>
int main ()
{
    int input;
    printf ("Enter The Number :");
    scanf ("%d", & input);

    if (input%2==0 & input%5!=0)
      {printf ("%d", input);}
    else if (input%5==0 & input%2!=0)
      {printf ("%d", input);}
    else if (input%2==0 & input%5==0)
      {printf ("Multiple of 2 & 5 both.");}
    else 
      {printf ("Not a multiple we want.");}

    return 32; 


}