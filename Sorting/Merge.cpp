#include<iostream>
using namespace std;
int merge(int arr[], int start, int mid, int end)
{
        int left = start;
        int right = mid + 1;
        int index=0;
        int temp[100];

        while (left <= mid && right <= end)
        {
                if (arr[left] <= arr[right])
                {
                        temp[index] = arr[left];
                        left++, index++;
                }

                else
                {
                        temp[index] = arr[right];
                        index++, right++;
                }
        }
        while(left<=mid){
                temp[index]=arr[left];
                 left++, index++;
        }
         
         while(right<=end){
                  temp[index]=arr[right];
                 right++, index++;
         }

         //copy temp into arr updation 
         index=0;
         for (int i=start;i<=end;i++){
                arr[i]=temp[index];
                index++;
         }

}

void mergesort(int arr[], int start, int end)
{      if (start==end){
        return;
}
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
}
int main()
{
        int n, arr[100];
        cout << "enter no of element";
        cin >> n;
        cout << "enter element";
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }

        mergesort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}

The Time Complexity of Merge Sort is O(n log n) in both the average and worst cases. 
The space complexity of Merge sort is O(n).
