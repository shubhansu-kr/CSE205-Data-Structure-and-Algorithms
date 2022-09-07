#include<iostream>
using namespace std;
void push();
int pop();
void display();
int stack[10];
int top=-1;
int main(){
 	int ch;
  	while(1){
    	cout <<"\n 1.push  2.pop  3.display \nEnter ur choice";
    	cin >> ch;
    	switch(ch){
        	case 1:  push(); break;
        	case 2:  pop();  break;
        	case 3:  display();break;
    	}
	}
    return 0;
}
void push(){
  	int item;
 	if(top==9){
    	cout<<"The stack is full,Overflow";
   	}
  	else{
    	cout<<"Enter the item to be inserted\n";
    	cin>>item;
    	top+=1;
    	stack[top]=item;
  	}
}
int pop(){
  	int item;
  	if(top==-1){
    	cout<<"The stack is empty,Underflow";
  	}
  	else{
    	item=stack[top];
    	top=top-1;
  	}
  	return(item);
}
void display(){
   	int i;
   	if(top==-1){
      printf("The stack is empty");
	}
  	else{
    	cout<<"The elements in stack are";
    	for(i=top;i>=0;i--){
     		cout<<endl<<stack[i];
   		}
 	}
}
