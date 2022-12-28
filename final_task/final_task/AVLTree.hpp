#pragma once  //означает, что данный файл может быть подключен только один раз

#include "Tree.hpp"
#include "AVLNode.hpp"

class AVLTree : public Tree<AVLNode> {
public:
	AVLTree(); //конструктор
	~AVLTree(); //деструктор для очистки памяти 

public:
	AVLNode* find(int value) const override;
	void insert(int value) override;
	void erase(int value) override;
	void clear() override;
	int getSize() const;
	void balance(std::vector<AVLNode**> disbalancedNodesPtrs); //балансировка
	bool isEmpty() const;
	void display() override; //отображение древа
	void display(AVLNode* node, int depth = 0, int state = 0);

public:
	void displayBalancedOrder();
};