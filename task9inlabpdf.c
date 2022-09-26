#include <stdio.h>
int main ()
{
    int input;
    printf ("Enter Second :");
    scanf ("%d", &input);

    int hour;
    int minute;
    int second;
    int remain_second;

    hour = input / 3600 ;
    remain_second = input % 3600 ;
    minute = remain_second / 60 ;
    second = remain_second % 60 ;

    printf ("Hours : %d . Minutes : %d . Seconds : %d" , hour , minute , second);
    return 32;


}