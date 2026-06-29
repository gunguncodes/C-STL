#include<iostream>
#include<string>

using namespace std;

int main () {
    string name;
    cout<<"Enter name : ";
    getline(cin, name);

    cout<<"Original : "<<name<<endl;

    cout<<"Length : "<<name.length()<<endl;

    cout<<"First : "<<name.front()<<endl;

    cout<<"Last : "<<name.back()<<endl;

    name.push_back('!');
    cout<<"After push_back : "<<name<<endl;

    name.pop_back();
    cout<<"After pop_back : "<<name;

    return 0;


}
