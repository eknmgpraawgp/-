#pragma once 

class Node {
public:
	const int value = -1; 
	Node(int value);      
	Node* left = nullptr; 
	Node* right = nullptr;
public:
	virtual void display() = 0;
};