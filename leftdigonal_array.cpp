#include<iostream>
using namespace std;

int main() {
     int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}

     };

    cout << "\nLeft Diagonal Elements: ";
    for (int i=0; i<3; i++)
        cout << arr[i][i] << " ";

    cout << "\nRight Diagonal Elements: ";
    for (int i=0; i<3; i++)
        cout << arr[i][2 - i] << " ";

   cout << "\n\nX-Cross Diagonal Pattern:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (i == j || (i + j) == 2) {
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";  // two spaces for alignment
            }
        }
        cout << endl;
    }
cout << endl;

    return 0;
}
