#include<iostream>
using namespace std;

int Fibbonaci(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int a = 0 , b = 1 , count = 2 , c = 0;
    while(count != n){
        c = a+b;
        a=b;
        b=c;
        count++;

    }
    return c;
}  

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "The term is " << Fibbonaci(n);
}