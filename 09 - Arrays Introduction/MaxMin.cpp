#include<iostream>
#include <algorithm>  // for max
#include <climits>
using namespace std;

void Maxmin(int arr1[], int size) {
    int max1=INT_MIN , min=INT_MAX;
    for(int i = 0; i < size ; i++){
        max1 = max(max1 , arr1[i]);
        if(arr1[i]<min){
            min = arr1[i];
        }
    }
    cout << max1 <<endl << min ;

}

int main(){

    int arr1[10] = {56,5,8,6,21,5,93,5,8,89};
    int size = sizeof(arr1)/sizeof(int);
    Maxmin(arr1,size);
    return 0;


}