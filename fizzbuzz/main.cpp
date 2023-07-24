// print the numbers from 1 to 100, but if a number is a multiple of 3, print 'fizz'. if a number is multiple of 5, print 'buzz'. if a number is a multiple of both 3 and 5, print 'fizzbuzz'.
#include <iostream>

int main() {
  
  for (int i = 1; i <= 100; i++) {
    if (i%5==0 && i%3==0) {
		std::cout << "FizzBuzz\n";
	}
	else if (i%5==0) {
		std::cout << "Buzz\n";
	}
	else if (i%3==0) {
		std::cout << "Fizz\n";
	}
	else {
		std::cout << i << "\n";
	}
  }
}
