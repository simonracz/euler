#include <cstdlib>

int readParams(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int limit = readParams(argc, argv);
	
	
	

	
		
}

int readParams(int argc, char* argv[])
{
	int limit = 1000;
	if (argc>0) {
		limit = std::atoi(argv[0]);
	}
	return limit;
}

