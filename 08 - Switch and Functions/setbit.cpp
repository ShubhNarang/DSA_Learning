#include<iostream>
using namespace std;

int setbit(int a){
    int ans=0;
    while(a!=0){
        if((a&1)==1){
            ans++;
        }
        a = a>>1;

    }
    return ans;
}

int main(){
    int a , b;
    cin >> a >> b ; 
    cout << setbit(a)+setbit(b);
}