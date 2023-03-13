
#include<iostream>

using namespace std;

// Ejercicio ejemplo 1
void imprimirDel1Al100()
{
    int f;
    for (f = 1; f <= 100; f++)
    {
        cout << f;
        cout << "-";
    }
}

// Ejercicio ejemplo 2
void cargar10Promedio()
{
    int suma, f, valor, promedio;
    suma = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese valor:";
        cin >> valor;
        suma = suma + valor;
    }
    cout << "La suma es:";
    cout << suma;
    cout << "\n";
    promedio = suma / 10;
    cout << "El promedio es:";
    cout << promedio;
}

// Ejercicio ejemplo 3
void cantidadAprobadosDesaprobados()
{
    int aprobados, reprobados, f, nota;
    aprobados = 0;
    reprobados = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese la nota:";
        cin >> nota;
        if (nota >= 7)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }
    }
    cout << "Cantidad de aprobados:";
    cout << aprobados;
    cout << "\n";
    cout << "Cantidad de reprobados:";
    cout << reprobados;
}

// Ejemplo 4
void cantidadMultiplos3y5()
{
    int mul3, mul5, valor, f;
    mul3 = 0;
    mul5 = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese un valor:";
        cin >> valor;
        if (valor % 3 == 0)
        {
            mul3 = mul3 + 1;
        }
        if (valor % 5 == 0)
        {
            mul5 = mul5 + 1;
        }
    }
    cout << "Cantidad de valores ingresados múltiplos de 3:";
    cout << mul3;
    cout << "\n";
    cout << "Cantidad de valores ingresados múltiplos de 5:";
    cout << mul5;
}

// Ejemplo 5
void cantidadMayoresOIgualesMil()
{
    int cantidad, n, f, valor;
    cantidad = 0;
    cout << "Cuantos valores ingresará:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese el valor:";
        cin >> valor;
        if (valor >= 1000)
        {
            cantidad = cantidad + 1;
        }
    }
    cout << "La cantidad de valores ingresados mayores o iguales a 1000 son:";
    cout << cantidad;

}

/* Ejercicio 1: Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo.
El programa deberá informar :
    a) De cada triángulo la medida de su base, su altura y su superficie.
    b) La cantidad de triángulos cuya superficie es mayor a 12.*/
void forCalculoTriangulos()
{
    int base = 0, altura = 0;
    int cantidadTriangulos = 0;
    float superficie = 0;
    int cantidadTriangulosMayor12 = 0;

    cout << "Ingresar cantidad de triangulos a calcular: ";
    cin >> cantidadTriangulos;

    for (int i = 0; i < cantidadTriangulos; i++)
    {
        cout << "\nTriangulo ";
        cout << i + 1;
        cout << ": ";

        cout << "\nIngresar la base de este triangulo: ";
        cin >> base;
        cout << "Ingresar la altura de este triangulo: ";
        cin >> altura;
        superficie = base * altura / 2;

        cout << "La superficie es: ";
        cout << superficie;

        if (superficie > 12)
        {
            cantidadTriangulosMayor12++;
        }

    }

    cout << "\nLa cantidad de triangulos con superficie mayor a 12 es: ";
    cout << cantidadTriangulosMayor12;
}


/* Ejercicio 2: Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados. */
void forSuma()
{

    int sumaUltimos = 0;
    int numero = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "\nNumero ";
        cout << i;
        cout << ": \n";

        cout << "Ingresar numero: ";
        cin >> numero;

        if (i >= 5)
        {
            sumaUltimos += numero;
        }

    }

    cout << "\nLa suma de los ultimos 5 numeros es: ";
    cout << sumaUltimos;
    

}

/* Ejercicio 3: Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)*/
void forTabla5()
{
    cout << "La tabla de multiplicar de 5 es: \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "5 * ";
        cout << i;
        cout << " = ";
        cout << 5 * i;
        cout << "\n";
    }
}


