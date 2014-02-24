#include <cstdlib>
#include <iostream>
#include <basic_math.hpp>

int readParams(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int limit = readParams(argc, argv);
	
	using athene::fibonacci2;
	
	int index = 1;
	for (; fibonacci2(index+1) < limit; ++index);
	
	std::cout << index << "\n" << fibonacci2(index) << "\n" << fibonacci2(index+1) << "\n";
	
	if ((index%2) != 0) {
		--index;
	}
	
	//SUM_2->2n (F_i) = F_2n+2 - F_2n - 1
	long long sum = fibonacci2(index+2) - fibonacci2(index) - 1;
	
	std::cout << sum;
}

int readParams(int argc, char* argv[])
{
	int limit = 4000000;
	if (argc>1) {
		limit = std::atoi(argv[0]);
	}
	return limit;
}
