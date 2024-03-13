#include <stdio.h>

int main() {
    int current_hour, current_minute, cooking_time;
    scanf("%d %d %d", &current_hour, &current_minute, &cooking_time);

    int total_minutes = (current_hour * 60) + current_minute + cooking_time;
    int end_hour = (total_minutes / 60) % 24;
    int end_minute = total_minutes % 60;

    printf("%d %d", end_hour, end_minute);
    return 0;
}
