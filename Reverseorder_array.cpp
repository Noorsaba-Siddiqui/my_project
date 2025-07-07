#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
  
       cout << "Matrix element in reverse order\n";
        for (int i=2;i>=0;i--){
            for (int j=2;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}

