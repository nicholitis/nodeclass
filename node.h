/*
* node.h
* 
* created: Feb 23, 2017
* author: Nicholas E
*
* Node class for data structures:
* Handles references to next node
* Stores data (int, string, char, class obj.)
*
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

class Node{

public:
	Node(); 			//ctor to initialize values
	Node(int _data, Node* _next);//overloaded ctor
	
	~Node();			//dtor (not used)

	int GetData();		//accesses member data outside of this class
	Node* GetNext();	//same^

	void SetData(int _newData);
	void SetNext(Node* _newNext);

	void Display();		//u know what this does

private:
	int iData;			//stores int type data
	Node* next;			//ptr to the next node in the list
};

#endif //NODE_H