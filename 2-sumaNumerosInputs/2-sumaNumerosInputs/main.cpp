#include<iostream>

using namespace std;

// Ejercicio ejemplo
int productoNums()
{
    int num1, num2, suma, producto;
    cout << "Ingrese primer valor:";
    cin >> num1;
    cout << "Ingrese segundo valor:";
    cin >> num2;
    suma = num1 + num2;
    producto = num1 * num2;
    cout << "La suma de los dos valores es:";
    cout << suma;
    cout << "\n";
    cout << "El producto de los dos valores es:";
    cout << producto;

    return 0;
}



// Ejercicio 1
int perimetroCuadrado()
{
    int num, perimetro;

    cout << "Ingrese el valor de un lado del cuadrado: ";
    cin >> num;

    perimetro = num * 4;

    cout << "El perímetro del cuadrado es: ";
    cout << perimetro;

    return 0;
}


// Ejercicio 2
int sumaProductoNumeros()
{
    int num1, num2, num3, num4;

    cout << "Ingresar primer valor: ";
    cin >> num1;

    cout << "Ingresar segundo valor: ";
    cin >> num2;

    cout << "Ingresar tercer valor: ";
    cin >> num3;

    cout << "Ingresar cuarto valor: ";
    cin >> num4;

    cout << "La suma del primero y el segundo es: ";
    cout << num1 + num2;
    cout << "\n";
    cout << "El producto del tercero y el cuarto: ";
    cout << num3 * num4;

    return 0;
}

// Ejercicio 3
int sumaPromedio()
{
    int num1, num2, num3, num4, totalSuma;


    cout << "Ingresar primer valor: ";
    cin >> num1;

    cout << "Ingresar segundo valor: ";
    cin >> num2;

    cout << "Ingresar tercer valor: ";
    cin >> num3;

    cout << "Ingresar cuarto valor: ";
    cin >> num4;

    totalSuma = num1 + num2 + num3 + num4;

    cout << "La suma del primero y el segundo es: ";
    cout << totalSuma;
    cout << "\n";
    cout << "El promedio de los cuatro números es: ";
    cout << totalSuma / 4.0;

    return 0;

}

// Ejercicio 4
int importePago() {

    float precio;
    int cantidad;

    cout << "Ingrese el precio del articulo: ";
    cin >> precio;

    cout << "Ingrese cantidad de ese artículo a comprar: ";
    cin >> cantidad;

    cout << "El valor total a pagar es: $";
    cout << precio * cantidad;

    return 0;
}

// Ejecución principal
int main() {

    importePago();
    // sumaPromedio();
    // sumaProductoNumeros();
    //productoNums();
    //perimetroCuadrado();
}
