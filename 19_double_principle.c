#include <stdio.h>
#include <math.h>

int main() {

    double principle = 1000, rate = 5, time = 2;
    double amount, CI;

    amount = principle * pow((1 + rate / 100), time);
    CI = amount - principle;

    printf("Compound Interest is: %.2f\n", CI);

    return 0;
}
