/*
* nomPrograma: Reto 5
* descripcion:
* Hacer un patrón con *
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

         for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++)
               cout << " ";

            for (int j = 0; j < n; j++) {
               if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || j == n - i - 1)
                  cout << "*";
               else
                  cout << " ";

               cout << " ";
            }
            cout << endl;
         }

      } else {
         cout << "Lo siento. Pero n debe ser mayor o igual a 3.";
      }
   } else {
      cout << "Lo siento. Pero n debe ser impar.";
   }

   return 0;
}
