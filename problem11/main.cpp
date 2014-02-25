#include <cstdlib>
#include <iostream>
#include <prime_numbers.hpp>
#include <numeric>

const char* input = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";

int main(int argc, char* argv[]) {
	std::vector<int> grid;
	grid.reserve(strlen(input) / 2);

	char temp[3]{};
	for (int i=0; i<400; ++i) {
		temp[0]=input[2*i];
		temp[1]=input[2*i+1];
		
		if (temp[0] == '0') {
			grid.push_back(std::atoi(&temp[1]));
		} else {
			grid.push_back(std::atoi(temp));
		}
	}
	
	int tProduct=1;
	int lProduct=1;
	int root=0;
	for (int i=0; i<20; ++i) {
		for (int j=0; j<20; ++j) {
			root=20 * i + j;
			
			//right
			tProduct = 1;
			for (int k=0; ((k<4) && ((j+k)<20)); ++k) {
				tProduct*=grid[root+k];
			}
			if (tProduct > lProduct) {
				std::cout << "i: " << i << " j: " << j << " right\n";
				lProduct = tProduct;
			}
			//down
			tProduct = 1;
			for (int k=0; ((k<4) && ((i+k)<20)); ++k) {
				tProduct*=grid[root+20*k];
			}
			if (tProduct > lProduct) {
				std::cout << "i: " << i << " j: " << j << " down\n";;
				lProduct = tProduct;
			}
			//diagonal1
			tProduct = 1;
			for (int k=0; ((k<4) && ((i+k)<20) && ((j+k)<20)); ++k) {
				tProduct*=grid[root+21*k];
			}
			if (tProduct > lProduct) {
				std::cout << "i: " << i << " j: " << j << " diag1\n";;
				lProduct = tProduct;
			}
			//diagonal2
			tProduct = 1;
			for (int k=0; ((k<4) && ((i+k)<20) && ((j-k)>0)); ++k) {
				tProduct*=grid[root+19*k];
			}
			if (tProduct > lProduct) {
				std::cout << "i: " << i << " j: " << j << " diag2\n";;
				lProduct = tProduct;
			}
		}
	}
	
	std::cout << lProduct << "\n";
}

