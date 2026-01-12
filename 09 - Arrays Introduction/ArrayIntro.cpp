#include<iostream>
#include <iterator>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i < size;i++){
        cout << arr[i] << endl;
    }
}
int main(){
    int n = 10;
    int arr1[10]={1,2,3,4,5,6,7,8,9,11};
    int z = sizeof(arr1)/sizeof(int);
    printArray(arr1,z);
    cout << "Everything is fine" <<endl;
    return 0;


}