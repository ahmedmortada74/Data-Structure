#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - 1) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] < x)
            left = mid + 1;


        else
            right = mid - 1;
    }


    return -1;
}


int main(void)
{
    int arr[] = { 5, 7, 8, 10, 20 };
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
   int result = binarySearch(arr, 0, n - 1, x);


   if(result == -1){
        cout << "Element isn't in array";
   }
   else{
         cout << "Element is at index " << result;

   }
    return 0;
}




