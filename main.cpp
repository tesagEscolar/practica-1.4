// Daniel Tejeda Saavedra 22310431
#include <iostream>

using namespace std;

const int tiempoArea = 10; // velocidad de pintar. metros cuadados por hora

class Rectangulo {
private:
  int altura, ancho;

public:
  Rectangulo(int h, int a) {
    altura = h;
    ancho = a;
  }

  int obtenerAltura() { return altura; }

  int obtenerAncho() { return ancho; }

  int obtenerArea() { return altura * ancho; }
};

// int main() {
//   Rectangulo pared = Rectangulo(40, 50);
//   Rectangulo ventana = Rectangulo(20, 10);

//   if (ventana.obtenerAncho() >= pared.obtenerAncho() || ventana.obtenerAltura() >= pared.obtenerAltura()) {
//     cout << "La altura y ancho de la ventana respectivamente deben ser menores que los de la pared"<< endl;
//     return 1;
//   }

//   int horas = (pared.obtenerArea() - ventana.obtenerArea()) * tiempoArea;

//   cout << "El tiempo que toma pintar la pared es " << horas << endl;

//   return 0;
// }