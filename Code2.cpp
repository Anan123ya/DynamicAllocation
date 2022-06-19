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
    int value;
    cout<<"\nInput elements:"<<endl;
    cin>>value;
    root.key=value;
    
    
    Node* temp;
    temp=&root;
    for(int i=1;i<len;i++)
    {
        struct Node newNode;
        cin>>value;
        
        temp->next=&newNode;
        (temp->next)->key=value;
        temp=temp->next;
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
