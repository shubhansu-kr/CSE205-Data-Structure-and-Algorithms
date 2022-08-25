#include<iostream>
using namespace std;
struct nodeType{
    int info;
    nodeType *link;
};
nodeType *first=NULL, *newNode, *last, *temp;
nodeType* buildListForward();
int main (){
     nodeType * current = buildListForward();
     while (current != NULL){
            cout << current->info << " ";
            current = current->link;
    }
    cout << "Enter an element to search: ";
    int item;
    cin>>item;
    if(first == NULL)
        cout << "Linked list is empty: ";
    else{
    temp=first;
    while (temp->link != NULL && temp->info != item){
           temp = temp->link;
    }
    if(temp->info == item)
        cout << "Element is available in the linked list.";
    else
        cout << "Element is not available in the linked list.";
    }
            return(0);
}
nodeType* buildListForward(){
          
          int num;
          cout << "Enter a list of integers ending with -999."
          << endl;
          cin >> num;
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