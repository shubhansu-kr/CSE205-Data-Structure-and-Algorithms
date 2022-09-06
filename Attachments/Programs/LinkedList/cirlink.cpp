#include<iostream>
using namespace std;
struct nodeType{
int info;
nodeType *link;
};
nodeType* buildListForward();
//typedef nodeType *s;
//nodeType=s;
//s *p;
int main (){
     nodeType * first = buildListForward(); 
      nodeType * current = first; 
     
     if(current==NULL){
              cout << " list is empty ";         
     }   
     else{
          while (current->link != first){
            cout << current->info << " ";
            current = current->link;
          }
            cout << current->info << " ";
      }  
    return(0);
}
nodeType* buildListForward(){
          nodeType *first, *newNode, *last;
          int num;
          cout << "Enter a list of integers ending with -999."
          << endl;
          cin >> num;
          first = NULL;
          while (num != -999){
              newNode = new nodeType;
              newNode->info = num;
              //newNode->link = NULL;
              if (first == NULL){
                first = newNode;
                newNode->link = first;
            	}
              else{
                newNode->link = first->link;
                first->link = newNode;                
                first = newNode;
            	}
          cin >> num;
          } //end while
          return first;
} //end buildListForward

