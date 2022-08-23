#include<iostream>
using namespace std;
int main(){
    int ub,lb,mid,i,n,*p,item,loc;
    cout<<" !!!!!!!ENTER NUMBER OF ELEMENTS IN INPUT LIST!!!!!!";
    cin>>n;
    p=new int[n];
    cout<<"\n PLEASE ENTER   "<<n<<"  VALUES IN ASCENDING SEQUENCE";
    for(i=0;i<n;i++){
           cin>>p[i];
    }    
    cout<<"\n NOW ENTER NUMBER YOU WANT TO SEARCH  ";
    cin>>item;
    ub=n-1;
    lb=0;
    mid=(ub+lb)/2;
    while((p[mid]!=item)&&(lb<=ub)){
             if(p[mid]<item){
                    lb=mid+1;
             }
             else{
                    ub=mid-1;
             }
             mid=(ub+lb)/2;
    }        
    if(p[mid]==item){
       loc=mid;
       cout<<"\n NUMBER FOUND AT POSITION "<<loc+1;
    }  
    else{
    	cout<<" SORRY!! ELEMENT NOT FOUND IN LIST....";
	}
}                     
    
