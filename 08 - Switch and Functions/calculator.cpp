#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the First number : " ;
    cin >> a;
    cout << "Enter the Second number : " ;
    cin >> b;
    while(true){

        cout << "Sum : 1" << endl;
        cout << "Difference : 2" << endl;
        cout << "Multiplication : 3" << endl;
        cout << "Division : 4" << endl;
        cout << "Remainder : 5" << endl;
        cout << "Exit : 6" << endl;
        cout << "Which oparation you want to perform (1,2,3,4,5,6) : ";

        cin >> c;

        switch (c){
        case 1: cout << "Sum = " << a+b << endl;
                break;
        case 2: cout << "Difference = " << a-b << endl;
                break;
        case 3: cout << "Multiplication = " << a*b << endl;
                break;
        case 4: cout << "Division = " << float(a/b) << endl;
                break;
        case 5: cout << "Remainder = " << a%b << endl;
                break;
        case 6: exit(0);
        
        default: cout << "Enter valid argument";
                 break;
        }
    }
}