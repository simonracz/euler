#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

bool is_pythagorean(int a, int b, int c);

int main(int argc, char* argv[]) {
	
	int product = 1;
	
	for (int i=1; i<=1000; ++i) {
		for (int j=i+1; j<=1000; ++j) {
			int k = 1000 - i - j;
			if (k<1) break;
			if (is_pythagorean(i,j,k)) {
				product = i * j * k;
				std::cout << i << "\n";
				std::cout << j << "\n";
				std::cout << k << "\n";
			}
		}
	}

	std::cout << product << "\n";
}

bool is_pythagorean(int a, int b, int c)
{
	return ((a * a + b * b) == (c * c));
}