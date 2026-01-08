#include<iostream>
using namespace std;

int main(){
    int n , temp ,  ans = 0;
    cout << "Enter the number : ";
    cin >> n ;
        for(int i=0 ; n!=0 ; i++){
            temp = n & 1;
            int power = 1;
            for (int j = 0 ; j < i ; j++ ){
                power *= 10;
            }
            ans = (temp * power)+ans;
            n = n>>1;
        }

    cout << ans;

}