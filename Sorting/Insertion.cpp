#include<iostream>
using namespace std;
int main(){
        
        int n,arr[100];
        cout<<"enter no of element";
        cin>>n;
         cout<<"enter element";
         for (int i=0;i<n;i++){
                cin>>arr[i];
         }
          
          for(int i=1;i<n;i++){
                int temp= arr[i];
                int j=i-1;
                for(;j>=0;j--){
                        if (temp<arr[j]){
                                arr[j+1]=arr[j];
                        }
                        else{
                                break;
                        }
                }
                arr[j+1]=temp;
          }
        for(int i=0; i<n;i++){
            cout<<arr[i]<<' ';

        }

}
Best Case: O(N)
Average Case: O(N2)
Worst Case: O(N2)
The auxiliary space complexity of Insertion Sort is O(1)
