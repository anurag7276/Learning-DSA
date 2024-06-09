#include<iostream>
using namespace std;
int main(){
        
        int n,target,arr[100],a=0;
        cout<<"enter no of element";
        cin>>n;
         
           cout<<"enter target element";
        cin>>target;
         cout<<"enter element";

         for (int i=0;i<n;i++){
                cin>>arr[i];
         }

         for (int i=0;i<n;i++){
                if(arr[i]==target){
                        cout<<i;
                }
         }


}

The time complexity of the Linear Search algorithm is O(n), where n is the number of elements in the array. 
The space complexity is O(1) as it requires a constant amount of extra space regardless of the input size


// 



// C++ code to linearly search x in arr[].
 
// #include <bits/stdc++.h>
// using namespace std;
 
// int search(int arr[], int N, int x)
// {
//     for (int i = 0; i < N; i++)
//         if (arr[i] == x)
//             return i;
//     return -1;
// }
 
// // Driver code
// int main(void)
// {
//     int arr[] = { 2, 3, 4, 10, 40 };
//     int x = 10;
//     int N = sizeof(arr) / sizeof(arr[0]);
 
//     // Function call
//     int result = search(arr, N, x);
//     (result == -1)
//         ? cout << "Element is not present in array"
//         : cout << "Element is present at index " << result;
//     return 0;
// }
