#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {342,325,4,5, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}