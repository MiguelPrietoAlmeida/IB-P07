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
#include <vector>

int main() {
  char parenthese;
  std::vector<char> parentheses;
  char lparenthese = '(';
  while (std::cin >> parenthese) {
    parentheses.push_back(parenthese);
  }
  if (static_cast<int>(parentheses.size()) % 2 != 0) {
    std::cout << "no" << std::endl;
  }
  else {
  std::vector<char> left_parentheses;
  std::vector<char> right_parentheses;
    for (int i{0}; i < static_cast<int>(parentheses.size()); ++i) {
      if (parentheses[i] == lparenthese) {
        left_parentheses.push_back(parentheses[i]);
      }
      else {
        right_parentheses.push_back(parentheses[i]);
      }
    }
    if (static_cast<int>(left_parentheses.size()) != static_cast<int>(right_parentheses.size())) {
      std::cout << "no" << std::endl;
    }
    else {
      std::cout << "yes" << std::endl;
    }
  }
  return 0;
}
	

  
