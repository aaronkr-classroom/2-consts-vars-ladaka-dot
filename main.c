#include <stdio.h>
#include "cal.h"

int main() {
    double principal = 1000000.0;   
    double annual_rate = 0.10;      
    int years = 40;                 

    double result = future_value(principal, annual_rate, years);

    printf("����: %.0f��\n", principal);
    printf("������: %.2f%%\n", annual_rate * 100);
    printf("���� �Ⱓ: %d��\n", years);
    printf("�̷� ��ġ: %.2f��\n", result);

    return 0;
}
