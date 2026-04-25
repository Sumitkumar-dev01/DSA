#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data; 
    node* next;
    node(int val){
        data = val;
        next = NULL; 
    }
}; 
int main(){
    node*head = new node(10); 
    cout<<"head data: "<<head->data; 
return 0;
}


