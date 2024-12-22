#include <iostream>
using namespace std;

int main() {
    char operacion;
    double num1, num2;

    cout << "Introduce la operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Introduce dos números: ";
    cin >> num1 >> num2;

    switch (operacion) {
    case '+': cout << "Resultado: " << num1 + num2 << endl; break;
    case '-': cout << "Resultado: " << num1 - num2 << endl; break;
    case '*': cout << "Resultado: " << num1 * num2 << endl; break;
    case '/':
        if (num2 != 0)
            cout << "Resultado: " << num1 / num2 << endl;
        else
            cout << "Error: División entre cero." << endl;
        break;
    default: cout << "Operación no válida." << endl;
    }

    return 0;
}
