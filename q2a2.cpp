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
    int max , max1 , max2 ;
     max = max1 = max2 =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max1;
            max1=max;
            max=arr[i];
        }
        else if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
            max2=arr[i];
        
        }
        cout<<" three largest elemnt are : "<<max<<" "<<max1<<" "<<max2;

    }

    