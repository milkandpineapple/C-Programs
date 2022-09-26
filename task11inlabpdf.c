#include <stdio.h>
int main ()
{
    double input;
    printf ("Enter The Value of S :");
    scanf ("%lf", &input);

    double cond_1;
    double cond_2;

    cond_1 = 3000 - 125 * input * input;
    cond_2 = 12000 / (4 + (input*input) / 14900);

    if (input < 100)
      {printf ("L = %lf", cond_1);}
    else if (input >= 100)
      {printf ("L = %lf", cond_2);}
}