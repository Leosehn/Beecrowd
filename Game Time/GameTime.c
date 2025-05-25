#include<stdio.h>

int main() {
    int startTime, endTime, duration;
    scanf("%d %d", &startTime, &endTime);
    duration = 0;
    if ( startTime == endTime ) {
        duration = 24;
    }
    else if ( endTime < startTime ) {
        duration = ( 24 - startTime ) + endTime;
    }
    else {
        duration = endTime - startTime;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 1;
}