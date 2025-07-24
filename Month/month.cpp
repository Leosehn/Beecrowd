#include <stdio.h>
#include <string>
#include <iostream>

int main() {

    const std::string month[] = {"zero", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int month_input;

    std::cin >> month_input;

    std::cout << month[month_input] << "\n";

    return 0;
}