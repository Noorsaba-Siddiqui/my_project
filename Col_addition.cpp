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
        int col_addition=0;
        for(int j=0;j<3;j++)
        {
            col_addition=col_addition+a[j][i];
        }
        cout<<"col no"<<i<<" addition= "<<col_addition<<endl;
    }
}
    
    
