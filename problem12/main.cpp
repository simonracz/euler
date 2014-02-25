#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

int main(int argc, char* argv[]) {
	int divisors = 1;
	long triangle = 1;
	
	int k = 1;
	for (int i=2;; ++i) {
		triangle = i * (i+1) / 2;
		//std::cout << triangle << "\n";
		divisors = 1;
		
		for (int j=2; j <= triangle; ++j) {
			k = 1;
			for (; ((triangle%j) == 0); ++k) {
				//std::cout << "divide by : " << j << "\n";
				triangle/=j;
			}
			
			divisors*=k;
		}
		
		//std::cout << divisors << "\n";
		
		if (divisors > 500) {
			triangle = i * (i+1) / 2;
			break;
		}
	}
	
	std::cout << triangle << "\n";
}

