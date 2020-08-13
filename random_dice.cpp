#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	  int randomNumber =(rand() % 6) + 1;
	  cout << "Dice face --> " << randomNumber << endl;
}
