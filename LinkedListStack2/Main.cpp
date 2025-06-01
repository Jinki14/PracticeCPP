// 2025/05/29

#include <iostream>
#include "LLStack.h"

using namespace std;

int main() {
    LLStack stack;
    stack.push(100);
    stack.push(90);
    stack.push(80);
    stack.push(70);
    stack.pop();
    cout << stack.peek() << endl ;
    stack.printAll();
    stack.clear();
    stack.push(100);
    stack.push(90);
    stack.push(80);
    stack.printAll();
    return 0;
}