//
// Created by weiguang on 3/04/24
#include <iostream>

int main(int argc, char **argv) {
  std::cout << "Program name: " << argv[0] << std::endl;

  for(int i = 1; i < argc; i++) {
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  }
  int b = 0;
  b = std::atoi(argv[1]);
  std::cout << "Argument " << b << std::endl;
  
  return 0;
}
