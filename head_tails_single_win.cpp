#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int HEADS = 1;
	int tossResult = rand() % 2;
	tossResult == HEADS ? cout << "Coin Face --> HEADS" : cout << "Coin Face --> TAILS";
	return 0;
}
	