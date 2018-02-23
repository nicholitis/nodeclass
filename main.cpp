#include "node.h"
#include <iostream>

using namespace std;

Node* myNode = new Node(10, nullptr);

int main(){

	myNode->Display();

	system("read -n1 -r -p \"Press any key to continue...\"");

	//system("pause");
	//uncomment if ur OS sucks

	if (myNode){
		delete myNode;
	}

	return 0;
}