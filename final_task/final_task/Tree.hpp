#pragma once // означает, что данный файл может быть подключен только один раз
#include <vector> //подключаем библиотеку с шаблоном вектора
#include <algorithm> //подключаем стандартную библиотеку для работу с данными
#include <iostream>
#include <set> //подключаем set стандартная библиотека


template<class Node> //в начале перед объявлением класса декларируем шаблон, то есть template
class Tree { 
protected:
	int size = 0;
	Node* root = nullptr; //нулевой указатель

public:
	virtual Node* find(int value) const = 0; //зададим параметры по умолчанию
	virtual void balance(std::vector<Node**> disbalancedNodesPtrs) = 0; //
	virtual void display() = 0;				 //
	virtual void clear() = 0;                //
	virtual void erase(int value) = 0;       //
	virtual void insert(int value) = 0;      //

};