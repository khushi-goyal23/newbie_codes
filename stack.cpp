/*#include<iostream>
using namespace std;

int top=-1;
int n;
int stack[10];
void push(int x){
    if(top==n-1){
        cout<<"Stack is overflowed"<<endl;
    }
    else{
        top=top+1;
        stack[top]=x;
    }
    }

void pop(){
    if(top==-1){
            cout<<"Stack is underflowed"<<endl;

        }
    else{
            cout<<stack[top]<<"is popped";
            top=top-1;
        }
    }

void peek(){
    if(top==-1){
            cout<<'Stack is empty'<<endl;
        }
    else{
            cout<<stack[top]<<endl;
        }
        }

int isEmpty(){
    if(top==-1){
            return 1;
        }
    else{
            return 0;
        }
    }

int isFull(){
    if(top==n-1){
            return 1;
        }
    else{
            return 0;
        }
        }    

int main(){
cout<<"Enter the size of the stack"<<endl;
cin>>n;
push(10);
push(20);
push(30);
pop();
    cout<<endl;
peek();
    cout<<endl;
    isEmpty();
    cout<<endl;
    isFull();
    return 0;
}*/