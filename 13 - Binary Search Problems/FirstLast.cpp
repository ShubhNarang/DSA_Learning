#include <iostream>
using namespace std;

int firstindex(int arr[], int size ,int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
    int ans;
    while(start <= end) {
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;;

    }
    return ans;
}

int lastindex(int arr[], int size ,int key){

    int start = 0;
    int end = size - 1;
    int ans;
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;;

    }
    return ans;
}

int main(){

    int even[17] = {2,4,6,8,8,8,8,8,8,8,8,8,8,8,10,12,14};

    int index = firstindex(even,17,8);
    int last = lastindex(even,17,8);

    cout << "Index of 12 : "<< index << endl;
    cout << "Index of 1 : "<< last;
    return 0;



}