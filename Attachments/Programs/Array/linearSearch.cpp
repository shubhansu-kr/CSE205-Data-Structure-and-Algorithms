#include<iostream>
using namespace std;
int search(int arr[], int n, int x){ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
int main (){
    // Dynamic 1D array:
    int *a;
    int n;
    cout<<"Enter number of elements to insert in array:"<<endl;
    cin>>n;
    a=new int[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i=0; i<n; i++){
    	cin>>a[i];
	}
	cout<<"array is:"<<endl;
	for (int i=0; i<n; i++){
    	cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"\n NOW ENTER NUMBER YOU WANT TO SEARCH  ";
	int x;
    cin>>x;    
	int index = search(a, n, x); 
    if (index == -1) 
        cout << "Element is not present in the array"; 
    else
        cout << "Element found at position " << index+1;	
    return 0;  
}
