/*
* nomPrograma: Reto 1
* descripcion:
* Hacer una Z con *
*
*
* author: CASTRO CONTRERAS, Luis Alejandro
* fecha : 25/04/2025
*/
#include <iostream>
#include <locale>
using namespace std;

int main() {
   setlocale(LC_ALL, "");

   int n;

   cout << "Ingrese un número: ";
   cin >> n;

   if (n % 2 != 0) {
      if (n >= 3) {
         int esp1 = n - 2;
         int esp2 = 1;

         for (int i = 0; i < n; i++) {
            cout << "*";
         }

         cout << endl;

         for (int i = 1; i < n-1; i++) {
            for (int e = 0; e < esp1; e++) {
               cout << " ";
            }

            cout << "*";

            for (int e = 0; e < esp2; e++) {
               cout << " ";
            }

            cout << endl;

            esp1 = esp1 - 1;
            esp2 = esp2 - 1;
         }

         for (int i = 0; i < n; i++) {
            cout << "*";
         }
      } else {
         cout << "Lo siento. Pero n debe ser mayor o igual a 3.";
      }
   } else {
      cout << "Lo siento. Pero n debe ser impar.";
   }

   return 0;
}
