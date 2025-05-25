#include<stdio.h>

int main() {
    int initialHour, initialMinute, finalHour, finalMinute, differenceHour, differenceMinute;

    differenceHour = 0;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    //Calculate the difference in minutes

    if (finalMinute < initialMinute) {
        differenceMinute = (finalMinute + 60) - initialMinute;
        differenceHour -= 1;
    }
    else if (finalMinute == initialMinute) {
        differenceMinute = 0;
    }
    else {
        differenceMinute = finalMinute - initialMinute;
    }
    if (finalHour < initialHour) {
        differenceHour += (finalHour + 24) - initialHour;
    }
    else if (finalHour == initialHour) {
        if (finalMinute == initialMinute || finalMinute < initialMinute) {
            differenceHour += 24;
        }
        else {
            differenceHour += 0;
        }
        
    }
    else {
        differenceHour += finalHour - initialHour;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", differenceHour, differenceMinute);

    return 0;
}