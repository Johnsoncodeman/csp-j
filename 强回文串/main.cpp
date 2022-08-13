//
//  main.cpp
//  强回文串
//
//  Created by zhongwen wang on 2022/7/30.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int c=0;
    cin>>s;
    string s1=s.substr(0,(s.size()-1)/2);
    string s2=s.substr(0,(s.size()+1)/2);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(a[i]==b[i]){
            count++;

        }
    }
    if(count==s.size()){
        c++;

    }
    string s1=s.substr(0,(s.size()-1)/2);
    string s2=s.substr(0,(s.size()+1)/2);
    for(int i=0;i<(s.size()-1)/2;i++){
        d[i]=s[i];
    }
    for(int i=(s.size()-1)/2-1;i>=0;i--){
        e[i]=s[i];
    }
    for(int i=0;i<(s.size()-1)/2;i++){
        cout<<d[i]<<' '<<e[i]<<endl;
    }
     count=0;
    for(int i=0;i<(s.size()-1)/2;i++){
        if(d[i]==e[i]){
            count++;

        }
    }
    if(count==(s.size()-1)/2){
        c++;

    }
    char f[s.size()-(s.size()+3)/2-1],g[s.size()-(s.size()+3)/2-1];
    for(int i=0;i<s.size()-(s.size()+3)/2;i++){
        d[i]=s[i];
    }
    for(int i=s.size()-(s.size()+3)/2-1;i>=0;i--){
        e[i]=s[i];
    }
    for(int i=0;i<s.size()-(s.size()+3)/2;i++){
        cout<<f[i]<<' '<<g[i]<<endl;
    }
     count=0;
    for(int i=0;i<s.size()-(s.size()+3)/2;i++){
        if(d[i]==e[i]){
            count++;
 
            }
          }
    if(count==s.size()-(s.size()+3)/2){
        c++;

    }
    if(c==3){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
