#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<endl;
    int x;
    cout<<"enter x : ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<"number greater than x: "<<count;




}
