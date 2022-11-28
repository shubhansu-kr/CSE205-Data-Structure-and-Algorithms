#include<iostream>
#include<conio.h>
using namespace std;
void insert(int a[], int n, int item);
int deleteheap(int a[],int n);
int main()
{
          int *a, i,n,item;
          cout<<"\nEnter number of elements in array: ";
          cin>>n;
          a=new int[n];
          for(i=0;i<n;i++)
           {   
               cout<<"Enter number"<<i+1<<": ";
               cin>>a[i];
           }
           for(i=0;i<n;i++)
           {                
               item=a[i];
               insert(a,i,item);
           } 
           cout<<"\n Heap is: ";
           for(i=0;i<n;i++)
           {   
               cout<<" "<<a[i];               
           }           
           for(i=n;i>=1;i--)
           {
                item=deleteheap(a,i);
                a[i-1]=item; 
           }
            cout<<"\n\n Soted List is: ";
           for(i=0;i<n;i++)
           {   
               cout<<" "<<a[i];  
           }
           getch();
           }
  void insert(int a[], int n, int item)
  {
       int ptr,par,temp;
       a[n]=item;
       ptr=n;
       par=(ptr-1)/2;//par index of element at index ptr
       while(ptr>=1)
       {
              if(a[par]>=a[ptr])
              break;
              else
              {
                temp=a[par];
                a[par]=a[ptr];
                a[ptr]=temp;
                ptr=par;
                par=(ptr-1)/2;
              } 
        }    
   }
   int deleteheap(int a[],int n)
   {
        int i=0,item,temp;              
        item=a[0];
        a[0]=a[n-1];
        n=n-1;
        while(((a[i]<a[2*i+1])||(a[i]<a[2*i+2]))&&((2*i+1)<n))
        {
              if(a[2*i+1]>a[2*i+2]) 
              {
                    temp=a[i];
                    a[i]=a[2*i+1];
                    a[2*i+1]=temp;
                    i=2*i+1;
              } 
              else 
              {
                    temp=a[i];
                    a[i]=a[2*i+2];
                    a[2*i+2]=temp;
                    i=2*i+2;
              } 
        } 
        return item;
   } 
