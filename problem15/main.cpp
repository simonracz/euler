#include <iostream>

int main(int argc, char* argv[]) {
	
	//Solution is
	//[2n choose n]
	
	//After some calculations on paper
	// [2n choose n]
	//     ==
	// (4 - 2 / n ) * [2(n-1) choose (n-1)]
	
	long long var = 2;
	for (int i = 2; i <= 20; ++i) {
		var = (4 - (2 / (double)i)) * var;
	}
	
	std::cout << var << std::endl;
}

