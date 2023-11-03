#include <iostream>
#include <cctype>

bool isBinary(const std::string& input) { 
  for (char c : input) {
    if (c != '0' && c != '1') {
    return false;
    }
  }
  return true;
}
int binaryToDecimal(const std::string& binary) {
  int decimal = 0;
  int base = 1;  
  for (int i = binary.length() - 1; i >= 0; i--) {
    if (binary[i] == '1') {
      decimal += base;
    }
    base *= 2;
  }
  return decimal;
}
int main() {
  std::string input;
  std::cin >> input;
  if (isBinary(input)) {
    int decimal = binaryToDecimal(input);
    std::cout << decimal << std::endl;
  } 
  else {
    std::cout << "Wrong Input" << std::endl;
    return 1; // Salir con un código de error
  }
  return 0;
}

