//
// Created by Shalini Jaspal on 2026-10-23.
//

#include "analysisFunctions.h"
#include <stddef.h>

double calculateAverage(const int rates[], int count) {
    if (rates == NULL || count == 0) {
        return 0.0;
    }
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += rates[i];
    }
    return (double)sum / count;
}
