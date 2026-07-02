#include<iostream>
#include<stack>

using namespace std;

int main () {
    stack<int>st;
    int n,x;
    cout<<"Enter the size of the stack : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : "<<endl;
    for(int i=0;i<n;i++) {
        cin>>x;
        st.push(x);
    }
    
    stack<int>temp = st;
    while(!temp.empty()) {
        cout<<temp.top()<<" ";
        temp.pop();
    }
}