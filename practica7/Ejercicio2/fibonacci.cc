/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Oct 31th 2023
 * @brief the program prints the fibonaccis serie.
 */

#include <iostream>
#include <vector>

int main() {
  int times;
  std::cin >> times;
  std::vector<int> serie;
  int number{0};
  serie.push_back(number);
  int numbers{1};
  for (int i{0}; i < times; ++i) {
    serie.push_back(numbers);
    std::cout << serie[i] << " ";
    numbers = numbers + serie[i];
  }
  std::cout << std::endl;
  return 0;
}

