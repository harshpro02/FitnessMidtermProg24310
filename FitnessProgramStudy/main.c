#include <stdio.h>

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


    return 0;
}
