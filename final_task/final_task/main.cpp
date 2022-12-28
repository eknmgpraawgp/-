#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

#include "AVLTree.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    AVLTree tree;//������� ������ �������������

    int size; 
    cout << "������� ������ ������������������: ";
    cin >> size;

    cout << "������� ������������������: ";
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;

        if (tree.find(x) == nullptr) { //�������� �����
            tree.insert(x);
        } 
        else {
            cout << endl << "������ ������������ ������������� ��������(" << x << ")";
        }
    }

    cout << endl << endl << "���� ���������������� AVL ������:";

    tree.display();

    cout << endl << "���� ������������������ ��� ����������������� ������:" << endl;
    tree.displayBalancedOrder();

    cout << endl << endl;

    system("pause");

    return 0;
}