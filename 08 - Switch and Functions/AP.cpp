#include<iostream>
using namespace std;

int Ap(int n){
    int nth = (3*n+7);
    return nth;
}
int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "The nth term is " << Ap(n);

}
