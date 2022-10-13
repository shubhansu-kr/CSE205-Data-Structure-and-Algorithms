#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
int info;
node *left,*right;
};
node *root=NULL,*loc,*par;
void find(int item, node *root);
void insertion();
void traversal(node *root);


int main()
{
int k;
while(1)
{
cout<<endl<<"----1----INSERTION";
cout<<endl<<"----2----TRAVERSAL";
cout<<endl<<"----3----EXIT";
cout<<endl<<endl;
cout<<endl<<"ENTER YOUR CHOICE : ";
cin>>k;
switch(k)
{
case 1:
insertion();
break;
case 2:
traversal(root);
break;
case 3:
exit(0);
}
}
}
void find(int item, node *root)
{
     node *ptr,*save;
          if(root==NULL)
          {
               loc=NULL;
               par=NULL;
               return;
           }
         else if(item==root->info)
           {
               loc=root;
               par=NULL;
               return;
           }
         else 
         {
              if(item<root->info)
                {
                   ptr=root->left;
                   save=root;
                }
             else
               {
                   ptr=root->right;
                   save=root;
               }
             while(ptr!=NULL)
               {
                    if(item==ptr->info)
                      {
                          loc=ptr;
                          par=save;
                          return;
                      }
                    else 
                    {
                     if(item<ptr->info)
                      {
                          save=ptr;
                          ptr=ptr->left;
                      }
                    else
                      {
                           save=ptr;
                           ptr=ptr->right;
                      }
                    }
                    }
                    }
               loc=NULL;
               par=save;
        }

void insertion()
{
node *newNode;
int item;
cout<<"ENTER THE ITEM : ";
cin>>item;
find(item,root);
if(loc!=NULL)
{
      cout<<endl<<"ITEM ALREADY PRESENT ";
      return;
}
else
{
newNode=new node;
newNode->info=item;
loc=newNode;
newNode->left=NULL;
newNode->right=NULL;
if(par==NULL)
root=newNode;
else if(item<par->info)
par->left=newNode;
else
par->right=newNode;
}
}

void traversal(node *root)
{
if(root==NULL)
{
    return;
}
else
{
traversal(root->left);
cout<<"   "<<root->info;
traversal(root->right);
}
}
