#include<iostream>
using namespace std;

int main(){
    int arr[30],key,n,i;
    bool flag=true;
    cout<<"Enter how many elements"<<endl;
    cin>>n;
    cout<<"Enter an array"<<endl;
    for (i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter key value"<<endl;
    cin>>key;
    for (i=0;i<n;i++)
    if(key==arr[i]){
                    cout<<"key value "<<arr[i]<<" is present";
                    flag=false;
                    break;}
    if (flag)
    cout<<"key value "<<key<<" is not present"<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
