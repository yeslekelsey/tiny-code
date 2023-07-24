#include <iostream>

int main() {
 int year;
 std::cout << "Input a year.\n"; 
 std::cin >> year;

 if (year % 100 == 0 && year % 400 == 0) {
   std::cout << "yes\n";
 }
 else if (year % 400 == 0) {
   std::cout << "yes\n";
 }
 else if (year % 4 == 0) {
   std::cout << "yes\n";
 }
 else {
   std::cout << "no\n";
 }  
}
