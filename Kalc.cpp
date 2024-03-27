#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    char op;
    double num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Выберите операцию (+, -, *, /): ";
    cin >> op;

    cout << "Введите второе число: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << "Результат: " << num1 + num2;
        break;
    case '-':
        cout << "Результат: " << num1 - num2;
        break;
    case '*':
        cout << "Результат: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2;
        }
        else {
            cout << "Ошибка: на ноль не делиться!";
        }
        break;
    default:
        cout << "Ошибка: неправильная операция!";
    }

    return 0;
}