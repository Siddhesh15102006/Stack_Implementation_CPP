---
# 🧪 Experiment 18 :- Stack implementation using array in C++

---

## 📌 Aim
To implement **Stack** data structure using an **array** in C++ and perform basic operations like push, pop, peek, and display.

---

## 📚 Theory
A **stack** is a linear data structure that follows the **LIFO** principle — **Last In, First Out**. The element added last is the first one to be removed.

### ⚙️ Stack Operations:
- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the top element.
- **Peek/Top**: View the top element without removing it.
- **isEmpty**: Check if the stack is empty.
- **isFull**: Check if the stack is full (for array-based stack).

---

## ✅ Q1. Stack Function (Using Array)

### 🔧 Syntax
const int SIZE = 100;
int stack[SIZE];
int top = -1;

### 🧠 Logic
Use an array to store stack elements.
Use a variable top to track the top of the stack.
Increment top on push, decrement top on pop.
Check for overflow and underflow conditions.

### 💻 Code
```cpp
#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    // Peek (top element)
    void peek() {
        if (top < 0) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (top < 0) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}
```

---

📌 Output (Example)
vbnet
Copy code
10 pushed to stack.
20 pushed to stack.
30 pushed to stack.
Stack elements: 30 20 10
Top element is: 30
30 popped from stack.
Stack elements: 20 10

---

## ✅ Conclusion
In this experiment, we successfully:
Implemented a stack using an array.
Performed basic stack operations (push, pop, peek, display).
Understood overflow and underflow conditions in static stacks.
This provides a foundational understanding of stack behavior, useful in applications like expression evaluation, backtracking, and more.

---
