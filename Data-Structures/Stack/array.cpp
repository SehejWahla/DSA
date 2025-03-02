#include<iostream>

class Stack{
    private: 
        int* arr;
        int top;
        int capacity;

    public:
        Stack(int size) {
            arr = new int[size];
            top = -1;
            capacity = size;
        }

        ~Stack(){
            delete[] arr;
        }

        bool isFull() {
            return top == capacity - 1;
        }

        bool isEmpty() {
            return top == -1;
        }

        int seek(){
            if(isEmpty()){
                std::cout<<"Underflow\n";
                return -1;
            }
            return arr[top];
        }

        int size() {
            return top + 1;
        }

        void push(int x){
            if(isFull()){
                std::cout << "Overflow\n";
                return;
            }
            arr[++top] = x;
            render();
            return;
        }

        int pop(){
            if(isEmpty()){
                std::cout<<"Underflow\n";
                return -1;
            }
            int val = arr[top--];
            render();
            return val;
        }

        void render(){
            if(isEmpty()){
                return;
            }
            for(int i=0;i<top+1;i++){
                std::cout<<arr[i]<<" ";
            }
            std::cout<<"\n";
            return;
        }
};

int main(){
    Stack s(5);

    
    s.push(1);
    
    s.push(5);
    
    s.push(12);
    
    s.pop();
    
    s.pop();
    
    s.push(15);
    
    s.push(25);
    
    s.pop();
    
    s.pop();
    
    s.pop();
    
    s.pop();
    
    return 0;
}
