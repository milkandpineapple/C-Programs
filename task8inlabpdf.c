#include <stdio.h>
int main ()
{
    int input;
    printf ("Enter The Number :");
    scanf ("%d", &input);

    if (input%2==0 & input%5!=0)
      {printf ("Not multiple of 2 and 5 both");}
    else if (input%5==0 & input%2!=0)
      {printf ("Not multiple of 2 and 5 both");}
    else if (input%2==0 & input%5==0)
      {printf ("%d", input);}
    else 
      {printf ("Not a multiply we want.");}
}