#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of the n : ";
    cin >> n;
    int sum = 0;
    for (int count = 1; count<=n ; count++){
        sum+=count;
    }
    cout << "Sum : " << sum << endl;
}