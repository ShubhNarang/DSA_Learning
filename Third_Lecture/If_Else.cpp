#include<iostream>
using namespace std;

int main() {
/*  
    int a;
    cin >> a ;
    //  cout << "value of n : " << n <<endl;

    if (a>0) {
        cout << a << " is a positive number" <<endl;
    }
    else {
        cout << a << " is a negative number" <<endl;
    }
*/  
//  a = cin.get();
/*   int a,b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
   
    if (a>b){
        cout << a << " is greater than " << b << endl;
    }
    else if (a==b){
        cout << a << " is Equal to " << b << endl;
    }
    else{
        cout << b << " is greater than " << a << endl;
    }
*/
    // cout << "Value of a is " << a;


    // int a;
    // cout << "Enter the int a : ";
    // cin >> a;
    // if (a>0){
    //     cout << "a is postive" << endl ;
    // }
    // else {
    //     if (a<0){
    //         cout << "a is negative" << endl;
    //     }
    //     else if(){

    //     }
    //     else{
    //         cout << "a is 0" << endl;
    //     }
    // int a = 9;
    // if(a = 9) {
    // cout<< "NINEY";
    // }
    // if(a > 0){
    // cout<<"POSITIVE" ;
    // }
    // else{
    // cout<<"NEGATIVE" ;
            
    //     }
    /*
    int a = 24;
    if(a > 20){
        cout<< "Love ";
    }
    else if(a == 24){
        cout<< "Lovely";
    }
    else{
    cout<<"babber";
    }
*/

    // int a = 2;
    // int b = a+1;
    // if ( (a=3)==b) {
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    // char a;
    // cout << "Enter the value of a : " ;
    // cin >> a;
    // cout << int(a);

    char a;
    cout << "Enter the value of a : ";
    cin >> a;
    int ch = a;
    if (ch>97 && ch < 122){
        cout << "Its lower case";
    }
    else if (ch>65 && ch < 90){
        cout << "Its Upper case";
    }
    else if (ch>48 && ch < 57){
        cout << "Its a Number";
    }
    else{
        cout << "Enter A valid arument";
    }


}
