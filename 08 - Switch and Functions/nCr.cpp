#include<iostream>
using namespace std;

int factorial(int a){
    int ans = 1;
    for(int i = 1 ; i<=a ; i++ ){
        ans = ans*i;
    }
    return ans;
}

int nCr(int n , int r){
    int a = factorial(n);
    int b = factorial(n-r);
    int c = factorial(r);
    int ncr = a/(b*c);
    return ncr;
}

int main(){
    int n,r;
    cin >> n >> r;
    if(r>n){
        cout << "Invalid arugment";
    }
    else{
        int ncr = nCr(n,r);
        cout << ncr ; 
    }

    return 0;
}