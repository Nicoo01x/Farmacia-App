#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTOS = 100;

struct Producto {
    string nombre;
    int codigo = 0;
    float precio = 0.0;
    int stock = 0;
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
    int filtrostock = 0;
    for (int i = 0; i < numProductos; ++i) {
        if (productos[i].stock < 10) {
            cout << "Nombre: " << productos[i].nombre << ", Código: " << productos[i].codigo
                << ", Precio: $" << productos[i].precio << ", Stock: " << productos[i].stock << endl;
            filtrostock++;
        }
    }
    cout << "Cantidad de productos con stock menor a 10: " << filtrostock << endl;
}

void calcularinventario(Producto productos[], int numProductos) {
    float valortotal = 0;
    for (int i = 0; i < numProductos; ++i) {
        valortotal += productos[i].precio * productos[i].stock;
    }
    cout << "Valor total del inventario: $" << valortotal << endl;
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Ingresar producto\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Filtrar productos (stock < 10)\n";
        cout << "4. Calcular valor total del inventario\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            if (numProductos < MAX_PRODUCTOS) {
                ingresarproducto(productos[numProductos]);
                numProductos++;
            }
            else {
                cout << "Se ha alcanzado el número máximo de productos." << endl;
            }
            break;
        case 2:
            mostrarproductos(productos, numProductos);
            break;
        case 3:
            filtrarproductos(productos, numProductos);
            break;
        case 4:
            calcularinventario(productos, numProductos);
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
