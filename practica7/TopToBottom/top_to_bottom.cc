/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Oct 30th 2023
 * @brief the program eads several numbers, and for each one prints the product of its digits, and the product 
 * of the digits of the latest product, etcetera, until the resulting product has just one digi 
 */

#include <iostream>

int main() {
  int number1;
  int number2;
  std::cin >> number1 >> number2;
  //imprimir los números entre ambos de mayor a menor en caso de que number1 sea mayor a number2
  if (number1 > number2){
    for (int numbers1{number1}; numbers1 >= number2; --numbers1)  {
      std::cout << numbers1 << std::endl;
    }
  }
  //en caso de que number2 sea mayor a number1
  else { 
    for (int numbers2{number2}; numbers2 >= number1; --numbers2) {
      std::cout << numbers2 << std::endl;
    }
  }
  return 0;
}
