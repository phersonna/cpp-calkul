#include <iostream>

int main (){
    bool asser = true;
    int s;
    int a;
    int b;
    int slo;
    int vis;
    int ymn;
    int ost;
do {
    std::cout << "введите 2 числа через пробел" << '\n';
    std::cin >> a >> b;
    slo = a + b;
    std::cout << "сложение:" << slo << '\n';
    vis = a - b;
    std::cout << "вычитание:" << vis << '\n';
    ymn = a * b;
    std::cout << "умножение:" << ymn << '\n';
    if (b == 0){
        std::cout << "делить на ноль нельзя!" << '\n';
    } 
    else {
        double del = (double)a / b;
        std::cout << "деление:" << del << '\n';
        ost = a % b;
        std::cout << "остаток:" << ost << '\n';
    }
std::cout << "продолжить?"<< '\n' << "1-да" << "0- нет" << '\n';
std::cin >> s;
if(s == 0){
    asser = false;
}
}
while (asser);

return 0;

}