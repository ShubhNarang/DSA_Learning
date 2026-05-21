#include<iostream>
using namespace std;

int main(){
    int a = 1373; 

            cout << "Number of 100 notes are " << a/100 << endl;
            a = a%100;

            cout << "Number of 50 notes are " << a/50 << endl;
            a = a%50;

            cout << "Number of 10 notes are " << a/10 << endl;
            a = a%10;

            cout << "Number of 1 notes are " << a/1 << endl;
            a = a%1;
    
}