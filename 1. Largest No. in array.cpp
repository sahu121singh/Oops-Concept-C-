// Write a C++ program to find out the largest number among an array of numbers using function.

#include<iostream>
using namespace std;
void compare(int A[], int n);
int main() {
    int n;             // variable hold size of array
    cin>>n;
	int A[n];          // declaration of array
	cout<<"enter array element:"<<endl;
	for(int i = 0; i < n; i++)
	    cin>>A[i];
	compare(A, n);    // sorting array by using function call
	cout<<"sorted array: ";
	for(int i = 0; i < n; i++)
	   cout<<"\t"<<A[i];
	cout<<endl;
	cout<<"largest no. is: "<<A[n-1];
	return 0;
}
void compare(int A[],int n) {
	int i,j,temp;
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	    	if(A[j]>A[j+1]) {
	    		temp=A[j];
	    		A[j]=A[j+1];
	    		A[j+1]=temp;
			}
		}
	}
}
