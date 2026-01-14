#include<iostream>
using namespace std;

void update(int arr[],int size){

    cout<< "Inside the Fucntion " << endl;

    //Upadating the element
    arr[0] = 1120;
    //printing the array
    for(int i = 0; i < 3 ; i++){
        cout << arr[i] << " ";
    }

    cout <<endl;

    cout << "Going back to main fucntion" << endl;


}

int main(){

    int arr[3] = {1,2,3};

    update(arr,3);

    for(int i = 0; i < 3 ; i++){
        cout << arr[i] << " ";
    }

    cout<< endl;

    return 0 ;

}