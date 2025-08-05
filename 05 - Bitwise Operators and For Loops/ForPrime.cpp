#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    for (int b=2;b<n;b++){
        if ((n%b)==0){
            cout << "Not prime";
            a=1;
            break;
        }

    }
    if(a==0){
        cout << "Prime";
    }

}