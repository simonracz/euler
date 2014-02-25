#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

int main(int argc, char* argv[]) {

	int limit = 100;
	
	long long ret = 0;
	
	for (int i=1; i<=limit; ++i) {
		for (int j=1; j<=limit; ++j) {
			ret += i * j;
		}
	}
	
	for (int i=1; i<=limit; ++i) {
		ret -= i * i;
	}
	
	std::cout << ret << "\n";
}

