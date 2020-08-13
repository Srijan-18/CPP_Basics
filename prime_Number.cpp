#include <iostream>
using namespace std; 
  
void printPrimeFactors(int checkNumber)  
{  
    while (checkNumber % 2 == 0)  
    {  
        cout << 2 << " ";  
        checkNumber = checkNumber/2;  
    }  
  
    for (int factor = 3; factor*factor <= checkNumber; factor = factor + 2)  
    {  
        while (checkNumber % factor == 0)  
        {  
            cout << factor << " ";  
            checkNumber = checkNumber/factor;  
        }  
    }  
  
	if (checkNumber > 2)  
        cout << checkNumber << " ";  
}  
  
int main()  
{  
	int number;
    cout << "Enter the number: ";  
	cin >> number;
    printPrimeFactors(number);
    return 0;  
}  
