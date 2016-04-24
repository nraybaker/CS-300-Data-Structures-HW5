/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #4
	 
	 
	Description of the problem:
		This program is going to define a preparatory class that you will be
		* using for linked list. You are going to write this class and us it 
		* so that you will be ready to use it for the linked list class.
		* The class is going to be the Node class.

	Psuedo Code:
	Class Name: Node

		Data:
			num that is a digit of the binary representation of the number being
			* converted to binary
			Link that is a the pointer to other nodes
	
		Mutator Functions:
		
			Function: set_link
				mutator function to set the pointer to another node
				Input: where the pointer should point to
				Outputs: None
				Return: N/A (Just sets the pointer)
			
		
		Accesor Functions:
			
			Function: get_link
				Accessor function to access the location of the node the 
				* current node's link is pointing to
				Input: None
				Output: Node
				Return: Memory location of the node "ahead" of current node
			
		
			Function: get_num
				Accessor function to get the num stored in the node
				Input: None
				Output: None
				Return: the number
		
		
		Class Functions:
			Function: Node
				Default constructor - sets num to 0 and link to NULL
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
		
			Function: Node
				constructor that accepts an int to pass into num and sets link
				* to NULL
				Inputs: a number
				Outputs: None
				Return: N/A
					just set link to NULL and num = a number
			
			Function: process_data
				function that will print the data to the screen
				Inputs: None
				Outputs: the data the node contains: num
				Return: N/A
*/	
#include <iostream>
using namespace std;

//Node class
class Node
{
	int num;
	Node *link;

public:
	//Default constructor
	Node();
	
	//Non-default constructor
	Node(int);
	
	//Set link of the Node to point to previous Node
	void set_link(Node *ptr);
	
	//Get where the next link in the Node is pointing to
	Node *get_link();
	
	//Get the title of the Node
	int get_num();

	//Print the data of the Node
	void process_data();
};
