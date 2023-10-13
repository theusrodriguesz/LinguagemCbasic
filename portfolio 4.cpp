
#include <iostream>

#include <limits>

int main() {

   const int numValores = 20;

   int valores[numValores];

   // Leitura dos valores

   for (int i = 0; i < numValores; i++) {

       std::cout << "Digite o valor " << (i + 1) << ": ";

       std::cin >> valores[i];

   }

   // Encontrar o valor máximo e mínimo

   int valorMaximo = std::numeric_limits<int>::min();

   int valorMinimo = std::numeric_limits<int>::max();

   for (int i = 0; i < numValores; i++) {

       if (valores[i] > valorMaximo) {

           valorMaximo = valores[i];

       }

       if (valores[i] < valorMinimo) {

           valorMinimo = valores[i];

       }

   }

   // Exibir os resultados

   std::cout << "Valor máximo: " << valorMaximo << std::endl;

   std::cout << "Valor mínimo: " << valorMinimo << std::endl;

   return 0;

}

