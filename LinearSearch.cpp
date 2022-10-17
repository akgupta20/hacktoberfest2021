#include<bits/stdc++.h>
using namespace std;
void linear_search(int a[], int size, int key)
{
    for (int i = 0;i <size;i++)
        if (a[i] == key)
        {
            cout << "Element found at position " << i + 1;
            return;
        }
    cout << "Element not found";
}

int main() {
    int n;
    cin >> n;
    int arr[n],key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    cout << "Enter Key element : ";
    cin >> key;
    linear_search(arr, n, key);

 /*
        {
         Best case Time complexity  : O(1) 
         Worst case Time complexity : O(n)

         Auxiliary space complexity : O(1)

        }
 */
    
    return 0;
}