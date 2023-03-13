
#include<iostream>

using namespace std;

// Ejercicio ejemplo 1
int impuestosSueldo()
{

    float sueldo;
    cout << "Ingrese el sueldo:";
    cin >> sueldo;
    if (sueldo > 3000)
    {
        cout << "Esta persona debe abonar impuestos";
    }
    return 0;

}

// Ejercicio ejemplo 2
int cualEsMayor()
{

    int num1, num2;
    cout << "Ingrese primer valor:";
    cin >> num1;
    cout << "Ingrese segundo valor:";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1;
    }
    else
    {
        cout << num2;
    }
    return 0;

}

// Ejercicio 1
int sumatoriaMultiplicacionMayorMenor()
{

    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if ( num1 > num2 )
    {
        cout << "El primero es mayor al segundo.";
        cout << "\n";

        cout << "Su suma: ";
        cout << num1 + num2;

        cout << "\n";
        cout << "Su diferencia: ";
        cout << num1 - num2;

    }
    else
    {

        cout << "El primero es menor o igual al segundo.";
        cout << "\n";

        cout << "Su producto: ";
        cout << num1 * num2;

        cout << "\n";
        cout << "Su división: ";
        cout << (float)num1 / (float)num2;

    }

    return 0;

}

// Ejercicio 2
int notasAlumnos() 
{

    float nota1, nota2, nota3;

    cout << "Primera nota: ";
    cin >> nota1;

    cout << "Segunda nota: ";
    cin >> nota2;

    cout << "Tercera nota: ";
    cin >> nota3;

    if ((nota1 + nota2 + nota3) / 3)
    {
        cout << "Promocionado";
    }
    else 
    {
        cout << "No Promocionado";
    }

    return 0;
}

// Ejercicio 3
int unoDosDigitos()
{
    int num;

    cout << "Ingresar un número entero mayor a 0 y menor a 100: ";
    cin >> num;

    if (num < 1) 
    {
        cout << "El numero ingresado es menor a 1";
        return 0;
    }
    else
    {
        if (num > 99)
        {
            cout << "El numero ingresado es mayor a 99";
            return 0;
        }
        else
        {
            if (num < 10)
            {
                cout << "El numero ingresado tiene un solo digito";
            }
            else
            {
                cout << "El numero ingresado tiene dos digitos";
            }

            return 0;
        }
    }
}

/// Ejecución principal
int main()
{
    // impuestosSueldo();
    // cualEsMayor();
    //sumatoriaMultiplicacionMayorMenor();
    //notasAlumnos();
    unoDosDigitos();
}
