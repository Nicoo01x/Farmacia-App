#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTOS = 100;

struct Producto {
    string nombre;
    int codigo = 0; // Inicialización por defecto
    float precio = 0.0f; // Inicialización por defecto
    int stock = 0; // Inicialización por defecto
};

int main() {
    Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int filtrostock = 0;

    while (true) {
        cout << "Ingrese el nombre, codigo, precio y stock del producto (o 'salir' para terminar o mostrar la tabla de productos): " << endl;
        cout << "Nombre: " << endl;
        string nombre;
        cin >> nombre;

        if (nombre == "salir") {
            break;
        }
        cout << "Codigo: " << endl;
        int codigo;
        cin >> codigo;
        cout << "Precio: " << endl;
        float precio;
        cin >> precio;
        cout << "Stock: " << endl;
        int stock;
        cin >> stock;

        if (stock < 10) {
            filtrostock++;
        }

        if (numProductos < MAX_PRODUCTOS) {
            productos[numProductos] = { nombre, codigo, precio, stock };
            numProductos++;
        }
        else {
            cout << "Se ha alcanzado el número máximo de productos." << endl;
            break;
        }
    }

    cout << "\nLista de productos:\n";
    for (int i = 0; i < numProductos; i++) {
        cout << "Nombre: " << productos[i].nombre << ", Codigo: " << productos[i].codigo
            << ", Precio: " << productos[i].precio << ", Stock: " << productos[i].stock << endl;
    }
    cout << "Cantidad de productos con stock menor a 10: " << filtrostock << endl;

    return 0;
}
