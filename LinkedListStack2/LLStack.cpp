#include <iostream>
#include "LLStack.h"

LLStack::LLStack(): top(nullptr) {}

LLStack::~LLStack() { clear(); }

void LLStack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = top;
    top = newNode;
}

int LLStack::pop() {
    if(isEmpty()) return -1;
    int val = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return val;
}

int LLStack::peek() {
    if(isEmpty()) return -1;
    return top->data;
}

bool LLStack::isEmpty() {
    return top == nullptr;
}

void LLStack::printAll() {
    if(isEmpty()) return;
    Node* curr = top;
    while(curr) {
        std::cout << curr->data << " -> " ;
        curr = curr->next;
    }
    std::cout << std::endl ;
}

void LLStack::clear() {
    if(isEmpty()) return;
    while(top) {
        pop();
    }
}