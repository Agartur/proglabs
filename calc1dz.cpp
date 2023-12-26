#include <iostream>
 
int main(){
    int z = 0;
    int c = 0;
    char operation;
    std::cout << "Введите первое число: ";
    std::cin >> z;
    std::cout << "Введите второе число: ";
    std::cin >> c;
    std::cout << "Введите арифметическое действие: ";
    std::cin >> operation;
 
    switch (operation){
    case '-':
        std::cout << "z - c = " << z - c <<'\n';
        break;
    case '+':
        std::cout << "z + c = " << z + c << '\n';
        break;
    case '*':
        std::cout << "z * c = " << z * c << '\n';
        break;
    case '/':
        std::cout << "z / c = " << z / c << '\n';
        break;
    default:
        std::cout << "Ошибочка ептеть\n";
    }
    return 0;
}