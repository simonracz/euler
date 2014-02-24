#include <cstdlib>
#include <iostream>
#include <basic_math.hpp>

int readParams(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int limit = readParams(argc, argv);
	
	using athene::fibonacci2;
	
	int index = 1;
	for (; fibonacci2(index) < limit; ++index);
	
	long long sum = 0;
	
	for (int i=3; i<index; i+=3) {
		sum+=fibonacci2(i);
	}
	
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
