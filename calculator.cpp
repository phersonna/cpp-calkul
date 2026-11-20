#include <iostream>
 
int main() {
    int a;
    int b;

    std::cout << "введите число:";
    std::cin >> a;
    std::cout << "введите число:";
    std::cin >> b;
    int sym = a + b;
    int raz = a - b ;
    int pro = a * b ;
    double del = a / b;
    int ost = a % b;

    std::cout << "сложение:" << sym << '\n';
    std::cout << "вычитание:" << raz << '\n';
    std::cout << "умножение:" << pro << '\n';
    std::cout << "деление:" << del << '\n';
    std::cout << "остаток:" << ost << '\n';

}