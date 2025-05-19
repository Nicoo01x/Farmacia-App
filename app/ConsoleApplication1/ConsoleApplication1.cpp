#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTOS = 100;

struct Producto {
    string nombre;
    int codigo = 0; 
    float precio = 0.0; 
    int stock = 0; 
	int cantidad = 0;
};

void ingresarproducto(Producto& producto) {

	cout << "Ingrese el nombre del producto: ";
	cin >> producto.nombre;
	cout << "Ingrese el codigo del producto: ";
	cin >> producto.codigo;
	cout << "Ingrese el precio del producto: ";
	cin >> producto.precio;
	cout << "Ingrese el stock del producto: ";
	cin >> producto.stock;
}

void mostrarproductos(Producto productos[], int numProductos) {
    for (int i = 0; i < numProductos; ++i) {
        cout << "Producto #" << i + 1 << ":" << endl;
        cout << "Nombre: " << productos[i].nombre << endl;
        cout << "Código: " << productos[i].codigo << endl;
        cout << "Precio: $" << productos[i].precio << endl;
        cout << "Stock: " << productos[i].stock << endl;
    }
}

void filtrarproductos(Producto productos[], int numProductos) {
	cout << "Productos con stock menor a 10:\n";
	for (int i = 0; i < numProductos; ++i) {
		if (productos[i].stock < 10) {
			cout << "Nombre: " << productos[i].nombre << ", Código: " << productos[i].codigo
				<< ", Precio: $" << productos[i].precio << ", Stock: " << productos[i].stock << endl;
		}
    }
void calcularinventario(Producto& productos) {
	int valortotal = 0;
	valortotal = producto.precio * producto.stock;
	cout << "Valor total del inventario: " << valortotal << endl;
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int filtrostock = 0;
    int valortotal = 0;
	int opcion = 0;
	switch (opcion)
	case 1: cout << "1. Ingresar producto" << endl;
	ingresarproducto(productos[numProductos]);
	case 2: cout << "2. Mostrar productos" << endl;
		mostrarproductos(productos[numProductos]);
	case 3: cout << "3. Filtrar productos" << endl;
		filtrarproductos(productos[numProductos]);
		filtrostock++;
		cout << "Cantidad de productos con stock menor a 10: " << filtrostock << endl;
		calcularinventario(productos[numProductos]);
		valortotal = productos.precio * productos.stock;
		cout << "Valor total del inventario: " << valortotal << endl;
	case 4: cout << "4. Calcular inventario" << endl;
		calcularinventario(productos[numProductos]);
		valortotal = productos.precio * productos.stock;
		cout << "Valor total del inventario: " << valortotal << endl;
	case 5: cout << "5. Salir" << endl;
		if (opcion = "5")
		{
			break
		};

    cout << "\nLista de productos:\n";
    for (int i = 0; i < numProductos; i++) {
        cout << "Nombre: " << productos[i].nombre << ", Codigo: " << productos[i].codigo
            << ", Precio: " << productos[i].precio << ", Stock: " << productos[i].stock << endl;
    }
    return 0;
}