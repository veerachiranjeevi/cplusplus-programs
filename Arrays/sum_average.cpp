#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,i,sum=0;
    double avg;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    sum=sum+arr[i];
    avg=sum/n;
    cout<<"Sum is:"<<sum<<endl;
    cout<<"average is:"<<avg<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

    
                    
