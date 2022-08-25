#include<iostream>
using namespace std;
struct nodeType{
    int info;
    nodeType *link;
};
nodeType* buildListForward();
int main (){
     nodeType * current = buildListForward();
     while (current != NULL){
            cout << current->info << " ";
            current = current->link;
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
              newNode = new nodeType;// to allocate memory
              newNode->info = num;// assigning data part
              newNode->link = NULL; // assigning null to the pointer part
              if (first == NULL){
                first = newNode;
                last = newNode;
              }
              else{
                last->link = newNode;
                last = newNode;
              }
              cin >> num;
          } //end while
          return first;
} //end buildListForward

