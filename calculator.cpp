#include <iostream>

int main (){
    int a;
    int b;
    int slo;
    int vis;
    int ymn;
    int del;
    int ost;

    std::cout << "введите 2 числа через пробел" << '\n';
    std::cin >> a >> b;
    slo = a + b;
    std::cout << "сложение:" << slo << '\n';
    vis = a - b;
    std::cout << "вычитание:" << vis << '\n';
    ymn = a * b;
    std::cout << "умножение:" << ymn << '\n';
    if (b == 0){
        std::cout << "делить на ноль нельзя";
    } 
    else {
        double del = (double)a / b;
        std::cout << "деление:" << del << '\n';
        ost = a % b;
        std::cout << "остаток:" << ost << '\n';
    }
}