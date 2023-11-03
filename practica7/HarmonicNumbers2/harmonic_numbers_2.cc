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
#include <iomanip>

int main() {	
  int number1;
  int number2;
  while (std::cin >> number1 >> number2) {
  double result = 0.0;
  for (int i = number2; i < number1; ++i) {
    result += 1.0 / (i + 1);
  }
  std::cout << std::fixed << std::setprecision(10) << result << std::endl;
  }
  return 0;
}