/* Ejercicio 4: Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/
void forTablaMultiplicar()
{
    int valor;
    cout << "Ingresar un valor del 1 al 10: ";
    cin >> valor;

    if (valor < 1 || valor > 10)
    {
        cout << "No has ingresado un valor valido del 1 al 10 ";
    }
    else 
    {
        cout << "La tabla de multiplicar de ";
        cout << valor;
        cout << "del 1 al 12 es: \n";

        for (int i = 1; i <= 12; i++)
        {
            cout << valor;
            cout << " x ";
            cout << i;
            cout << " = ";
            cout << valor * i;
            cout << "\n";
        }
    }

}

/* Ejercicio 5: Realizar un programa que lea los lados de n triángulos, e informar:
    a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
    b) Cantidad de triángulos de cada tipo.
    c) Tipo de triángulo que posee menor cantidad.*/
void forTipoTriangulos()
{
    int cantidadTriangulosTotal = 0;
    int cantidadEquilatero = 0;
    int cantidadIsosceles = 0;
    int cantidadEscaleno = 0;

    int lado_1, lado_2, lado_3;

    cout << "Ingrese la cantidad de triangulos: ";
    cin >> cantidadTriangulosTotal;

    for (int i = 0; i < cantidadTriangulosTotal; i++)
    {
        cout << "Triangulo ";
        cout << i + 1;
        cout << ": ";

        cout << "\n - Ingresar el valor del primer lado: ";
        cin >> lado_1;

        cout << "\n - Ingresar el valor del segundo lado: ";
        cin >> lado_2;

        cout << "\n - Ingresar el valor del tercer lado: ";
        cin >> lado_3;

        cout << "\n";

        if (lado_1 == lado_2 && lado_1 == lado_3)
        {
            cout << "Es un triangulo equilatero.";
            cantidadEquilatero++;
        }
        else if ((lado_1 == lado_2) || (lado_1 == lado_3) || (lado_2 == lado_3))
        {
            cout << "Es un triangulo isosceles.";
            cantidadIsosceles++;
        }
        else
        {
            cout << "Es un triangulo escaleno.";
            cantidadEscaleno++;
        }

        cout << "\n";
    }

    cout << "\n";
    cout << "\nCantidad de triangulos equilateros: ";
    cout << cantidadEquilatero;

    cout << "\nCantidad de triangulos isosceles: ";
    cout << cantidadIsosceles;

    cout << "\nCantidad de triangulos escalenos: ";
    cout << cantidadEscaleno;


    if (cantidadEquilatero == cantidadIsosceles && cantidadEquilatero == cantidadEscaleno)
    {
        cout << "\nEsta la misma cantidad en todos los tipos de triangulos";
    }
    else if (cantidadEquilatero < cantidadIsosceles && cantidadEquilatero < cantidadEscaleno)
    {
        cout << "\nLos triangulos equilateros son los de menor cantidad";
    }
    else if( cantidadIsosceles < cantidadEscaleno)
    {
        cout << "\nLos triangulos isosceles son los de menor cantidad";
    }
    else
    {
        cout << "\nLos triangulos escalenos son los de menor cantidad";
    }


}

/* Ejercicio 6: Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
*/
void forPuntoCuadrante()
{
    int cantidadPuntos;
    int x, y;

    int planoPrimero = 0, planoSegundo = 0, planoTercero = 0, planoCuarto = 0;

    cout << "Ingresar cuantos puntos se van a colocar: ";
    cin >> cantidadPuntos;

    for (int i = 0; i < cantidadPuntos; i++)
    {
        cout << "\nPunto (x,y) numero ";
        cout << i + 1;
        
        cout << "\nIngresar coordenada X: ";
        cin >> x;
    
        cout << "\nIngresar coordenada Y: ";
        cin >> y;

        if (x >= 0)
        {
            if (y >= 0)
            {
                planoPrimero++;
            }
            else
            {
                planoCuarto++;
            }
        }
        else {
            if (y >= 0)
            {
                planoSegundo++;
            }
            else
            {
                planoTercero++;
            }
        }
    }

    
    cout << "\nCantidad de puntos del primer plano: ";
    cout << planoPrimero;

    cout << "\nCantidad de puntos del segundo plano: ";
    cout << planoSegundo;

    cout << "\nCantidad de puntos del tercer plano: ";
    cout << planoTercero;

    cout << "\nCantidad de puntos del cuarto plano: ";
    cout << planoCuarto;

}

