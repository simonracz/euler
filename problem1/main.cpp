#include <cstdlib>
#include <iostream>

int readParams(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int limit = readParams(argc, argv);
	
	long sum = 0;
	
	for (int i=3; i<limit; i+=3) {
		if ((i%5) != 0) {
			sum+=i;
		}
	}

	for (int i=5; i<limit; i+=5) {
		sum+=i;
	}
	
	std::cout << sum;
}

int readParams(int argc, char* argv[])
{
	int limit = 1000;
	if (argc>1) {
		limit = std::atoi(argv[0]);
	}
	return limit;
}

