#pragma once 

#include <iostream>

#include "Node.hpp"

class AVLNode : public Node {
public:
	int height = 0;				
	AVLNode* left = nullptr;	
	AVLNode* right = nullptr;	
	AVLNode(int value);		
	void display() override;
	void updateValues();
	int balanceFactor();

	AVLNode* leftRotate(); 
	AVLNode* rightRotate();
};