#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for(int i = 0 ; i<size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;


}

int main() {
    int arr[10]={-5,3,8,11,34,-64,32,-7,0,1};

    //whether 1 is present in it or not

    cout << "Enter the element to search for ";
    int key;
    cin >> key;

    bool found = search(arr,10,key);

    if (found) {
        cout << "Key is present " << endl;
    }
    else {
        cout << "Key is absent " << endl;
    }

}