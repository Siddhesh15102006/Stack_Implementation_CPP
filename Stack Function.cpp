// Exp - 18
// Siddhesh
// 25070123505 (A3)

#include<iostream>
#define MAX 5
class Stack
{
    
private:
    int top;
    int arr[MAX];
public:
    Stack(void){
        top = -1;
    }
    void push(int val){
        if(top >= MAX-1){
            std::cout<<"\nStack Overflow";
            return;
        }
        else{
            top++;
            arr[top] = val;
            std::cout<<val<<" pushed to stack\n";
        }
    }
    void pop(void){
        if(top < 0){
            std::cout<<"Stack Underflow \n";
            return;
        }
        else{
            top--;
            std::cout<<"Top element popped from stack\n";
        }
    }
    void display(void){
        if(top < 0){
            std::cout<<"Stack is empty \n";
            return;
        }
        for(int i=0;i<=top;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    std::cout<<"Adding 6th element to stack: \n";
    s.push(60);
    std::cout<<std::endl;
    s.display();
    std::cout<<std::endl;
    s.pop();
    s.display();
    std::cout<<std::endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    std::cout<<std::endl;
    s.display();
    return 0;
}


Output :-
10 Pushed to stack
20 pushed to stack
30 pushed to stack
40 pushed to stack
50 pushed to stack
Adding 6th element to stack: 

Stack Overflow
10 20 30 40 50 

Top element popped from stack
10 20 30 40 

Top element popped from stack
Top element popped from stack
Top element popped from stack
Top element popped from stack
Stack Underflow 

Stack is empty 


=== Code Execution Successful ===    
