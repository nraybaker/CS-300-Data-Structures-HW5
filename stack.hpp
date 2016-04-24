/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #5
	 
	 
	Psuedo Code:
	Class Name: Stack
	 
		Data:
			top - keeps track of the top of the stack
			count - keeps track of the number of Nodes in the list
		 
		Class Functions:
			Function: Stack
				Default constructor - sets count to 0 and top to NULL
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
				
			Function: push
				pushes an int to the top of the stack
				Input: int
				Outputs: None
				Return: false if push is unsuccessful
						true if push is successful
						
			Function: pop
				pops a node off of the top of the stack
				Input: None
				Outputs: None
				Return: false if pop is unsuccessful
						true if pop is successful
						
			Function: stack_top
				returns the top of the stack
				Input: None
				Output: None
				Return: the int on the top of the stack	
*/
#include "node.hpp"
#include <iostream>
using namespace std;

class Stack
{
	//Count keeps track of the number of nodes on the stack
	int count;
	
	//Top will point to the top of the stack
	Node *top;
	
public:

	//default constructor
	Stack();
	
	//push an int onto the stack
	bool push(int);
	
	//pop the top off the stack
	bool pop(void);
	
	//return the int on the top of the stack. Does nothing to the stack
	int stack_top(void);
	
	//checks to see if stack is empty
	bool empty(void);
};

