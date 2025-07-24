#include <stdio.h>
#include <iostream>

int main() {
 
    float numbers[6];

    scanf("%f\n%f\n%f\n%f\n%f\n%f",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4],&numbers[5]);

    int count = 0;

    for (int i = 0; i < 6; i++) {
        if (numbers[i]>0) {
            count++;
        }
    }
    std::cout << count << " valores positivos\n";
    return 0;
}