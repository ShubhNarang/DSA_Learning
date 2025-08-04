#include <iostream>
using namespace std;   

int main() {
    
    
    
    
    int n;
    int i = 2;
    cin >> n;
    int not_prime_flag=0;
    while(i<n){
            if ((n%i)==0){
                cout << "Non-Prime";
                not_prime_flag=1;
                break;
            }
            i = i + 1;
        }
    
    if(not_prime_flag == 0){
        cout << "Prime" ;
    }
}