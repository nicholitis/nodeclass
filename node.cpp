/*
*
*
*
*
*/

#include "node.h"
#include <iostream>

using namespace std;

Node::Node(){

	SetData(0);
	SetNext(nullptr);
}

Node::Node(int _newData, Node* _newNext){

	SetData(_newData);
	SetNext(_newNext);
}

Node::~Node(){


}

int Node::GetData(){

	return this->iData;
}

Node* Node::GetNext(){

	return this->next;
}

void Node::SetData(int _newData){

	this->iData = _newData;
}

void Node::SetNext(Node* _newNext){

	this->next = _newNext;
}

void Node::Display(){

	cout << "Data: " << GetData() << endl;
}