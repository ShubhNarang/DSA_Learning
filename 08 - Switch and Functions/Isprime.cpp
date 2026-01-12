#include<iostream>
using namespace std;

// 0 = Non Prime
// 1 = Prime
bool isPrime(int a){

    for(int i = 2; i < a ; i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    cin >> a;
    if(isPrime(a)){
        cout << "Prime ";
    }
    else{
        cout << "Not Prime";
    }

}