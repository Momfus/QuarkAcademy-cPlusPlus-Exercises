#include<iostream>

using namespace std;


// Ejemplo 1
void cantidadDigitos()
{
    int valor;
    do {
        cout << "Ingrese un valor entre 0 y 999 (0 finaliza):";
        cin >> valor;
        if (valor >= 100)
        {
            cout << "Tiene 3 dígitos.";
        }
        else
        {
            if (valor >= 10)
            {
                cout << "Tiene 2 dígitos.";
            }
            else
            {
                cout << "Tiene 1 dígito.";
            }
        }
        cout << "\n";
    } while (valor != 0);
}

// Ejemplo 2
void calcularPromedio()
{
    int suma, cant, valor, promedio;
    suma = 0;
    cant = 0;
    do {
        cout << "Ingrese un valor (0 para finalizar):";
        cin >> valor;
        if (valor != 0)
        {
            suma = suma + valor;
            cant++;
        }
    } while (valor != 0);
    if (cant != 0)
    {
        promedio = suma / cant;
        cout << "El promedio de los valores ingresados es:";
        cout << promedio;
    }
    else
    {
        cout << "No se ingresaron valores.";
    }
}
// Ejemplo 3
void calcularPeso()
{
    int cant1, cant2, cant3, suma;
    float peso;
    cant1 = 0;
    cant2 = 0;
    cant3 = 0;
    do {
        cout << "Ingrese el peso de la pieza (0 pera finalizar):";
        cin >> peso;
        if (peso > 10.2)
        {
            cant1++;
        }
        else
        {
            if (peso >= 9.8)
            {
                cant2++;
            }
            else
            {
                if (peso > 0)
                {
                    cant3++;
                }
            }
        }
    } while (peso != 0);
    suma = cant1 + cant2 + cant3;
    cout << "Piezas aptas:";
    cout << cant2;
    cout << "\n";
    cout << "Piezas con un peso superior a 10.2:";
    cout << cant1;
    cout << "\n";
    cout << "Piezas con un peso inferior a 9.8:";
    cout << cant3;
}

// Ejercicio 1:
/* Realizar un programa que acumule(sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga).
Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.
*/
void doWhileSumar()
{

}

// Ejercicio 2:
/*
    En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
    El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
    Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:

        a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
            Estado de la cuenta     'Acreedor' si el saldo es >0.
			                        'Deudor' si el saldo es <0.
			                        'Nulo' si el saldo es =0.

        b) La suma total de los saldos acreedores.
*/
void doWhileCuentasBanco()
{

}

// Ejecución principal
int main()
{
    //cantidadDigitos();
    //calcularPromedio();
    //calcularPeso();
    doWhileSumar();
    //doWhileCuentasBanco();

    return 0;
}