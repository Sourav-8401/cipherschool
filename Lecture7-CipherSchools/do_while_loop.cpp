#include <iostream>
using namespace std;
int main(){
    int password;
    do{
        cout<<"Enter the password: ";
        cin>>password;
    }while (password<999999);
}