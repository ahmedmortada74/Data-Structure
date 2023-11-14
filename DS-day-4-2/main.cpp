#include <iostream>


using namespace std;

int linSearch(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}


int main(void)
{
    int arr[] = { 22 , 35 , 44 , 95 , 23 ,29 , 14 , 25 ,13 };
    int x = 22;
    int N = sizeof(arr)/ sizeof(arr[0]);


    int result = linSearch(arr, N, x);

    if(result == -1){
        cout <<endl<< "Element isn't in array " ;
    }
     else{
             cout << "Element at index \t" << result;

     }

    return 0;
}
