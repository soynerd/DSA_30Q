//Define a structure time and store two times in hours minutes and seconds and display their sum time

#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main() {

    struct time t1 = {5, 30, 45};
    struct time t2 = {2, 45, 15};
    struct time sum_time;

    sum_time.seconds = t1.seconds + t2.seconds;
    sum_time.minutes = t1.minutes + t2.minutes + sum_time.seconds / 60;
    sum_time.hours = t1.hours + t2.hours + sum_time.minutes / 60;
    sum_time.minutes %= 60;
    sum_time.seconds %= 60;

    printf("Sum time: %d hours, %d minutes, %d seconds\n", sum_time.hours, sum_time.minutes, sum_time.seconds);

    return 0;
}
