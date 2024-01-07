#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int sume = 0;
    int sumo = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0) sume+=arr[i];
        else{
            sumo+=arr[i];
        }
    }
    if(sumo>sume) cout<<sumo-sume<<endl;
    else{
        cout<<sume-sumo<<endl;
    }

    

}