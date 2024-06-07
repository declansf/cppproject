#include <iostream>
#include <sstream>
using namespace std;

int main() {
   int n;
   string line;
   int i = 0;

   cin >> n;
   int matrixA[n];         // Matrix A
   int matrixB[n][n];      // Matrix B 
   int matrixC[n];         // Matrix C

   for ( i = 0; i < n; i++) {
      cin >> matrixA[i];
   }
   for ( i = 0; i < n; i++) {
      for (int a = 0; a < n; a++) {
         cin >> matrixB[i][a];
      }
   }

   for( i = 0; i < n; i++) {
      matrixC[i] = 0;
      for ( int a = 0; a < n; a++) {
         matrixC[i] = matrixC[i] + (matrixA[a] * matrixB[a][i]);

      }
   }
      for ( i = 0; i < n; i++) {
         cout << matrixC[i] << " ";
      }
      cout << endl;



   return 0;
}
