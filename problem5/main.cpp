#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>

//This could be solved without programming at all
int main(int argc, char* argv[]) {

	long lcm = 1;
	long temp = lcm;
	
	for (long i=2; i<=20; ++i) {
		temp = i * lcm;
		lcm = temp / athene::gcd(lcm, i);
	}
	
	std::cout << lcm << "\n";
}

