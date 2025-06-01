#ifndef LLSTACK_H
#define LLSTACK_H

#include "Node.h"

class LLStack {
    Node* top;
    public:
        LLStack();
        ~LLStack();
        void push(int val);
        int pop();
        int peek();
        bool isEmpty();
        void printAll();
        void clear();
};

#endif