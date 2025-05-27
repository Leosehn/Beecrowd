#include<stdio.h>
#include<string.h>

int main() {
    char class[20], subclass[20], food[20];
    scanf("%s\n%s\n%sver",&class,&subclass,&food);

    if(!strcmp(class, "vertebrado")) {
        if(!strcmp(subclass, "ave")) {
            if(!strcmp(food, "carnivoro")) {
                printf("aguia\n");
            }
            else {
                printf("pomba\n");
            }
        }
        else {
            if(!strcmp("onivoro", food)) {
                printf("homem\n");
            }
            else {
                printf("vaca\n");
            }
        }
    }
    else {
        if(!strcmp(subclass, "inseto")) {
            if(!strcmp("hematofago", food)) {
                printf("pulga\n");
            }
            else {
                printf("lagarta\n");
            }
        }
        else {
            if (!strcmp("hematofago", food)) {
                printf("sanguessuga\n");
            }
            else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}