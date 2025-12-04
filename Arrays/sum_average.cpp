#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,i,sum=0;
    double avg;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;        // Input number of elements in array
    cout<<"enter "<<n<<" elements"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];       // Taking input for all array elements
    for(i=0;i<n;i++)
    sum=sum+arr[i];       // Calculating the total sum of elements
    avg=sum/n;         // Calculating average
    cout<<"Sum is:"<<sum<<endl;         // Displaying the results
    cout<<"average is:"<<avg<<endl;
    cin.ignore();
    cin.get();
    return 0;
}










    
                    
