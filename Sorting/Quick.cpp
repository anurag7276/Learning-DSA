#include<iostream>
using namespace std;
int partition (int arr[],int start,int end){
        int pos=start;
        for(int i=start ;i<=end;i++){
                if (arr[i]<=arr[end]){
                        swap(arr[i],arr[pos]);
                        pos++;

                }
        }
        return pos-1;
}
void quicksort (int arr[],int start,int end){
  if(start>=end)
  return;
  int pivot=partition(arr,start,end);
  quicksort(arr,start,pivot-1);
  quicksort(arr,pivot+1,end);

}
int main(){
        int n,arr[100];
        cout<<"enter no of element";
        cin>>n;
         cout<<"enter element";
         for (int i=0;i<n;i++){
                cin>>arr[i];
         }
       quicksort(arr,0,n-1) ;
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }

}

Variation	Time Complexity	  Space Complexity
Best Case	O(n log n)	  O(log n)
Average Case	O(n log n)	  O(log n)
Worst Case	O(n^2)	          O(n)
