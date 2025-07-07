#include<iostream>
using namespace std;
int main(){
    int a [3][3]={
        
      {1,2,3},
      {4,5,6},
      {7,8,9}
    };
    for (int i=0;i<3;i++)
    {
        int row_addition=0;
        for(int j=0;j<3;j++)
        {
            row_addition=row_addition+a[i][j];
        }
        cout<<"Addition=" <<row_addition<<endl;
    }
}
