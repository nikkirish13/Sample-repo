#include <stdio.h>
struct TIME
{
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    scanf("%d %d\n", &startTime.hours, &startTime.minutes);
    scanf("%d %d", &stopTime.hours, &stopTime.minutes);
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
    printf("%d %d\n", diff.hours, diff.minutes);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}