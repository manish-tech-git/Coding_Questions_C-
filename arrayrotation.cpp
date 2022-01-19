#include<iostream>
using namespace std;
int main()
{

int n;
cin >> n;

int a[10][10];

int b[10][10];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> a[i][j];
    }
    
}
cout <<"Original Matrix: "<<endl;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout <<  a[i][j] <<" ";
    }
    cout <<endl;
    
}

for (int i = 0; i<n; i++){
    for (int j = 0; j<n; j++){

        b[j][i] = a[i][j];

    }
}

// for (int i = 0; i<n; i++){
//     for (int j = 0; j<n; j++){

//         cout << b[i][j] <<" ";

//     }
//     cout << endl;
// }


cout << endl;
 

for (int i = 0; i < n; i++){
    int li = 0;
    int ri = n-1;

    while(li < ri){
        int temp = b[i][li];
        b[i][li] = b[i][ri];
        b[i][ri] = temp;
        li++;
        ri--;
    }
}

cout <<"Rotation of Matrix 90 degree of matrix:"<<endl;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout <<  b[i][j] <<" ";
    }
    cout << endl;
}

return 0;
}