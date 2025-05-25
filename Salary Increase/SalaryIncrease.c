#include<stdio.h>

int main() {

    double salary, newSalary, reajustment;

    scanf("%lf", &salary);

    if (salary <= 400.00) {
        reajustment = salary * 0.15;
        newSalary = salary + reajustment;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", newSalary, reajustment);    
    }
    else if (salary <= 800.00) {
        reajustment = salary * 0.12;
        newSalary = salary + reajustment;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", newSalary, reajustment);
    }
    else if (salary <= 1200.00) {
        reajustment = salary * 0.10;
        newSalary = salary + reajustment;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", newSalary, reajustment);
    }
    else if (salary <= 2000.00) {
        reajustment = salary * 0.07;
        newSalary = salary + reajustment;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", newSalary, reajustment);
    }
    else {
        reajustment = salary * 0.04;
        newSalary = salary + reajustment;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", newSalary, reajustment);
    }

    return 0;
}