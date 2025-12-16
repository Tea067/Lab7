#include <iostream>
#include <string>
using namespace std; 

int main(){
    int n;
    string x;
    string m;
    string d;
    string g;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????:";
    getline(cin,x);
    cout << " Fahsai: Wow!!! " << x << " is a really cool name." << endl << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl << x << ":";
    cin >> n;
    int a = n/10000000;
    cin.ignore();
    cout << " Fahsai: I think you may be GEAR " << a-12 << ". I have a free movie ticket for you." << endl << "Fahsai: Let's go to the cinema together!!!" << endl << "Fahsai: What movie do you want to watch?" << endl << x << ":";
    getline(cin,m);
    cout << " Fahsai: So....which day are you free to go with me?" << endl << x << ":";
    getline(cin,d);
    cout << " Fahsai: "<< d << "....that is OK!!! I'm looking forward to watching " << m << " with you." << endl << x << ":";
    cin >> g;
    cout << " Fahsai: 555+ see you " << d << ". Bye Bye \\(^ ^)/";
    
    }