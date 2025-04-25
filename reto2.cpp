/*
* nomPrograma: Reto 2
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

         cout << "*";
         for (int i = 0; i < mitad-2; i++) {
            cout << " ";
         }
         for (int i = 0; i < mitad; i++) {
            cout << "*";
         }

         cout << endl;

         for (int i = 1; i < n; i++) {
            if (i < mitad && i != 1) {
               for (int esc = 0; esc < n; esc++) {
                  if (esc == 0 || esc == mitad-1) {
                     cout << "*";
                  } else {
                     cout << " ";
                  }
               }
               cout << endl;
            } else if (i > mitad && i != n) {
               for (int esc = 0; esc < n; esc++) {
                  if (esc == n-1 || esc == mitad-1) {
                     cout << "*";
                  } else {
                     cout << " ";
                  }
               }
               cout << endl;
            } else if (i == mitad) {
               for (int i = 0; i < n; i++) {
                  cout << "*";
               }

               cout << endl;
            }
         }

         for (int i = 0; i < mitad; i++) {
            cout << "*";
         }
         for (int i = 0; i < mitad-2; i++) {
            cout << " ";
         }
         cout << "*";
      } else {
         cout << "Lo siento. Pero n debe ser mayor o igual a 5.";
      }
   } else {
      cout << "Lo siento. Pero n debe ser impar.";
   }

   return 0;
}
