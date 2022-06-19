#include <bits/stdc++.h>

using namespace std;

struct Node{
    
    int key;
    Node* next;
    next=NULL;
    
};
int main()
{
    struct Node root;
    struct Node newNode1;
    struct Node newNode2;
   
    root.key=10;
    root.next= &newNode1;
    root.next->next= &newNode2;
    
    root.next->key=3;
    (root.next->next)->key=4;
    
    cout<<root.key<<endl;
    cout<<(root.next)->key<<endl;
    cout<<(root.next->next)->key<<endl;
    
    return 0;
}
