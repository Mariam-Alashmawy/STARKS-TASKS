#include <stdio.h>
#include <stdlib.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct Time start_time, stop_time, difference;
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d",&start_time.hours,&start_time.minutes,&start_time.seconds);
    printf("Enter the stop time (hours minutes seconds): ");
    scanf("%d %d %d",&stop_time.hours,&stop_time.minutes,&stop_time.seconds);
    int start_time_in_sec = start_time.hours*3600 + start_time.minutes*60 + start_time.seconds;
    int stop_time_in_sec = stop_time.hours*3600 + stop_time.minutes*60 + stop_time.seconds;
    int difference_in_sec = stop_time_in_sec - start_time_in_sec;

    difference.hours = difference_in_sec/3600;
    difference_in_sec %= 3600;
    difference.minutes = difference_in_sec/60;
    difference_in_sec %= 60;
    difference.seconds = difference_in_sec;

    printf("The difference is: %d hours %d minutes %d seconds",difference.hours,difference.minutes,difference.seconds);
    return 0;
}
