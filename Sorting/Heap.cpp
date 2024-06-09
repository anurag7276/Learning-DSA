#include<iostream>
using namespace std;
void maxheapify(int arr[],int n,int i){
        int largest=i;
        int l=(2*i);
        int r=(2*i)+1;
        while(l<n && arr[l]>arr[largest]){
                largest=l;
        }
         while(r<n && arr[r]>arr[largest]){
                largest=r;
        }
        if(largest!=i){
                swap(arr[i],arr[largest]);
                maxheapify(arr,n,largest);
        }
}
void heapsort(int arr[],int n){
        for (int i = n/2;i>=1;i--){
                maxheapify(arr,n,i);
        }

        for(int i=n;i>1;i--){
                swap(arr[1],arr[i]);
                maxheapify(arr,i,1);

        }
}
int main(){
        int arr[100];
        int n;
        cout<<"enter no of element";
        cin>>n;
         cout<<"enter element";
         for (int i=1;i<=n;i++){
                cin>>arr[i];
         }
       heapsort(arr,n);
       for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
       }

}

Heap Sort takes worst-case complexity of O(n*log(n)) where n denotes the total elements of the array 
that are placed at their respective positions while the log(n) denotes the heapify process.
As there is no extra space used, the space complexity remains to be O(1) i.e constant time
