#include <iostream>
#include <string>
using namespace std;
int main() {
    string s,s1;
    cin>>s>>s1;
    int n1=s.size();
    int n2=s1.size();
    int count=0,num=-1;
    for(int i=0;i<=n1-n2;i++){
        count=0;
        for(int j=0;j<n2;j++){
//            cout<<i<<' '<<j<<' '<<s[i+j]<<' '<<s1[j]<<endl;
            if(s[i+j]==s1[j] || s[i+j]=='?'){
                count++;
            }
            else{
                break;
            }
        }
        if(count==n2){
            num=i;
        }
    }
    if(num==-1){
        cout<<"UNRESTORABLE"<<endl;
        return 0;
    }
    count=0;
    for(int i=num;i<n2+num;i++){
//        cout<<s[i]<<' '<<s1[count]<<endl;
        s[i]=s1[count];
        count++;
    }
    for(int i=0;i<n1;i++){
        if(s[i]=='?'){
            s[i]='a';
        }
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
