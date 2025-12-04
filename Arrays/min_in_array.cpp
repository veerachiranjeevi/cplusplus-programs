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
    min=arr[0];
    for(i=1;i<n;i++)
    if(min>arr[i])
    min=arr[i];
    cout<<"the minimum value is:"<<min<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
