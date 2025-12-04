#include<iostream>
using namespace std;

int main(){
    int arr[30],key,n,i,count=0;
    bool flag=true;
    cout<<"Enter how many elements"<<endl;
    cin>>n;        // Input number of elements
    cout<<"Enter an array"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];        // Taking array elements input
    cout<<"Enter key value"<<endl;
    cin>>key;     // Input the key value to search its frequency
    for (i=0;i<n;i++)
    if (key==arr[i])   // Searching for key and counting occurrences
    {
    count=count+1;
    flag=false;
    }
    if (flag)
    cout<<"key value "<<key<<" is not present"<<endl;   // If key is not found
    else
    cout<<"Frequency of key is:"<<count<<endl;   // If key is found, display frequency
    cin.ignore();
    cin.get();
    return 0;
}












   
