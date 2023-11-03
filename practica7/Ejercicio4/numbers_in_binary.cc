/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 2nd 2023
 * @brief the program reads a decimal number and prints it in binary.
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <bitset>

int main() {
  int number;
  std::cin >> number;
  if (number == 0) {
    std::cout << number << std::endl;
  }
  else {
    int bitsRequired = 0;
    int temp = number;	
    while (temp != 0) {
      temp >>= 1;
      bitsRequired++;
    }
    std::string binaryString = std::bitset<32>(number).to_string();	
    std::string numberBinaryString = binaryString.substr(32 - bitsRequired, bitsRequired);
    std::cout << numberBinaryString << std::endl;

	}

	return 0;

}


