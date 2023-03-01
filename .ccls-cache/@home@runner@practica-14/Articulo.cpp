// Daniel Tejeda Saavedra 22310431
#include <iostream>
#include <string>

using namespace std;

const float IVA = 0.15;

class Articulo {
private:
  string nombre;
  int clave, precio;

public:
  Articulo(string nombre, int clave, int precio) {
    this->nombre = nombre;
    this->clave = clave;
    this->precio = precio;
  }

  int obtenerPrecio(){return precio;};
};

// int main() {
//   Articulo art = Articulo("Sobre el uso de la difraccion en metodos numericos",22310431, 60);
//   int artVendidos;

//   cout << "Cuantos articulos se vendieron" << endl;
//   cin >> artVendidos;

//   float cuenta = artVendidos * art.obtenerPrecio() * (1 + IVA);

//   cout << "La cantidad a pagar por " << artVendidos << " articulos es: " << cuenta<< endl;

//   return 0;
// }