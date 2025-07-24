#include <stdio.h>
#include <iostream>
#include <cstdio>

void calculate_and_print(float salary) {
    double tax_value = 0.00;
    if (salary <= 1000.00) {
        tax_value = salary * 0.08;
    }
    else if (salary <= 2500.00) {
        tax_value = 1000 * 0.08;
        salary -= 1000;
        tax_value += salary * 0.18;
    }
    else {
        tax_value = 1000 * 0.08;
        salary -= 2500;
        tax_value += 1500 * 0.18;
        tax_value += salary * 0.28;
    }
    printf("R$ %.2lf\n",tax_value);
}


int main() {

    double salary = 0.00, percentage = 0.0;

    std::cin >> salary;

    if (salary <= 2000.00) {
        std::cout << "Isento\n";
    }
    else {
        salary -= 2000;
        calculate_and_print(salary);
    }

    return 0;
}