#include<iostream>
using namespace std;

int evenodd(int a){
    if (a%2 == 0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    return 0;
}

int main(){
    int a;
    cin >> a;
    evenodd(a);
    return 0;
}