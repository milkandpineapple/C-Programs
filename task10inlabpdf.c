#include <stdio.h>
int main ()
{
    int input;
    printf ("Input Hours :");
    scanf ("%d",&input);

    int cond_1;
    int cond_2;
    int extra_hour;

    cond_1 = 200 * input;
    extra_hour = input - 40;
    cond_2 = (extra_hour * 300) + 8000;

    if (input < 0)
      {printf ("Hour cannot be negative.");}
    else if (input > 168)
      {printf ("Impossible to work more than 168 hours weekly.");}
    else if (input <= 40)
      {printf ("%d", cond_1);}
    else if (input > 40)
      {printf ("%d", cond_2);}
    else 
      {printf ("Error");}
}