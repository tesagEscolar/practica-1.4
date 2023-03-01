// Daniel Tejeda Saavedra 22310431
#include <iostream>
#include <string>

using namespace std;

const float IVA = 0.15;

class Articulo {
private:
  string nombre;
  int clave, precio;
  bool existencia;

public:
  Articulo() {
    nombre = "Sobre la escala de plank y el espacio-tiempo";
    clave = 22310431;
    precio = 150;
    existencia = true;
  }

  Articulo(string nombre, int clave, int precio, bool existencia) {
    this->nombre = nombre;
    this->clave = clave;
    this->precio = precio;
    this->existencia = existencia;
  }

  Articulo(Articulo *art) {
    precio = art->obtenerPrecio();
    clave = art->obtenerClave();
    nombre = art->obtenerNombre();
    existencia = art->obtenerExistencia();
  }

public:
  int obtenerPrecio() { return precio; }
  int obtenerClave() { return clave; }
  bool obtenerExistencia() { return existencia; }
  string obtenerNombre() { return nombre; }

  void establecerNombre(string nombre) { this->nombre = nombre; }
  void establecerPrecio(int precio) { this->precio = precio; }
  void establecerClave(int clave) { this->clave = clave; }
  void establecerExistencia(bool existencia) { this->existencia = existencia; }

  string toString() {
    return "Info Articulo: Nombre: " + nombre + ", Clave: " + to_string(clave) +
           ", Precio: " + to_string(precio) +
           ", Existencia: " + to_string(existencia);
  }
};

int main() {
  int qart1, qart2, qart3;
  string nombre = "Sobre la escala de plank y el espacio-tiempo";
  int clave = 22310431;
  int precio = 150;
  bool existencia = true;

  cout << endl << "Nombre del articulo: ";
  getline(cin, nombre);

  cout << endl << "Clave del articulo: ";
  cin >> clave;

  cout << endl << "Precio del articulo: ";
  cin >> precio;

  cout << endl << "Este articulo esta en existencia?[1:si/0:no]: ";
  cin >> existencia;
  cin.ignore();

  Articulo articulo1;
  articulo1.establecerNombre(nombre);
  articulo1.establecerClave(clave);
  articulo1.establecerPrecio(precio);
  articulo1.establecerExistencia(existencia);
  Articulo articulo2 = Articulo(articulo1);

  Articulo articulo3 = Articulo(nombre, clave, precio, existencia);

  cout << endl << "Cual es el nuevo nombre del articulo 3: ";
  getline(cin, nombre);
  articulo3.establecerNombre(nombre);

  cout << endl << "Cuantos articulos se vendieron del articulo1: ";
  cin >> qart1;
  cout << endl << endl << "Cuantos articulos se vendieron del articulo2: ";
  cin >> qart2;
  cout << endl << endl << "Cuantos articulos se vendieron del articulo3: ";
  cin >> qart3;

  cout << endl << "--------------------Cuenta--------------------" << endl;
  cout << endl
       << "Articulo1: " << articulo1.toString() << ", Cantidad: " << qart1
       << endl
       << endl;
  cout << "Articulo2: " << articulo2.toString() << ", Cantidad: " << qart2
       << endl
       << endl;
  cout << "Articulo3: " << articulo3.toString() << ", Cantidad: " << qart3
       << endl
       << endl;

  int total = (articulo1.obtenerPrecio() * qart1) +
              (articulo2.obtenerPrecio() * qart2) +
              (articulo3.obtenerPrecio() * qart3);
  cout << "Total a pagar: " << total;
  return 0;
}