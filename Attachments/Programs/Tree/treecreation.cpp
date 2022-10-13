#include<conio.h>
#include<iostream>
using namespace std;
struct node{
       node *left;
       char info;
       node *right;
};
void preorder(node *root);
int main(){
          node *root, *temp,*x;
          char ch;
          node *queue[50];
          int front=-1,rear=-1;
          root=new node;
          cout<<"enter root node";
          cin>>root->info;
          root->left=NULL;
          root->right=NULL;
          front=0;rear=0;
          queue[rear]=root;
          while(rear>=front){                            
             x=queue[front];
             front=front+1;
             cout<<"is their any left child of"<<x->info<<"(y/n)"<<"   ";
             cin>>ch;
             if(ch=='y'){
                 temp=new node;       
                 cout<<"enter left child";
                 cin>>temp->info;
                 x->left=temp;
                 temp->left=NULL;
                 temp->right=NULL;
                 rear=rear+1;
                 queue[rear]=temp;
             }
             cout<<"is their any right child of"<<x->info<<"(y/n)"<<"   ";
             cin>>ch;
             if(ch=='y'){
                 temp=new node;       
                 cout<<"enter right child";
                 cin>>temp->info;
                 x->right=temp;
                 temp->left=NULL;
                 temp->right=NULL;
                 rear=rear+1;
                 queue[rear]=temp;
             } 
          }
          preorder(root);
          getch();
}
void preorder(node *root){
     if(root==NULL)
     return;
     else{
          cout<<root->info<<"\t";
          preorder(root->left);
          preorder(root->right);
     }
}                   
                        
          
