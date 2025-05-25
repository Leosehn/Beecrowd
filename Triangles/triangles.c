#include <stdio.h>

int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    // printf("%.2f %.2f %.2f\n", a, b, c);

    if (b > a && b >= c) {
        float temp = 0;
        temp = a;
        a = b;
        b = temp;
    }
    else if(c > a && c > b) {
        float temp = 0;
        temp = a;
        a = c;
        c = temp;
    }
    
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
        fclose(stdin);
        return 0;
    } if (a * a == b * b + c * c) {
        printf("TRIANGULO RETANGULO\n");
    } if (a * a > b * b + c * c) {
        printf("TRIANGULO OBTUSANGULO\n");
    } if (a * a < b * b + c * c) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a == c) {
        printf("TRIANGULO EQUILATERO\n");
    } 
    if (a == b || a == c || b == c) {
        if (a == b && a != c) {
            printf("TRIANGULO ISOSCELES\n");
        } else if (a == c && a != b) {
            printf("TRIANGULO ISOSCELES\n");
        } else if (b == c && b != a) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    fclose(stdin);
    // printf("%.2f %.2f %.2f\n", a, b, c);
    return 0;
}