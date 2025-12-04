#include<iostream>
using namespace std;

int main()
{
    int i,arr[5];
    cout<<"Enter five values"<<endl;
    for(i=0;i<5;i++)
    cin>>arr[i];
    cout<<"your entered array is "<<endl;
    for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cin.ignore();
    cin.get();
    return 0;
}
    
