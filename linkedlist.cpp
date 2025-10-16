#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
}; void insertathead(node*&head,int d ){
node* temp=new node(d);
temp->next=head;
head=temp;
}
void insertattail(node* &tail,int d){
   node* temp=new node(d);
tail->next=temp;
tail=temp;
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatposition(node* &tail,node* &head,int d,int position){
    if (position==1){
        insertathead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
int main (){
    node*node1=new node(10);
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;
node*tail=node1;
node*head=node1;
insertathead(head,67);
print(head);
insertattail(tail,12);
print(head);
insertattail(tail,15);
print(head);
insertatposition(tail,head,22,4);
print(head);
insertatposition(tail,head,27,3);
print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
return 0;
}