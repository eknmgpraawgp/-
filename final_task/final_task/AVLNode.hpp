#pragma once // означает, что данный файл может быть подключен только один раз

#include <iostream>

#include "Node.hpp"

class AVLNode : public Node {
public:
	int height = 0;				//
	AVLNode* left = nullptr;	// зададим значения по умолчанию
	AVLNode* right = nullptr;	//
	AVLNode(int value);		
	void display() override;
	void updateValues();
	int balanceFactor();

	AVLNode* leftRotate(); 
	AVLNode* rightRotate();
};