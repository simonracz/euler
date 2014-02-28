#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

int limit = 1000000;
std::vector<int> lookup(limit, 0);

long long advance(long long num) {
	if ((num % 2) == 0) {
		return (num / 2);
	} else {
		return ((3 * num) + 1);
	}
}

long long calcChainLength(long long chain, long long num) {
	
	while (num > limit) {
		num = advance(num);
		++chain;
	}
	
	if (lookup[num - 1] != 0) {
		return (lookup[num - 1] + chain);
	} else {
		long long tnum = num;
		long long tchain = chain;
		num = advance(num);
		++chain;
		chain = calcChainLength(1, num);
		lookup[tnum-1] = chain;
		return tchain+chain;
	}
}

int main(int argc, char* argv[]) {
	lookup[0] = 1;
	
	for (int i = 1; i<limit; ++i) {
		calcChainLength(0, i+1);
	}
	
	auto it = std::max_element(lookup.begin(), lookup.end());
	std::cout << std::distance(lookup.begin(), it) + 1 << std::endl;
}

