#include<iostream>
using namespace std;

int main(){
    int arr[30],key,n,i,count=0;
    bool flag=true;
    cout<<"Enter how many elements"<<endl;
    cin>>n;
    cout<<"Enter an array"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter key value"<<endl;
    cin>>key;
    for (i=0;i<n;i++)
    if (key==arr[i])
    {
    count=count+1;
    flag=false;
    }
    if (flag)
    cout<<"key value "<<key<<" is not present"<<endl;
    else
    cout<<"Frequency of key is:"<<count<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
   
