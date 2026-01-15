#include<iostream>
using namespace std;

void Swapalternative(int arr[],int size){
    int temp;
    for(int i = 0; i < size-1 ; i += 2){
        swap(arr[i], arr[i+1]);
    }
}



void print(int arr[],int size){

    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ;
    }

}

int main(){

    int arr[7] = {2,3,4,5,6,9,7};
    Swapalternative(arr, 7);
    print(arr, 7);

}

