#include <iostream>

#include "LLQ.h"

using namespace std;

int main() {
    LLQ<int> q;
    
    q.enqueue(100);
    q.enqueue(90);
    q.enqueue(80);
    q.enqueue(70);
    q.printAll();
    q.dequeue();
    q.printAll();
    q.clear();
    q.enqueue(100);
    q.enqueue(90);
    q.enqueue(80);
    q.enqueue(70);
    q.printAll();

    return 0;
}