#include<iostream>
using namespace std;
int main(){
    int rowsize,colsize;
    cout<<"Enter rowsize"<< endl;
    cin>>rowsize;
    cout<<"Enter Colsize"<<endl;
    cin>>colsize;
    int a[rowsize][colsize];
    for (int i=0;i<rowsize;i++)
    {
        for( int j=0;j<colsize;j++){
       cin>>a[i][j];}
    }
    cout<<"Enter original array"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++){
        cout<<a[i][j]<<" ";
    }
   cout <<endl;
    }
     
cout<< "Enter Reverse array"<<endl;
for(int i=rowsize-1;i>=0;i--)
{
    for (int j=colsize-1;j>=0;j--){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}