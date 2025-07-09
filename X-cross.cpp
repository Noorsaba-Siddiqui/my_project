#include<iostream>
using namespace std;
int main(){

    int rowsize,colsize;
    cout<<"Enter rowsize and colsize";
    cin>>rowsize>>colsize;
    int a[rowsize][colsize];
    for(int i=0;i<rowsize;i++) //row
    {
        for (int j=0;j<colsize;j++)//col
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter original array:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Left diagonal element:"<<endl;{
    for(int i=0;i<rowsize;i++)
    {
        cout<<a[i][i]<<" ";
    }
    cout<<endl;
}

    cout<<"Right diagonal Element:"<<endl;
     for(int i=0;i<rowsize;i++)
    {
        cout<<a[i][2-i]<<" ";
    }
    cout<<endl;
}