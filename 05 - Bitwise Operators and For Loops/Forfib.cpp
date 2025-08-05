#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of the n : ";
    cin >> n;
    int a = 0 , b = 1;
    int c;
    cout << a << endl << b << endl ;
    for (  int f = 1 ; f<=n ; f++){
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;

    }
}