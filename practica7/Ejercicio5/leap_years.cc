//La Laguna's University
//Computer engineering student
//For the basic computer science subject course 2023-2024
//@file ReversedNumbersInHexadecimal.cc
//@auhor Miguel Prieto Almeida alu0101623450@ull.edu.es
//@date Oct 25 2023 26:46
//@brief The program tells if a year is or is not a leap year.

#include <iostream>

int main() {
  int year;
  std::cin >> year;
  if (year % 4 !=0 || (year % 100 == 0 && year % 400 != 0)) {
    std::cout << "NO" << std::endl;
  }
  else {
    std::cout << "YES" << std::endl;
  }
  return 0;
}
