#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,i,min;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];
    min=arr[0];       // Assume first is minimum
    for(i=1;i<n;i++)
    if(min>arr[i])      // Compare and update
    min=arr[i];
    cout<<"the minimum value is:"<<min<<endl;
    cin.ignore();
    cin.get();
    return 0;
}


