#include<iostream>
#include<conio.h>
using namespace std;
void bubble(int [],int);
int main(){
    int i,n,item;
    cout<<"\n Enter number of elements in array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){   
        cout<<"Enter number:: "<<i+1<<" ";
    	cin>>a[i];
    }
    cout<<"Iteams in the array are: "<<endl;
    for(i=0;i<n;i++){               
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Applying bubble sort: "<<endl;
    bubble(a,n);
    cout<<"Sorted array after applying bubble sort: "<<endl;
    for(i=0;i<n;i++){                 
        cout<<a[i]<<"\t";
    } 
    return 0;
}           
void bubble(int a[],int n){
     for(int pass=1;pass<=n-1;pass++){
       for(int i=0;i<n-pass;i++){
	        if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;                                
            }
        }    
     }  
}          
