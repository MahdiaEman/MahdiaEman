#include <iostream>
using namespace std;
int main()
{
    int a[10][10],transpose[10][10];
    int row,col;
    cout<<"Enter row and column of matrix"<<endl;
    cin>>row>>col;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter elements a "<<i+1<<" "<<j+1<<"  :";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"matrix is  "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < row; ++i)
    {
         for (int j = 0; j < col; ++j)
         {
             transpose[j][i] = a[i][j];
         }
    }

    cout<<"transpose of matrix is"<<endl;
        for(int i=0 ; i<col ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            cout<<transpose[i][j];
        }
        cout<<endl;
    }
    return 0;
}