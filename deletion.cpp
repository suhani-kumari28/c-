#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int value){
    this-> data=value;
   this-> next=NULL;
}};
void insertattail(node* &head,int d){
   node* newnode=new node(d);
   if(head==NULL){
    head=newnode;
    return;
   }
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
}
void printlist(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletenode(node*&head,int position){
    if(head==NULL){
        cout<<"list is empty";
        return;
    }
    node*curr=head;
    if(position==1){
    head=head->next;
    delete curr;
    return;
}
node*prev=NULL;
int count =1;
while(curr->next!=NULL &&count<position){
    prev=curr;
    curr=curr->next;
    count++;
}
if(curr==NULL){
    cout<<"position not found";
    return;
}
prev->next=curr->next;
delete curr;
}
int main (){

     node*head=NULL;
    int arr[]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        insertattail(head,arr[i]);
    }
    cout<<"original list"<<endl;
    printlist(head);     
 insertattail(head,12);
 insertattail(head,15);
 cout<<"list after insertion<<endl";
printlist(head);
deletenode(head,3);
cout<<"list after deletion"<<endl;
 printlist(head);
 deletenode(head,4);
cout<<"list after deletion"<<endl;
 printlist(head);   
return 0;
}