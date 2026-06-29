#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main () {
    vector<pair<string,int>>students;

    students.push_back({"Gungun",20});
    students.push_back({"Rahul",22});
    students.push_back({"Priya",19}); 

    for(int i=0;i<students.size();i++) {
        cout<<"Name : "<<students[i].first<<endl;
        cout<<"Age : "<<students[i].second<<endl;
    }

}