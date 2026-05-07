#include <iostream>

using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        cout << "============================" << endl;
        cout << "      CALCULADORA C++       " << endl;
        cout << "============================" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {

            cout << "\nIngrese el primer numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            switch(opcion) {

                case 1:
                    resultado = num1 + num2;
                    cout << "\nResultado: " << resultado << endl;
                    break;

                case 2:
                    resultado = num1 - num2;
                    cout << "\nResultado: " << resultado << endl;
                    break;

                case 3:
                    resultado = num1 * num2;
                    cout << "\nResultado: " << resultado << endl;
                    break;

                case 4:
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        cout << "\nResultado: " << resultado << endl;
                    } else {
                        cout << "\nError: No se puede dividir por cero." << endl;
                    }
                    break;
            }

        } else if (opcion != 5) {
            cout << "\nOpcion invalida." << endl;
        }

        cout << endl;

    } while(opcion != 5);

    cout << "Programa finalizado." << endl;

    return 0;
}