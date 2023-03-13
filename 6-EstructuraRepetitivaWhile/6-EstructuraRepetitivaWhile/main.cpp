#include<iostream>

using namespace std;


// Ejercicio ejemplo 1
void contarHata100()
{
    int x;
    x = 1;
    while (x <= 100)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }

}

// Ejercicio ejemplo 2
void contarHastValorFinal()
{
    int n, x;
    cout << "Ingrese el valor final:";
    cin >> n;
    x = 1;
    while (x <= n)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }
}

// Ejemplo 3
void sumarHasta10()
{
    int x, suma, valor, promedio;
    x = 1;
    suma = 0;
    while (x <= 10)
    {
        cout << "Ingrese un valor:";
        cin >> valor;
        suma = suma + valor;
        x = x + 1;
    }
    promedio = suma / 10;
    cout << "La suma de los 10 valores es:";
    cout << suma;
    cout << "\n";
    cout << "El promedio es:";
    cout << promedio;
}

// Ejemplo 4
void cantidadPiezasAptas()
{
    int x, cantidad, n;
    float largo;
    x = 1;
    cantidad = 0;
    cout << "Cuantas piezar procesará:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese la medida de la pieza:";
        cin >> largo;
        if (largo >= 1.20 && largo <= 1.30)
        {
            cantidad = cantidad + 1;
        }
        x = x + 1;
    }
    cout << "La cantidad de piezas aptas son:";
    cout << cantidad;
  
}



//Ejercicio 1 - Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
void whileNotaAlumnos()
{

    int alumnoActual = 0, nota = 0, mayores = 0, menores = 0;
    while (alumnoActual < 10)
    {
        cout << "Ingresar notal del alumno: ";
        cin >> nota;
        if (nota >= 7)
        {
            mayores++;
        }
        else
        {
            menores++;
        }

        alumnoActual++;

    }

    cout << "Cantidad de alumnos que sacaron mas o igual que 7: ";
    cout << mayores;

    cout << "\nCantidad de alumnos que sacaron menos que 7: ";
    cout << menores;

    cout << "\n";
}

//Ejercicio 2 - Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.
void whileAlturaPromedio()
{
    int cantidad, count = 1;
    float altura = 0, alturaTotal = 0;

    cout << "Ingresar cuantas alturas de personas ingresaras: ";
    cin >> cantidad;

    while (count <= cantidad)
    {
        cout << "Persona ";
        cout << count;
        cout << "\nIngresar altura: ";
        cin >> altura;
        alturaTotal += altura;

        count++;
    }

    cout << "\nEl promedio de la altura es: ";
    cout << alturaTotal / cantidad;
}

/*Ejercicio 3 - En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe 
cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300.Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.*/
void whileGastoSueldos()
{
    int cantidadEmpleados = 0, count = 1;
    int cantidadEntre100y300 = 0;
    int cantidadMas300 = 0;
    float totalSueldo = 0, sueldo = 0;

    cout << "Ingresar cantidad de empleados: ";
    cin >> cantidadEmpleados;

    while (count <= cantidadEmpleados)
    {
        cout << "Empleado ";
        cout << count;

        cout << "\nIngresar el sueldo de este empleado: ";
        cin >> sueldo;

        totalSueldo += sueldo;

        if (sueldo >= 100 && sueldo <= 300)
        {
            cantidadEntre100y300++;
        }
        else if ( sueldo > 300)
        {
            cantidadMas300++;
        }

        count++;
    }

    cout << "Cantidad total de empleados que cobra entre 100 y 300: ";
    cout << cantidadEntre100y300;

    cout << "\nCantidad total de empleados que cobra mas de 300: ";
    cout << cantidadMas300;

    cout << "\nCantidad que se paga en sueldos: ";
    cout << totalSueldo;

}

//Ejercicio 4 - Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)
void whileTerminosSerie11()
{
    int cantidad = 25, count = 0, termino = 0;

    while (count < cantidad)
    {
        termino = termino + 11;
        cout << termino;
        cout << " - ";
        count++;
    }
}

//Ejercicio 5 - Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.
void multiplos8()
{
    int total = 0;

    while ( (total + 8) <= 500)
    {
        total += 8;
        cout << total;

        if ((total + 8) <= 500)
        {
            cout << " - ";
        }
    }
}

/*Ejercicio 6 - Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado 
mayor(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales"). Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/
void whileDosListasValores()
{
    int lista1Acumulado = 0, lista2Acumulado = 0, valor = 0;

    int count = 0;

    cout << "Lista 1: ";
    while (count < 15)
    {
        cout << "\nIngresar el valor ";
        cout << count + 1; 
        cout << ": ";
        cin >> valor;

        lista1Acumulado += valor;

        count++;
    }

    cout << "-----------------------------";
    cout << "\nLista 2: ";
    count = 0;
    while (count < 15)
    {
        cout << "\nIngresar el valor ";
        cout << count + 1;
        cout << ": ";
        cin >> valor;

        lista2Acumulado += valor;

        count++;
    }

    if (lista1Acumulado == lista2Acumulado)
    {
        cout << "La suma total es igual";
    }
    else if (lista1Acumulado > lista2Acumulado)
    {
        cout << "El valor acumulado de la lista 1 es mayor que la lista 2";
    }
    else
    {
        cout << "El valor acumulado de la lista 2 es mayor que la lista 1";
    }
}

/*Ejercicio 7 - Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
Emplear el operador “ % ” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores, por ejemplo 11 % 2 retorna un 1) :
    if (valor % 2 == 0)         //Si el if da verdadero luego es par.

 */
void whileCantidadParesImpares()
{
    int count = 0;
    int cantidadNumeros = 0;
    int numero = 0;
    int cantidadPares = 0;
    int cantidadImpares = 0;

    cout << "Ingresar cuantos numeros se usaran: ";
    cin >> cantidadNumeros;

    while (count < cantidadNumeros)
    {
        cout << "\nIngreasr el numero ";
        cout << count + 1;
        cout << ": ";
        cin >> numero;

        if ( (numero % 2) == 0)
        {
            cantidadPares++;
        }
        else
        {
            cantidadImpares++;
        }

        count++;

    }

    cout << "\nCanitdad de numeros pares: ";
    cout << cantidadPares;

    cout << "\nCanitdad de numeros impares: ";
    cout << cantidadImpares;
}

// Ejecución principal
int main()
{
    //contarHata100();
    //contarHastValorFinal();
    //sumarHasta10();
    //cantidadPiezasAptas();
    //whileNotaAlumnos();
    //whileAlturaPromedio();
    //whileGastoSueldos();
    //whileTerminosSerie11();
    //multiplos8();
    //whileDosListasValores();
    whileCantidadParesImpares();


    return 0;
}
