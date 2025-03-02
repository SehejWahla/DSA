#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    private : 
        Node* top;
        int size;
    
    public:
        Stack(){
            top = NULL;
            size = 0;
        }

        void render(){
            Node* curr = top;

            while(curr){
                cout<<curr->data<<" ";
                curr = curr->next;
            }

            cout<<"\n";
        }

        bool isEmpty(){
            return top == NULL;
        }

        void push(int x){
            Node* temp = new Node();
            temp->data = x;
            temp->next = top;
            top = temp;
            size++;
            render();
            return;
        }

        int pop(){
            if(isEmpty()){
                cout<<"Underflow\n";
                return -1;
            }
            Node* temp = top;;
            int val = temp->data;;
            top = top->next;
            delete temp;
            size--;
            render();
            return val;
        }
};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}