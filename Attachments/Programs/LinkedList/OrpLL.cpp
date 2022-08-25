#include<iostream>
using namespace std;
struct nodetype{
int data;
nodetype *link;
};
int main(){
    nodetype *first,*last,*newnode,*current,*q ;
    int num,c,a;
    first=NULL;
    last=NULL;
    cout<<"Build the link list(terminate it with -1)";
    cin>>num;
    while(num!=-1){        
        newnode=new nodetype;
        newnode->data=num;
        newnode->link=NULL;
        if(first==NULL){
            first=newnode;
            last=newnode;
        }
        else{
            last->link=newnode;
            last=newnode;
        }
        cin>>num;
    }   
    current=first;
    while(current!=NULL){
        cout<<"->"<<current->data;
        current=current->link;
    }
    cout<<endl;
    cout<<"press 1 to insert and 2 to delete an element";
    cin>>a;
    if(a==1){
        newnode=new nodetype;
        current=first;
        cout<<"enter the data of node next to which u wnt to insert the new node";
        cin>>c;
        while(c!=current->data){
            current=current->link;
        }
        cout<<"enter the data u want to insert";
        cin>>num;
        newnode->data=num;
        newnode->link=current->link;
        current->link=newnode;
    }
    else{
        cout<<"enter the data whose next node u want to delete";
        cin>>c;
        current=first;
        while(c!=current->data){
            current=current->link;
        }
        q=current->link;
        current->link=q->link;
        delete q;
    }
    cout<<"new list is=";
    current = first;
    while(current!=NULL){
        cout<<"->"<<current->data;
        current=current->link;
    }
}
