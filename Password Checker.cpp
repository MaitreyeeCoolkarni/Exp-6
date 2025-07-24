#include <iostream>
using namespace std;

int main(){
    int password = 123;
    int user_password;
    cout << "Enter the password : ";
    cin >> user_password;
    while(password > 0){
         if(password != user_password){
             cout << "Incorrect Password !" << endl;
             cout << "Enter the password : ";
             cin >> user_password;
         }
         else{
             cout << "system has been unlocked !";
             break;
         }
    }
    return 0;
}

//Enter the password : 123
system has been unlocked !
