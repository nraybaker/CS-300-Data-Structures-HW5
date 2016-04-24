#include "stack.hpp"
#include <iostream>
#include <cmath>

int main(void)
{
	//dec is the decimal number to convert to binary
	//stored as a double to handle non-integer values and put back into
	double dec1;
	int dec;
	
	//do-while loop will run once an continue to run while state is true
	bool state = true;
	
	//creating stack stk
	Stack stk;
	
	//do-while loop for menu
	do
	{
		//will print error if < -1
		cout << "Enter whole decimal number to convert to Binary or enter -1 to quit:  ";
		cin >> dec1;
		
		if(dec1 == -1)
			state = false;
			
		//Error handle for negative and non-integer numbers
		else if((dec1 < -1) || (fmod(dec1, 1) != 0))
			cerr << "Invalid number entered, please enter a positive integer." << endl << endl;
		
		//0 is 0 in binary	
		else if(dec1 == 0)
			cout << 0 << endl << endl;
			
		
		//Conversion of every other integer (up to max int)
		else
		{
			dec = dec1;
			cout << endl << "Binary representation of " << dec << " is: ";
			
			//Divides by 2 while dec is not 0 and pushes the remainder onto stack stk
			while(dec != 0)
			{
				int rem = dec % 2;
				stk.push(rem);
				dec = dec/2;
			}
			
			//While stack stk is not empty stack_top prints top digit and pop pops off the top digit
			while(!(stk.empty()))
			{
				stk.stack_top();
				stk.pop();
			}
			cout << endl << endl;
		}
		
	}while(state);
	
	return(0);
}

