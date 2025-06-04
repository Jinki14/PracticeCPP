#pragma once

#include <optional>

#include "Node.h"

template <typename T>
class LLQ {
    Node<T> *front, *rear;
    public:
        LLQ(): front(nullptr), rear(nullptr) {}

        ~LLQ() { clear(); }

        bool isEmpty() {
            return front == nullptr;
        }

        void enqueue(T val) {
            Node<T> *newNode = new Node<T>(val);
            if(isEmpty()) {
                rear = front = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }
        }

        std::optional<T> dequeue() {
            if(isEmpty()) return std::nullopt;
            Node<T> *temp = front;
            T val = temp->data;
            front = temp->next;
            delete temp;
            if(front == nullptr) rear = nullptr;
            return val;
        }

        void clear() {
            while(front) {
                dequeue();
            }
            rear = nullptr;
        }

        void printAll() {
            if(isEmpty()) return;
            Node<T> *curr = front;
            while(curr) {
                std::cout << curr->data << " -> " ;
                curr = curr->next;
            }
            std::cout << std::endl;
        }

        T frontItem() {
            if(isEmpty()) return -1;
            return front->data;
        }

        T rearItem() {
            if(isEmpty()) return -1;
            return rear->data;
        }
};  