/*
Write a program using dynamic memory allocation to perform 2×2 matrix addition and subtraction.
*/

#include <iostream>
using namespace std;

class addition {
    public:
    static double** addm(double** m1,double** m2) {
        double** arr = new double*[2];
        for(int row=0;row<2;row++) {
            arr[row]=new double[2];
            for(int col=0;col<2;col++) {
            arr[row][col]=m1[row][col]+m2[row][col];
            }
        }
        return arr;
    }
};

class subtraction {
    public:
    static double** subt(double** m1,double** m2) {
        double** arr = new double*[2];
        for(int row=0;row<2;row++) {
            arr[row]=new double[2];
            for(int col=0;col<2;col++) {
            arr[row][col]=m1[row][col]-m2[row][col];
            }
        }
        return arr;
    }
};


int main() {
    int row = 2, column = 2;
    double** m1;
    double** m2;
    double** result1,**result2;
    m1 = new double*[row];
    m2 = new double*[row];
    cout<<"enter first matrix";
    for(int i=0;i<row;i++) {
        m1[i]=new double[column];
        for(int j=0;j<column;j++) {
            cin>>m1[i][j];
        }
    }
    cout<<"enter second matrix";
    for(int i=0;i<row;i++) {
        m2[i]=new double[column];
        for(int j=0;j<column;j++) {
            cin>>m2[i][j];
        }
    }

    result1 = addition::addm(m1,m2);
    cout<<"addition is"<<endl;
    for(int i=0;i<row;i++) {
        cout<<"|";
        for(int j=0;j<column;j++) {
            cout<<result1[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
    
    result2=subtraction::subt(m1,m2);
    cout<<"subtraction is"<<endl;
    for(int i=0;i<row;i++) {
        cout<<"|";
        for(int j=0;j<column;j++) {
            cout<<result2[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }

    return 0;
}
