/*
* nomPrograma: Reto 3
* descripcion:
* Hacer un patrón con *
*
*
* author: CASTRO CONTRERAS, Luis Alejandro
* fecha : 25/04/2025
*/
#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main() {
   setlocale(LC_ALL, "");

   int n;

   cout << "Ingrese un número: ";
   cin >> n;

   if (n % 2 != 0) {
      if (n >= 5) {
         int mitad = ceil(n / 2.0);

         for (int i = 1; i < n+1; i++) {
            if (i == 1) {
               for (int esc = 0; esc < mitad; esc++) {
                  cout << "*";
               }
               cout << endl;
            } else if (i == n) {
               for (int esc = 0; esc < mitad-1; esc++) {
                  cout << " ";
               }
               for (int esc = 0; esc < mitad; esc++) {
                  cout << "*";
               }
            } else if (i == mitad) {
               for (int esc = 0; esc < n; esc++) {
                  cout << "*";
               }
               cout << endl;
            } else {
               if (i < mitad) {
                  for (int ayuda = 1; ayuda < n+1; ayuda++) {
                     if (ayuda == 1 || ayuda == mitad) {
                        cout << "*";
                     } else {
                        cout << " ";
                     }
                  }
                  cout << endl;
               } else {
                  for (int ayuda = 1; ayuda < n+1; ayuda++) {
                     if (ayuda == n || ayuda == mitad) {
                        cout << "*";
                     } else {
                        cout << " ";
                     }
                  }
                  cout << endl;
               }
            }

         }

      } else {
         cout << "Lo siento. Pero n debe ser mayor o igual a 5.";
      }
   } else {
      cout << "Lo siento. Pero n debe ser impar.";
   }

   return 0;
}
