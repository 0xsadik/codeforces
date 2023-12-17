#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int search) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == search) {
            return mid;
        }
        else if (arr[mid] < search) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
} 

int main()
{
    int size, nsearch;
    cin >> size >> nsearch;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    while(nsearch--) {
        int search;
        cin >> search;

        int result = binarySearch(arr, 0, size - 1, search);
        (result == -1) ? cout << "not found\n" : cout << "found\n";
    }
    
    return 0;
}