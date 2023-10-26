// Abby Silver
// abbysilver@csu.fullerton.edu
// @abbysilver
// Partners: @RtandonSWE2005

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  for (std::string& num : arguments) {
    if (num != "./average") {
      sum += std::stod(num);
    }
  }
  double average{sum / static_cast<double>(arguments.size() - 1)};
  std::cout << "average = " << average << "\n";
  return 0;
}
