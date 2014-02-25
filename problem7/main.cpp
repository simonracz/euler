#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

int main(int argc, char* argv[]) {
	int limit = 10001;
	
	int pIndex = 0;
	
	long i = 2;
	while (pIndex!=limit) {
		if (athene::is_prime(i)) {
			++pIndex;
		}
		++i;
	}
	
	std::cout << i-1 << "\n";
}

