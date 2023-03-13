
#include<iostream> // Importar librerias de funciones y bojetos contenidos en otros archivos.

using namespace std;

int main()
{
	int horasTrabajadas;
	float costoHora;
	float sueldo;

	cout << "Ingrese Horas trabajadas por el operario:"; // Lo que esta entre comillas se muestra en pantalla con "cout <<"; si se pone una variable, se muestra su valor
	cin >> horasTrabajadas; // Entrada del dato pedido y donde se guarda
	
	cout << "Ingrese el pago por hora:";
	cin >> costoHora;

	sueldo = horasTrabajadas * costoHora;
	cout << "El sueldo total del operario es:";
	cout << sueldo;
	
	return 0; // Evita cerrar el programa automaticamente cuando se ejecuta todo

}