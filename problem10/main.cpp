#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

int main(int argc, char* argv[]) {
	long sum = 0;

	for (int i=2; i<=2000000; ++i) {
		if (athene::is_prime(i)) {
			sum+=i;
		}
	}
	
	std::cout << sum << "\n";
}

