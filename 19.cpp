#include <iostream>
#include <vector>
using namespace std;
class LIST {
public:
    virtual void store(int value) = 0;     // Pure virtual function for storing a value
    virtual int retrieve() = 0;            // Pure virtual function for retrieving a value
};

class Stack : public LIST {
private:
    vector<int> stack;  // Using a vector to implement a stack

public:
    void store(int value) override {
        cout << "Pushing value onto the stack: " << value << std::endl;
        stack.push_back(value);
    }

    int retrieve() override {
        if (!stack.empty()) {
            int value = stack.back();
            stack.pop_back();
            cout<< "Popping value from the stack: " << value << std::endl;
            return value;
        } else {
            cout<< "Stack is empty." << std::endl;
            return -1;  // Assuming -1 represents an error or an empty stack
        }
    }
};

class Queue : public LIST {
private:
    vector<int> queue;  // Using a vector to implement a queue

public:
    void store(int value) override {
        cout << "Enqueuing value into the queue: " << value << std::endl;
        queue.push_back(value);
    }

    int retrieve() override {
        if (!queue.empty()) {
            int value = queue.front();
            queue.erase(queue.begin());
            cout << "Dequeuing value from the queue: " << value << std::endl;
            return value;
        } else {
            cerr << "Queue is empty." << std::endl;
            return -1;  // Assuming -1 represents an error or an empty queue
        }
    }
};

int main() {
    Stack myStack;
    Queue myQueue;

    myStack.store(10);
    myStack.store(20);
    myStack.retrieve();

    myQueue.store(30);
    myQueue.store(40);
    myQueue.retrieve();

    return 0;
}
