#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int HEADS = 1, headsCount = 0, tailsCount = 0;
	do {
		(rand() % 2 == HEADS) ? headsCount++: tailsCount++;
	}while (headsCount < 11 && tailsCount < 11);
	(headsCount == 11) ? cout << "Heads wins 11 times and Tails wins " << tailsCount << " times"
						: cout << "Tails wins 11 times and Heads wins " << headsCount << " times";
	return 0;
}  