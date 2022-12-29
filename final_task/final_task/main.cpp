#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

#include "AVLTree.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    AVLTree tree;//создаем дерево конструктором

    int size; 
    cout << "Введите размер последовательности: ";
    cin >> size;

    cout << "Введите последовательность: ";
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;

        if (tree.find(x) == nullptr) { 
            tree.insert(x);
        } 
        
    }

    cout << endl << endl << "Ваше сбалансированное AVL дерево:";

    tree.display();

    cout << endl << "Ваша последовательность для сбалансированного дерева:" << endl;
    tree.displayBalancedOrder();

    cout << endl << endl;

    system("pause");

    return 0;
}