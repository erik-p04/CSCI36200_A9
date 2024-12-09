#include <iostream>

void solve(int n, char start, char destination, char auxiliary){
	if(n==0){
		return; //Base case
	}
	solve(n-1, start, auxiliary, destination);
	std::cout << "Ring " << n << ": " << start << " -> " << destination << std::endl;
	solve(n-1, auxiliary, destination, start);
}
int main(){
	int N;
	bool keepGoing = true;
	while(keepGoing){
		std::cout << "Enter number of rings(must be greater than 2): ";
		std::cin >> N;
		if(N>2){
			keepGoing = false;
		}
	}
	char startR = 'A';
	char endR = 'C';
	char auxR = 'B';
	std::cout << "Moving rings from " << startR << " to " << endR << std::endl;
	solve(N, startR, endR, auxR);
	return 0;
}
