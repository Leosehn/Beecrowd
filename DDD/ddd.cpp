#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<int, std::string> dict;

    dict[61] = "Brasilia";
    dict[71] = "Salvador";
    dict[11] = "Sao Paulo";
    dict[21] = "Rio de Janeiro";
    dict[32] = "Juiz de Fora";
    dict[19] = "Campinas";
    dict[27] = "Vitoria";
    dict[31] = "Belo Horizonte";

    int ddd = 0;

    std::cin >> ddd;


    if (dict[ddd] == "") {
        std::cout << "DDD nao cadastrado\n";
    }
    else {
        std::cout << dict[ddd] << "\n";
    }

    return 0;
}