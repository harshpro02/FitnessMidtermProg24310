#include <stdio.h>
#include "analysisFunctions.h"

int main(void) {
    // Patient codes
    char* codes [] = {  "P104", "P208", "P315", "P421", "P537",
        "P642", "P756", "P863", "P974", "P109" };

    // Initial resting heart rates (beats per minute):
    int initialRates[] = { 92, 88, 105, 96, 90, 110, 85, 100, 94, 98};

    // Monthly resting heart rates (beats per minute):
    int monthlyRates[][5] = {
        {86, 82, 80, 78, 75},
        {85, 82, 80, 78, 76},
        {100, 98, 95, 92, 90},
        {92, 90, 88, 86, 84},
        {84, 82, 80, 78, 75},
        {105, 100, 98, 95, 92},
        {82, 80, 78, 76, 74},
        {96, 94, 92, 90, 88},
        {90, 88, 86, 84, 82},
        {94, 92, 90, 88, 86}
    };
    int achievedCount = 0;
    double highestAverage = 0;
    int highestIndex = 0;
    double lowestAverage = calculateAverage(monthlyRates[0], 5);
    int lowestIndex = 0;
    for (int i = 0; i < 10; i++ ) {
        double average = calculateAverage(monthlyRates[0], 5);
        if (average > highestAverage) {
            highestAverage = average;
            highestIndex = i;
        }
        if (average < lowestAverage) {
            lowestAverage = average;
            lowestIndex = i;
        }

        printf("Participant: %\n", codes[i]);
        printf("Average Heart Rate: %.2f BPM\n", average);
        printf("\nTotal Participants: 10\n");

        double target = initialRates[i] * 0.90;

        if (average <= target) {
            printf("Status : Achieved Reduction\n*");
            achievedCount++;
        }
        else {
            printf("Status : Not Achieved\n*");
        }
        printf("\n*");

    }


    printf("\nHighest Average Heart Rate:\n");
    printf("Participant: %\n", codes[highestIndex]);
    printf("Average Heart Rate: %.2f BPM\n", highestAverage);
    printf("\nLowest Average Heart Rate:\n");
    printf("Participant: %\n", codes[lowestIndex]);
    printf("Average Heart Rate: %.2f BPM\n", lowestAverage);
    return 0;
}
