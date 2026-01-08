#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n , temp ,  ans = 0;
    cout << "Enter the number : ";
    cin >> n ;
        for(int i=0 ; n!=0 ; i++){
            temp = n % 10;
            if(temp==1){
                ans=ans+(pow(2,i)*temp);
            }
            n = n/10;
        }
        cout << ans;
}
