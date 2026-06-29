#include<iostream>
#include<utility>

using namespace std;

int main() {
    pair<string,int> student;

    cout<<"Enter name :";
    getline(cin, student.first);
    cout<<"Enter age : ";
    cin>>student.second;

    cout<<"Name : "<<student.first;
    cout<<"\nAge : "<<student.second;

    return 0;

}