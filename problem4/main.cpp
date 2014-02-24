#include <cstdlib>
#include <iostream>
#include <basic_math.hpp>

bool checkPalindrome(int num);

int main(int argc, char* argv[]) {
	int largest = 1;

	for (int i=999; i>99; --i) {
		for (int j=999; j>99; --j) {
			if (checkPalindrome(i*j) && (largest<(i*j))) {
				std::cout << i << "\n" << j << "\n";
				largest = i*j;
			}
		}
	}

	std::cout << largest << "\n";
}

bool checkPalindrome(int num){
	std::vector<int> terms;
	
	while (num>0) {
		terms.push_back(num % 10);
		num/=10;
	}
	
	int length = terms.size();
	
	bool ret = true;
	
	for (int i=0; i<(length/2); ++i) {
		if (terms[i] != terms[length-i-1]) {
			ret = false;
			break;
		}
	}
	
	return ret;
}
