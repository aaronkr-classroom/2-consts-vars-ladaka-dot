#ifndef CAL_H
#define CAL_H

#include <math.h>


double future_value(double principal, double annual_rate, int years) {
    int n = 12; 
    return principal * pow(1 + annual_rate / n, years * n);
}

#endif
