#include<iostream>
using namespace std;
int main(){
      int n,arr[100];
    

        cout<<"element no.";
        cin>>n;
        
        cout<<"enter the element";
        for(int i=0;i<n;i++)
        cin>>arr[i];

        for (int i= 1; i<n;i++){
                for(int j=0;j<n-i;j++){
                        if(arr[j]>arr[j+1]){
                                swap(arr[j],arr[j+1]);
                        }
                }
        }

        for(int i=0; i<n;i++){
            cout<<arr[i]<<' ';

        }
       
}

The bubble sort algorithm is a reliable sorting algorithm. This algorithm has a worst-case time complexity of O(n2). 
The bubble sort has a space complexity of O(1). The number of swaps in bubble sort equals the number of inversion pairs in the given array
