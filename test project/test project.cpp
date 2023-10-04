#include <iostream>

using namespace std;

int main()

{
    cout << "Begin 15" << endl;// Begin 15
    int A = 0, B = 0, C = 0;
    cout << "Введіть А : ";
    cin >> A; //Введення числа А
    cout << "Введіть B : ";
    cin >> B; //Введення числа B
    cout << "Введіть C : ";
    cin >> C; //Введення числа С

    int buff = A; //Присвоєння новій змінній дані зі змінної А
    A = C;
    C = B;
    B = buff; // Перемішення чисел

    cout << A << endl << B << endl << C << endl;

    cout << "Begin 23" << endl;// Begin 23 

    double Fahrenheit = 0, Celsium = 0; //Ініціалізація змінних
    cout << "Введiть температуру(Фаренгейт) = ";
    cin >> Fahrenheit; //Введення температури у Фаренгейтах

    Celsium = (Fahrenheit - 32) * 5 / 9; //Розрахування
    cout << "Температура у Цельсіях : " << Celsium; // Виведення температури
}