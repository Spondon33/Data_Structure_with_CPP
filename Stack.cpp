#include <iostream>
using namespace std;

class Stack {
private:
    int top;            // Index of the top element in the stack
    int maxSize = 5; // Maximum size of the stack
    int* arr;   // Array to store stack elements

public:
    // Constructor to initialize stack
    Stack() {
        arr = new int[maxSize];
        top = -1;
    }
    // dynamic stack thru resizing during runtime
    void resize(){
        int newSize = maxSize * 2;
        int* newArr = new int[newSize];

        for (int i = top; i >=0; i--){
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        maxSize = newSize;

        cout << "Stack capacity increased" << endl;
    }

    // Push an element onto the stack
    void push(int x) {
        if (top >= maxSize - 1) {
            resize();
        }
        arr[++top] = x;
        cout << "Pushed " << x << " to stack" << endl;
    }

    // Pop an element from the stack

    // Check if the stack is empty or not.
    // If empty, we cannot pop anything.
    //If not empty, just reduce the size of the top by 1!
    // No need to actually delete anything.
    void pop (){
        if (top < 0){
            cout << "Nothing to pop" << endl;
            return;
        }
        top--;
    }


    // Peek the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top < 0);
    }

    // Create another method to display all the elements in the stack.
    void displayAll(){
        if (isEmpty()){
            cout << "Stack is Empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--){
            cout << arr[i] << " " << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout << "Peak element is: " << s.peek() << endl;
    s.displayAll();

    return 0;
}
