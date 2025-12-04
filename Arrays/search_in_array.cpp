#include<iostream>
using namespace std;

int main(){
    int arr[30],key,n,i;
    bool flag=true;
    cout<<"Enter how many elements"<<endl;
    cin>>n;        // Input number of elements
    cout<<"Enter an array"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];      // Taking array elements input
    cout<<"Enter key value"<<endl;
    cin>>key;       // Input the key value to search
    for (i=0;i<n;i++)
    if(key==arr[i])            // Compare key with each element
    {               
        cout<<"key value "<<arr[i]<<" is present";     
        flag=false;       // If found, print and stop searching
        break;
    }
    if (flag)
    cout<<"key value "<<key<<" is not present"<<endl;    // If not found after loop, print not present
    cin.ignore();
    cin.get();
    return 0;
}






