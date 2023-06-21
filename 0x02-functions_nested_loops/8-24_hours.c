#include <stdio.h>

/**
 * Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer() {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            // Print the current time
            printf("%02d:%02d\n", hour, minute);
        }
    }
}

int main() {
    jack_bauer();
    return 0;
}

