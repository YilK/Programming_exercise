
#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main(){
    int n,x;
    char c;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>c;
            if(c=='P'){
                cin>>x;
                s.push(x);
            }
            if(c=='O'){
                if(s.empty()==false) s.pop();
            }
            if(c=='A'){
                if(s.empty()==true) cout<<"E"<<endl;
                else cout<<s.top()<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}