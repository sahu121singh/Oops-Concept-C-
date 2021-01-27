/*
Write a C++ sorting program using function template.
*/

#include<iostream>
using namespace std;

int t;
template <class temp>
void bubble(temp arr[], int n) {
	for(int i=0; i<n; i++) {
    	for(int j=n-1; i<j; j--) {
        	if(arr[j] < arr[j-1]) {
				t = arr[j];
				arr[j] = arr[j-1];
        		arr[j-1] = t;
			}
    	}
	}
}

int main() {
    int arr1[5] = {1, 5, 4, 7, 20};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    float arr2[5] = {2.3, 4.5, 6.7, 8.2, 3.9};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    char arr3[5] = {'a', 'n', 'm', 'b', 'z'};
    int l = sizeof(arr3)/sizeof(arr3[0]);
    bubble(arr1,n);
    cout<<"AFTER SORTING:\n";
    for(int i=0; i<n; i++) {
    	cout<<arr1[i]<<endl;
	}
	cout<<endl;
    bubble(arr2,m);
    cout<<"AFTER SORTING:\n";
    for(int i=0; i<m; i++) {
    	cout<<arr2[i]<<endl;
	}
	cout<<endl;
	bubble(arr3,l);
    cout<<"AFTER SORTING:\n";
    for(int i=0; i<l; i++) {
    	cout<<arr3[i]<<endl;
	}
	cout<<endl;
    return 0;
}
