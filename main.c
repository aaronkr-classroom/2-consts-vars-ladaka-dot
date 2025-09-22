#include <stdio.h>
#include "cal.h"

int main() {
    double principal = 1000000.0;   
    double annual_rate = 0.10;      
    int years = 40;                 

    double result = future_value(principal, annual_rate, years);

    printf("원금: %.0f원\n", principal);
    printf("연이율: %.2f%%\n", annual_rate * 100);
    printf("투자 기간: %d년\n", years);
    printf("미래 가치: %.2f원\n", result);

    return 0;
}
