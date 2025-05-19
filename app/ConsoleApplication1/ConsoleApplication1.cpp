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

void ingresarproducto(Producto& producto) {
	int stock = 0;

	cout << "Ingrese el nombre del producto: ";
	cin >> producto.nombre;
	cout << "Ingrese el codigo del producto: ";
	cin >> producto.codigo;
	cout << "Ingrese el precio del producto: ";
	cin >> producto.precio;
	cout << "Ingrese el stock del producto: ";
	cin >> producto.stock;
	if (producto.stock < 10) {
        stock++;
	}
}
void mostrarproductos(Producto& producto) {
	cout << "Nombre: " << producto.nombre << endl;
	cout << "Codigo: " << producto.codigo << endl;
	cout << "Precio: " << producto.precio << endl;
	cout << "Stock: " << producto.stock << endl;
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int filtrostock = 0;
    int valortotal = 0;

    while (true) {
       
        if (nombre == "salir") {
            break;
        }
        valortotal = precio * stock;

        if (stock < 10) {
            filtrostock++;
        }

        productos[numProductos] = { nombre, codigo, precio, stock };
        numProductos++;
    }

    cout << "\nLista de productos:\n";
    for (int i = 0; i < numProductos; i++) {
        cout << "Nombre: " << productos[i].nombre << ", Codigo: " << productos[i].codigo
            << ", Precio: " << productos[i].precio << ", Stock: " << productos[i].stock << endl;
    }
    cout << "Cantidad de productos con stock menor a 10: " << filtrostock << endl;
    return 0;
}