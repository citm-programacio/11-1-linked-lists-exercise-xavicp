// ConsoleApplication37.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;

class DynamicArray {
private:
    vector<int> data; // Internal container to store the elements

public:
    // Pushes a value at the end of the list
    void push_back(const int& value) {
        data.push_back(value);
    }

    // Inserts a value at a specific position in the list
    void insert(unsigned int position, const int& value) {
        if (position > data.size()) {
            cout << "Position out of bounds." << endl;
            return;
        }
        data.insert(data.begin() + position, value);
    }

    // Prints the whole list from beginning to end
    void print() {
        for (const int& element : data) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray array;

    cout << "Adding elements at different positions and printing the list each time:\n";

    array.push_back(10); // Add an element to the end
    array.print();

    array.insert(0, 5); // Insert at the beginning
    array.print();

    array.insert(1, 15); // Insert at position 1
    array.print();

    array.insert(3, 20); // Insert at the end
    array.print();

    array.insert(2, 12); // Insert at position 2
    array.print();

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
