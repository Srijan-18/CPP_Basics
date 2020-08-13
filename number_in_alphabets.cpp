
#include <iostream>

using namespace std;

int main(){
int number;
cout << "Enter the single numeric digit: " << endl; 
cin >> number;
string inAlphabets[10] = {"Zero", "One", "Two", "Three", "Four", "Five" , "Six", "Seven", "Eight", "Nine"};
		if( number >= 0 && number <= 9)
			cout << "In alphabets : " << inAlphabets[number] << endl;
		else	
			cout << "Out Of Range";
return 0;
}