#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string s,a;
    int b,c,d,e;
    cin>>b>>s;
    for(int i=0;i<b;i++){
        cin>>c;
        if(c==1){
            cin>>a;
            s+=a;
            cout<<s<<endl;
        }
        else if(c==2){
            cin>>d>>e;
            s=s.substr(d,e);
            cout<<s<<endl;
        }
        else if(c==3){
            cin>>d>>a;
            cout<<s.insert(d,a)<<endl;
        }
        else if(c==4){
            cin>>a;
            if(s.find(a)>s.size()){
                cout<<-1<<endl;
            }
            else
                cout<<s.find(a)<<endl;
        }
    }
    return 0;
}