/* Ejercicio 7: Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
    a) La cantidad de valores ingresados negativos.
    b) La cantidad de valores ingresados positivos.
    c) La cantidad de múltiplos de 15.
    d) El valor acumulado de los números ingresados que son pares.*/
void forOperacionesListaValores()
{
    int positivos = 0, negativos = 0, multiplos15 = 0, totalPares = 0;
    int valor;

    for (int i = 0; i < 10; i++)
    {
        cout << "\nIngresar valor ";
        cout << i + 1;
        cout << ": ";

        cin >> valor;

        if (valor < 0)
        {
            negativos++;
        } 
        else
        {
            positivos++;
        }

        if (valor % 2 == 0)
        {
            totalPares += valor;
        }

        if (valor % 15 == 0)
        {
            multiplos15++;
        }
    }


    cout << "\nCantidad de positivos: ";
    cout << positivos;
    
    cout << "\nCantidad de negativos: ";
    cout << negativos;

    cout << "\nCantidad de múltiplos de 15: ";
    cout << multiplos15;

    cout << "\nTotal acumulado de pares: ";
    cout << totalPares;
}

/* Ejercicio 8: Se cuenta con la siguiente información:
    Las edades de 5 estudiantes del turno mañana.
    Las edades de 6 estudiantes del turno tarde.
    Las edades de 11 estudiantes del turno noche.
    Las edades de cada estudiante deben ingresarse por teclado.

    a) Obtener el promedio de las edades de cada turno (tres promedios)
    b) Imprimir dichos promedios (promedio de cada turno)
    c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.*/

void forEdadesEstudiantes()
{
    int edadesTurnoManiana = 0, edadesTurnoTarde = 0, edadesTurnoNoche = 0;
    float promedioManiana = 0, promedioTarde = 0, promedioNoche = 0;

    int valor;

    // Turno mañana
    for (int i = 0; i < 5; i++)
    {
        cout << "\nIngresar edad alumno nro ";
        cout << i + 1;
        cout << " del turno maniana: ";
        cin >> valor;

        edadesTurnoManiana += valor;
    }

    promedioManiana = edadesTurnoManiana / 5;
    cout << "\nEl promedio del turno maniana en edad es: ";
    cout << promedioManiana;
    cout << "\n";

    // Turno tarde
    for (int i = 0; i < 6; i++)
    {
        cout << "\nIngresar edad alumno nro ";
        cout << i + 1;
        cout << " del turno tarde: ";
        cin >> valor;

        edadesTurnoTarde += valor;
    }

    promedioTarde = edadesTurnoTarde / 5;
    cout << "\nEl promedio del turno maniana en edad es: ";
    cout << promedioTarde;
    cout << "\n";

    // Turno noche
    for (int i = 0; i < 11; i++)
    {
        cout << "\nIngresar edad alumno nro ";
        cout << i + 1;
        cout << " del turno noche: ";
        cin >> valor;

        edadesTurnoNoche += valor;
    }

    promedioNoche = edadesTurnoNoche / 5;
    cout << "\nEl promedio del turno noche en edad es: ";
    cout << promedioNoche;
    cout << "\n";


    // Calcular cual tiene promedio mayor de edad
    if (promedioManiana > promedioTarde && promedioManiana > promedioNoche)
    {
        cout << "\nEl turno de maniana tiene mayor promedio de edad.";
    }
    else if( promedioTarde > promedioNoche )
    {
        cout << "\nEl turno de tarde tiene mayor promedio de edad.";
    }
    else
    {
        cout << "\nEl turno de noche tiene mayor promedio de edad.";
    }

}

// Ejecución principal
int main()
{

    //imprimirDel1Al100();
    //cargar10Promedio();
    //cantidadAprobadosDesaprobados();
    //cantidadMultiplos3y5();
    //cantidadMayoresOIgualesMil();
    //forCalculoTriangulos();
    //forSuma();
    //forTabla5();
    //forTablaMultiplicar();
    //forTipoTriangulos();
    //forPuntoCuadrante();
    //forOperacionesListaValores();
    forEdadesEstudiantes();

    return 0;
}
