#include<iostream>

using namespace std;

// Ejemplo ejercicio
int promedioNotas()
{
    int nota1, nota2, nota3;
    cout << "Ingrese primer nota:";
    cin >> nota1;
    cout << "Ingrese segunda nota:";
    cin >> nota2;
    cout << "Ingrese tercer nota:";
    cin >> nota3;
    int promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7)
    {
        cout << "Promocionado";
    }
    else
    {
        if (promedio >= 4)
        {
            cout << "Regular";
        }
        else
        {
            cout << "Reprobado";
        }
    }
    return 0;
}

// ejercicio 1
void mayorTresNumeros() {

    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "El primer número es el mayor";
    }
    else if(num2 >= num1 && num2 >= num3 )
    {
        cout << "El segundo número es el mayor";
    }
    else
    {
        cout << "El tercer número es el mayor";
    }
}

// Ejercicio 2
void positivoNegativoNulo() {

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (num > 0)
    {
        cout << "El numero es positivo";
    }
    else if( num < 0)
    {
        cout << "El numero es negativo";
    }
    else
    {
        cout << "El numero es nulo";
    }
}

// Ejercicio 3
void cantidadCifras() {

    int num;

    cout << "Ingrese un numero mayor a cero y menor a mil: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "El numero ingresado es negativo";
    }
    else if (num > 0 && num < 10)
    {
        cout << "El numero ingresado tiene un digito";
    }
    else if (num < 100 )
    {
        cout << "El numero ingresado tiene dos digitos";
    }
    else if (num < 1000)
    {
        cout << "El numero ingresado tiene 3 digitos";
    }
    else if (num >= 1000)
    {
        cout << "El numero ingresado tiene más de 3 digitos";
    }

}

// Ejercicio 4
void postulanteEmpleo()
{
    int cantidadPreguntas, cantidadCorrectas;
    float porcentajeAciertos;

    cout << "Ingresar la cantidad de preguntas realizadas: ";
    cin >> cantidadPreguntas;

    cout << "Ingresar la cantidad de preguntas correctas: ";
    cin >> cantidadCorrectas;

    if (cantidadCorrectas > cantidadPreguntas)
    {
        cout << "Las cantidades correctas no pueden ser mayor que la cantidad de preguntas realizadas";
        return;
    }

    porcentajeAciertos = ((float)cantidadCorrectas * 100) / (float)cantidadPreguntas;

    cout << "Tu porcentaje es: ";
    cout << porcentajeAciertos;
    cout << "%\n";

    if (porcentajeAciertos >= 90) {
        cout << "Nivel máximo";
    }
    else if( porcentajeAciertos >= 75 && porcentajeAciertos <= 90 )
    {
        cout << "Nivel medio";
    }
    else if ( porcentajeAciertos >= 50 && porcentajeAciertos < 75 )
    {
        cout << "Nivel regular";
    }
    else
    {
        cout << "Fuera del nivel";
    }

}

// Ejecución principal
int main() 
{
    //promedioNotas();
    //mayorTresNumeros();
    //positivoNegativoNulo();
    //cantidadCifras();
    postulanteEmpleo();

    return 0;
}

