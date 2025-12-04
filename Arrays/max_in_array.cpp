#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,i,max;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];
    max=arr[0];   // Assume first element is maximum
    for(i=1;i<n;i++)
    if(max<arr[i])   // Compare each element
    max=arr[i];   // Update maximum if bigger
    cout<<"the maximum value is:"<<max<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
  



  
                    
