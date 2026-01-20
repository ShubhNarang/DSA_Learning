#include <iostream>
using namespace std;

int binarysearch(int arr[], int size ,int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
    while(start <= end) {
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;;

    }
    return -1;
}

int main(){

    int even[7] = {2,4,6,8,10,12,14};
    int odd[6] = {1,3,5,7,9,11};

    int index = binarysearch(even,7,12);
    int index1 = binarysearch(odd,6,3);

    cout << "Index of 12 : "<< index << endl;
    cout << "Index of 1 : "<< index1;
    return 0;



}