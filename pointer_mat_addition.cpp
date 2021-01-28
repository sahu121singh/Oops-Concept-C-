#include <iostream>
#include<conio.h>
#include<new>
using namespace std;

int main()
{
    int **m1,**m2;
    int i,j,x;
    int row,col;
    cout<<"ENTER THE NUMBERS OF ROWS AND COLUMNS FOR THE MATRIX:\n";
    cin>>row>>col;
    m1= new int*[row];
    for(int x=0;x<row;x++)
        m1[x]= new int[col];
    m2= new int*[row];
    for(int x=0;x<row;x++)
        m2[x]= new int[col];
    cout<<"Enter the elements for the matrix A:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"-> Row "<<(i+1)<<", Col "<<(j+1) <<": ";
            cin>>*(*(m1 + i) +j);
        }
    }
    cout<<"Enter the elements for the matrix B:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"-> Row "<<(i+1)<<", Col "<<(j+1) <<": ";
            cin>>*(*(m2+i)+j);
        }
    }
    cout<<"Addition:\n";
    for(i=0;i<row;i++)
    {
        cout<<"\t";
        for(j=0;j<col;j++)
        {
            cout<<m1[i][j]+m2[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Subtraction:\n";
    for(i=0;i<row;i++)
    {
        cout<<"\t";
        for(j=0;j<col;j++)
        {
           cout<<m1[i][j]-m2[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
