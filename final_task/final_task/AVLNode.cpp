#include "AVLNode.hpp"

AVLNode::AVLNode(int value) : Node(value), height(1) {
}

void AVLNode::display() { //оторбражение дерева
    if (right != nullptr) { //если есть указатель направо (правое поддеревье)
        std::cout << "     |---- " << "[" << right->value << "]" << std::endl;
    }

    std::cout << "|----[" << value << "]" << std::endl;

    if (left != nullptr) {//если есть налево (левое поддеревье)
        std::cout << "     |---- " << "[" << left->value << "]" << std::endl;
    }
}

void AVLNode::updateValues() { //обновления значений
    auto leftCount = 0;
    auto leftHeight = 0;

    if (left != nullptr) {
        leftHeight = left->height;
    }

    auto rightCount = 0;
    auto rightHeight = 0;

    if (right != nullptr) {
        rightHeight = right->height;
    }

    height = std::max(leftHeight, rightHeight) + 1; //подсчет высоты
}

int AVLNode::balanceFactor() { //проверяем сбалансированность (разницу высот)
    auto leftHeight = left != nullptr ? left->height : 0;
    auto rightHeight = right != nullptr ? right->height : 0;

    return leftHeight - rightHeight; 
}

AVLNode* AVLNode::rightRotate() {//код реализующий правый поворот
    AVLNode* leftTmp = left;
    left = left->right;
    leftTmp->right = this;

    this->updateValues();
    leftTmp->updateValues();

    return leftTmp;
}

AVLNode* AVLNode::leftRotate() { //код реализующий  левый поворот
    AVLNode* rightTmp = right;

    right = right->left;
    rightTmp->left = this;

    this->updateValues();
    rightTmp->updateValues();

    return rightTmp;
}