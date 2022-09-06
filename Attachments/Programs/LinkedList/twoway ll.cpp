#include<iostream>
using namespace std;
struct nodeType{
	int info;
	nodeType *next;
	nodeType *back;
};
nodeType* buildListForward();
int main (){
     nodeType * current = buildListForward();
     while (current != NULL){
            cout << current->info << " ";
            current = current->next;
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
              newNode->next = NULL;
              newNode->back = NULL;
              if (first == NULL){
                first = newNode;
                last = newNode;              
                }
              else{
                last->next = newNode;
                newNode->back = last;
                last = newNode;
                }
          cin >> num;
          } //end while          
          return first;
} //end buildListForward

