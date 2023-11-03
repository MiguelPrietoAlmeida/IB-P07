/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Oct 29th 2023
 * @brief the program reads several numbers and prints the sum of the digits of each one. 
 */

#include <iostream>
#include <vector>

int main() {
  int number;
  std::vector<int> numbers;
  std::vector<int> number_phrase;
  while (std::cin >> number) {
    numbers.push_back(number);
    number_phrase.push_back(number);
  }
  for (int i{0}; i < static_cast<int>(numbers.size()); ++i) {
    int sum{0};
    while (numbers[i] > 0) {
      int digit{numbers[i] % 10};
      sum += digit;
      numbers[i] /= 10;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}

