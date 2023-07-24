#include <iostream>

int main() {
  // Add your code below  
  int weightEarth;
  int weightMars;

  std::cout << "Insert the weight of an item here, in grams.\n";
  std::cin >> weightEarth;
  weightMars = (weightEarth / 9.81) * 3.711;
  std::cout << "Your item weighs " << weightMars << " grams on Mars.\n";
}
