#pragma once // означает, что данный файл может быть подключен только один раз

class Node {
public:
	const int value = -1; // зададим
	Node(int value);      // значения
	Node* left = nullptr; // по умолчанию 
	Node* right = nullptr;//
public:
	virtual void display() = 0;//
};