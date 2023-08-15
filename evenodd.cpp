//evenodd
#include <iostream>
using namespace std;

void getdata(int a[]);
void evenodd(int a1[], int even[] , int odd[] , int evncnt , int oddcnt );
int main()
{
    int arr[10],even_main[10],odd_main[10];
    int evencount=0,oddcount=0;
    cout<<"Enter numbers "<<endl;

    getdata(arr);
    evenodd(arr , even_main ,odd_main ,evencount ,oddcount  );

    return 0;
}
    void getdata(int a[])
    {
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }    
    }
void evenodd(int a1[], int even[] , int odd[], int evncnt , int oddcnt)
{
    for(int i=0;i<10;i++)
    {
            if(a1[i]%2==0)
                even[evncnt++]=a1[i];
            else 
                odd[oddcnt++]=a1[i];
    }
    cout<<"The even numbers are: ";
    for(int i=0;i<evncnt;i++)
    {
          cout<<even[i]<<" ";
    }
    cout<<"The odd numbers are: ";
    for(int i=0;i<oddcnt;i++)
    {
        cout<<odd[i]<<" ";
    }
}
