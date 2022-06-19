#include <bits/stdc++.h>

using namespace std;

struct Node{
    
    int key;
    Node* next;
    
};

int main()
{
    int len;
    cout<<"Enter number of elements....";
    cin>>len;
    
    struct Node root;
    cout<<"\nInput elements:"<<endl;
    int value;
    cin>>value;
    root.key=value;
    
    Node* temp;
    temp=&root;
    for(int i=1;i<len;i++)
    {
        Node* newNode=new Node();
        cin>>value;
        newNode->key=value;
        temp->next=newNode;
        temp=newNode;
    }
    
    temp=&root;
    cout<<"\nOutput :"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<(temp->key)<<endl;
        temp=temp->next;
    }
    return 0;
}
