#include<iostream>
using namespace std;

int main() {
    int arr[6] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(int i = 0; i < n; i ++) {
        cout<<arr[i]<<' ';
    }
    return 0;
}

