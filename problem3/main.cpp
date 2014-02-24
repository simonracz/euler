#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>

int main() {
	long long big = 600851475143;
	
	long lPrime = 1;
	
	long limit = std::sqrt(big);
	
	for (long p = 1; p < limit; ++p) {
		if (((big % p)==0) && athene::is_prime(p)) {
			lPrime = p;
		}
	}
	
	std::cout << lPrime;
}
