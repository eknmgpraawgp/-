#include "AVLTree.hpp"

AVLTree::AVLTree() { 
}

AVLTree::~AVLTree() { 
    clear();
}

AVLNode* AVLTree::find(int value) const { 
    auto cNode = root; 

    while (cNode != nullptr && cNode->value != value) { 
        if (cNode->value < value) { 
            cNode = cNode->right;
            
        }
        else {
            cNode = cNode->left; 
        }
    }

    return cNode;
}

void AVLTree::insert(int value) {
    auto newNodePtr = &root; 
    std::vector<AVLNode**> disbalancePtrs;

    while (*newNodePtr != nullptr) { 
        disbalancePtrs.push_back(newNodePtr);

        if (value > (*newNodePtr)->value) {
            newNodePtr = &((*newNodePtr)->right);
        } 
        else {
            newNodePtr = &((*newNodePtr)->left);
        } 
    }

    *newNodePtr = new AVLNode(value);
    disbalancePtrs.push_back(newNodePtr); 

    balance(disbalancePtrs);
    size++;
}

void AVLTree::erase(int value) {
    auto delPtr = &root;
    std::vector<AVLNode**> disbalancePtrs;

    while (*delPtr != nullptr && (*delPtr)->value != value) {
        disbalancePtrs.push_back(delPtr);

        if ((*delPtr)->value > value) {
            delPtr = &((*delPtr)->left);
        }
        else {
            delPtr = &((*delPtr)->right);
        }
    }

    if (*delPtr == nullptr) {
        return;
    }

    if ((*delPtr)->left == nullptr && (*delPtr)->right == nullptr) {
        delete* delPtr;
        *delPtr = nullptr;
    }
   
    else if ((*delPtr)->right == nullptr) {

        auto badPtr = *delPtr;

        (*delPtr) = (*delPtr)->left;
        delete badPtr; 
    }
   
    else {
        disbalancePtrs.push_back(delPtr);
        auto delPtrIndex = disbalancePtrs.size();

        auto Right_Child_Without_Left_Ptr = &((*delPtr)->right);

        while ((*Right_Child_Without_Left_Ptr)->left != nullptr) {
            disbalancePtrs.push_back(Right_Child_Without_Left_Ptr);
            Right_Child_Without_Left_Ptr = &((*Right_Child_Without_Left_Ptr)->left);
        }

        if (*Right_Child_Without_Left_Ptr != (*delPtr)->right) {
            auto erasingNodeRightChildBeforeWithoutLeftNode = *disbalancePtrs.back(), erasingNodeRightChildWithoutLeftNode = *Right_Child_Without_Left_Ptr;

            erasingNodeRightChildBeforeWithoutLeftNode->left = (*Right_Child_Without_Left_Ptr)->right;
            erasingNodeRightChildWithoutLeftNode->left = (*delPtr)->left;
            erasingNodeRightChildWithoutLeftNode->right = (*delPtr)->right;

            delete* delPtr;
            *delPtr = erasingNodeRightChildWithoutLeftNode;
            disbalancePtrs[delPtrIndex] = &(erasingNodeRightChildWithoutLeftNode->right);
        }
        else {

            (*Right_Child_Without_Left_Ptr)->left = (*delPtr)->left;

            auto removing = *delPtr;
            *delPtr = *Right_Child_Without_Left_Ptr;
            delete removing;

           
        }
    }

    balance(disbalancePtrs);
    size--;
}

void AVLTree::clear() {
    std::vector<Node*> stack;

    if (root != nullptr) {
        stack.push_back(root);
    }

    while (!stack.empty()) {
        Node* node = stack.back();
        stack.pop_back();

        if (node->left != nullptr) {
            stack.push_back(node->left);
        }

        if (node->right != nullptr) {
            stack.push_back(node->right);
        }

        size--;
        delete node;
    }

    root = nullptr;
}

int AVLTree::getSize() const {
    return size;
}

bool AVLTree::isEmpty() const {
    return size == 0;
}

void AVLTree::balance(std::vector<AVLNode**> path) { //балансировка узла
    reverse(path.begin(), path.end());

    for (auto node : path) {
        (*node)->updateValues();

        // left - left
        if ((*node)->balanceFactor() >= 2 && (*node)->left->balanceFactor() >= 1) {
            *node = (*node)->rightRotate();
        }
        // left - right
        else if ((*node)->balanceFactor() >= 2) {
            (*node)->left = (*node)->left->leftRotate();
            *node = (*node)->rightRotate();
        }
        // right - right
        else if ((*node)->balanceFactor() <= -2 && (*node)->right->balanceFactor() <= -1) {
            *node = (*node)->leftRotate();
        }
        // right - left
        else if ((*node)->balanceFactor() <= -2) {
            (*node)->right = ((*node)->right)->rightRotate();
            *node = (*node)->leftRotate();
        }
    }
}

void AVLTree::display() {
    std::cout << std::endl;

    if (root != nullptr) {
        display(root);
    } 
    else {
        std::cout << "Пусто"; 
    }

    std::cout << std::endl;
}

void AVLTree::display(AVLNode* node, int depth, int state) {
    if (node->right) {
        display(node->right, depth + 1, 2);
    }

    for (int i = 0; i < depth; i++) {
        std::cout << "     ";
    }

    std::cout << "||===";

    std::cout << "{" << node->value << "}" << std::endl;

    if (node->left) {
        display(node->left, depth + 1, 1);
    }
}

void AVLTree::displayBalancedOrder() {
    std::vector<AVLNode*> order;

    order.push_back(root);

    for (int i = 0; i < size; i++) {
        if (order[i]->left != nullptr) {
            order.push_back(order[i]->left);
        }
        if (order[i]->right != nullptr) {
            order.push_back(order[i]->right);
        }
    }

    for (auto node : order) {
        std::cout << node->value << " ";
    }
}