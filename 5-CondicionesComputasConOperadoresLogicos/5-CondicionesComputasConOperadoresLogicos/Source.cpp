#include<iostream>

using namespace std;


// Ejercicio ejemplo 1
void numeroMayor() 
{

    int num1, num2, num3;
    cout << "Ingrese primer valor:";
    cin >> num1;
    cout << "Ingrese segundo valor:";
    cin >> num2;
    cout << "Ingrese tercer valor:";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << num1;
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }

}

// Ejercicio ejemplo 2
void primerTrimestre() 
{
    int dia, mes, año;
    cout << "Ingrese nro de día:";
    cin >> dia;
    cout << "Ingrese nro de mes:";
    cin >> mes;
    cout << "Ingrese nro de año:";
    cin >> año;
    if (mes == 1 || mes == 2 || mes == 3)
    {
        cout << "Corresponde al primer trimestre";
    }
}

// Ejercicio 1 - Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
void fechaNavidad() 
{

    int dia, mes;

    cout << "Ingresar día: ";
    cin >> dia;

    cout << "Ingresar mes: ";
    cin >> mes;

    if (mes == 12 && dia == 25) {
        cout << "Es Navidad!!";
    }
    else {
        cout << "No es navidad";
    }

}

// Ejercicio 2 - Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.
void tresValoresIguales()
{
    int num1, num2, num3;

    cout << "Ingresar primer numero: ";
    cin >> num1;

    cout << "Ingresar segundo numero: ";
    cin >> num2;

    cout << "Ingresar tercer numero: ";
    cin >> num3;

    if ( num1 == num2 && num2 == num3 )
    {
        int suma = num1 + num2;
        cout << "Los numeros son iguales, la suma de ambos es: ";
        cout << suma;

        cout << "\nY ese resultado multiplicado por el tercero es: ";
        cout << suma * num3;
        
    }
    else
    {
        cout << "Los numeros no son iguales";
    }

}


// Ejercicio 3 - Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
void todosMenoresDiez()
{
    int num1, num2, num3; 

    cout << "Ingresar primer numero: ";
    cin >> num1;

    cout << "Ingresar segundo numero: ";
    cin >> num2;

    cout << "Ingresar tercer numero: ";
    cin >> num3;

    if (num1 < 10 && num2 < 10 && num3 < 10) {
        cout << "Todos los numeros son menores a diez";
    }
    else {
        cout << "No todos los numeros son menores a diez";
    }

}
// Ejercicio 4 - Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
void algunosMenorDiez()
{
    int num1, num2, num3;

    cout << "Ingresar primer numero: ";
    cin >> num1;

    cout << "Ingresar segundo numero: ";
    cin >> num2;

    cout << "Ingresar tercer numero: ";
    cin >> num3;

    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        cout << "Alguno de los numeros es menor a diez";
    }
    else
    {
        cout << "Ninguno de los numeros es menor a diez";
    }
}

// Ejercicio 5 - Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y(distintos a cero).
//               Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0, 2º Cuadrante : x < 0 Y y > 0, etc.)
void identificarCuadrante()
{
    int x, y;

    cout << "Ingresar coordenada X: ";
    cin >> x;
    cout << "Ingresar coordenada Y: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Esta en el primer cuadrante";
    }
    else if( x < 0 && y > 0 ) 
    {
        cout << "Esta en el segundo cuadrante";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Esta en el tercer cuadrante";
    }
    else
    {
        cout << "Esta en el cuarto cuadrante";
    }
}

// Ejercicio 6 - De un operario se conoce su sueldo y los años de antigüedad.Se pide confeccionar un programa que lea los datos de entrada e informe :
    // a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
    // b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 % .
    // c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
void calcularSueldoAntiguedad()
{
    float sueldo;
    int antiguedadAnios;

    cout << "Ingrese sueldo del operario: $";
    cin >> sueldo;

    cout << "Ingrese años de antiguedad de operario: ";
    cin >> antiguedadAnios;

    if ( sueldo < 500  )
    {
        if (antiguedadAnios >= 10)
        {
            sueldo *= 1.2;
            cout << "Se ha dado un aumento del 20% y el nuevo sueldo es: $ ";
            cout << sueldo;

        }
        else
        {
            sueldo *= 1.05;
            cout << "Se ha dado un aumento del 5% y el nuevo sueldo es: $ ";
            cout << sueldo;
        }

    }
    else
    {
        cout << "No hay cambios en el sueldo y sigue siendo: $ ";
        cout << sueldo;
    }
}

// Ejercicio 7 - Escribir un programa en el cual : dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)
void rangoNumeros()
{
    int num1, num2, num3, numMayor, numMenor;

    cout << "Ingresar primer numero: ";
    cin >> num1;

    cout << "Ingresar segundo numero: ";
    cin >> num2;

    cout << "Ingresar tercer numero: ";
    cin >> num3;

    int num1And2 = num1 > num2;
    int num1And3 = num1 > num3;
    int num2And3 = num2 > num3;

    if (num1And2 )
    {
        if (num1And3)
        {
            numMayor = num1;
        }
        else
        {
            numMayor = num3;
        }

        if (num2And3)
        {
            numMenor = num3;
        }
        else
        {
            numMenor = num2;
        }

    }
    else
    {
        if (num2And3)
        {
            numMayor = num2;

        }
        else
        {
            numMayor = num3;
        }


        if (num1And3)
        {
            numMenor = num3;
        }
        else {
            numMenor = num1;
        }
    }

    cout << "El numero mayor es: ";
    cout << numMayor;

    cout << "\nEl numero menor es: ";
    cout << numMenor;
}

// Alternativa ejercicio 7
void otroRangoNumero()
{
    int num1, num2, num3;
    cout << "Ingrese primer valor:";
    cin >> num1;
    cout << "Ingrese segundo valor:";
    cin >> num2;
    cout << "Ingrese tercer valor:";
    cin >> num3;
    cout << "Rango de valores:";
    if (num1 < num2 && num1 < num3)
    {
        cout << num1;
    }
    else
    {
        if (num2 < num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }
    cout << "-";
    if (num1 > num2 && num1 > num3)
    {
        cout << num1;
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }
}

// ejecución principal
int main()
{
    //numeroMayor();
    //primerTrimestre();
    //fechaNavidad();
    //tresValoresIguales();
    //algunosMenorDiez();
    //identificarCuadrante();
    //calcularSueldoAntiguedad();
    //rangoNumeros();
    otroRangoNumero();

    return 0;
}
