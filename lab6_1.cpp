#include<iostream>
using namespace std;

int main(){
    
    int even =0, odd = 0;
    int a;
    cout << "Enter an integer: ";
    cin >> a;
        while(a != 0){

        if(a%2 == 0){
            even++ ;
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
            cin >> a; 
        }    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd ;
    return 0;
}
