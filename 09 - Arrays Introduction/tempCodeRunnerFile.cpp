#include<iostream>
using namespace std;

void Maxmin(int arr1[], int size) {
    int max=arr1[0] , min=arr1[0];
    for(int i = 0; i < size ; i++){
        if(arr1[i]<min){
            min = arr1[i];
        }
        if(arr1[i]>max){
            max = arr1[i];
        }
        }
    cout << max <<endl << min ;

}

int main(){

    int arr1[10] = {56,5,8,6,21,5,93,5,8,89};
    int size = sizeof(arr1)/sizeof(int);
    Maxmin(arr1,size);
    return 0;


}