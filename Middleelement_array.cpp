#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    /*cout<<"Enter 3*3 matrix element:\n";
    for (int i=0;i<3;i++)
    for (int j=0;j<3;j++)
    cin>>arr[i] [j];*/

    cout<<"middle element:"<<arr[1][1]<<endl;
 
    return 0;
}