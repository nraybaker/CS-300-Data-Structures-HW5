/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #4
*/
#include "node.hpp"
#include <iostream>
using namespace std;

//Default constuctor for Node
Node::Node()
{
	num = 0;
	link = NULL;
}

//Non-default constructor for Node
Node::Node(int n)
{
	num = n;
	link = NULL;
}

//Set the link of the node
void Node::set_link(Node *ptr)
{
	link = ptr;
}

//Return the link of the node
Node *Node::get_link()
{
	return(link);
}

//Return num data from the node
int Node::get_num()
{
	return(num);
}

//Print num data stored in node
void Node::process_data()
{
	cout << num;
}

