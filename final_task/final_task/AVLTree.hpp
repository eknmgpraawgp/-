#pragma once  

#include "Tree.hpp"
#include "AVLNode.hpp"

class AVLTree : public Tree<AVLNode> {
public:
	AVLTree(); 
	~AVLTree(); 

public:
	AVLNode* find(int value) const override;
	void insert(int value) override;
	void erase(int value) override;
	void clear() override;
	int getSize() const;
	void balance(std::vector<AVLNode**> disbalancedNodesPtrs); 
	bool isEmpty() const;
	void display() override; 
	void display(AVLNode* node, int depth = 0, int state = 0);

public:
	void displayBalancedOrder();
};