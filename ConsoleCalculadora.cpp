#include <iostream>
using namespace std;

int main() {
    char operacion;
    double num1, num2;

    cout << "Introduce la operaci�n (+, -, *, /): ";
    cin >> operacion;
    cout << "Introduce dos n�meros: ";
    cin >> num1 >> num2;

    switch (operacion) {
    case '+': cout << "Resultado: " << num1 + num2 << endl; break;
    case '-': cout << "Resultado: " << num1 - num2 << endl; break;
    case '*': cout << "Resultado: " << num1 * num2 << endl; break;
    case '/':
        if (num2 != 0)
            cout << "Resultado: " << num1 / num2 << endl;
        else
            cout << "Error: Divisi�n entre cero." << endl;
        break;
    default: cout << "Operaci�n no v�lida." << endl;
    }

    return 0;
}
