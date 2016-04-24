/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #5
*/
#include "stack.hpp"
#include <iostream>

using namespace std;

//Default constructor, sets count to 0 and top to NULL
Stack::Stack()
{
	count = 0;
	top = NULL;
}

//Pushes int onto the stack
bool Stack::push(int dec)
{
	//Create new Node to push on the stack
	Node *ptr = new Node(dec);
	
	//If new node ptr is not Null
	if(ptr != NULL)
	{
		//if the top is not null then set the link of the current top to point to ptr
		if(top != NULL)
			ptr -> set_link(top);
		
		//always set top = ptr
		top = ptr;
	}
	
	//Return false if unsuccessful
	else
		return(false);
		
	//add to count
	count++;
	return(true);
}

//pop the top off of the stack
bool Stack::pop(void)
{
	//if stack is empty there is nothing to pop off
	if(top == NULL)
		return(false);
		
	//creates temporary node to keep track of old top
	Node *temp;
	
	//set temp = top and set top to the link of the top
	temp = top;
	top = top -> get_link();
	
	//delete the temp and subtract from the count
	delete temp;
	count--;
	return(true);
}

//print stack top
int Stack::stack_top(void)
{
	//if stack is empty return error
	if(empty())
	{
		cerr << "STACK EMPTY";
		return(-1);
	}
	
	//else just print the data and return the int stored in the node
	top -> process_data();
	return(top -> get_num());
}

//return true if empty, false if non-empty
bool Stack::empty(void)
{
	//if top is null the stack is empty
	if(top == NULL)
		return(true);
		
	//else stack is not empty
	else
		return(false);
}

