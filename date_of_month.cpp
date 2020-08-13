#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int date, month;
	cout << "Enter Date in DD:";
	cin >> date;
	cout << "\nEnter Month in MM:";
	cin >> month;
	if((month==4 && date<=30 && date>=1) || ( month==5 && date>=1 && date<=31))
		cout << "\nValid Date";
	else if((month==3 && date>=20 && date<=31 ) || (month==6 && date>=1 && date<=20))
		cout << "\nValid Date";
	else
		cout << "\nInValid Date";
	return 0;
}