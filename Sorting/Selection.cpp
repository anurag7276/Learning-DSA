#include<iostream>
using namespace std;
int main(){
        int n, arr[100];
        cout<<"enter no. of element";
        cin>>n;
        cout<<"enter  element";
        for (int i=0;i<n;i++){
                cin>>arr[i];

        }

        for(int i=0;i<n-1;i++){
               int  min=i;
               for(int j=i+1;j<n;j++){
                 if(arr[i]>arr[j]){
                        min=j;

                 }
               }
            swap(arr[i],arr[min]);
        }

        for(int i=0; i<n;i++){
            cout<<arr[i]<<' ';

        } 

}

The Selection sort algorithm has a time complexity of O(n^2) and a space complexity of O(1) 
since it does not require any additional memory space apart from a temporary variable used for swapping.
