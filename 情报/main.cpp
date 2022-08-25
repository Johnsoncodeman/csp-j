//
//  main.cpp
//  情报
//
//  Created by 王中文 on 2022/8/14.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string s,s1,t;
    cin>>s>>s1>>t;
    int a[26]={0},b[26]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]-'A']++;
    }
    for(int i=0;i<s1.size();i++){
        b[s1[i]-'A']++;
    }
    for(int i=0;i<s.size();i++){
        for(int j=1;j<26;j++){
            if(a[j]<a[j-1]){
                int tmp;
                tmp=a[j-1];
                a[j-1]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0;i<s1.size();i++){
        for(int j=1;j<26;j++){
            if(b[j]<b[j-1]){
                int tmp;
                tmp=b[j-1];
                b[j-1]=b[j];
                b[j]=tmp;
            }
        }
    }
//    for(int i=0;i<26;i++){
//        cout<<a[i]<<' ';
//    }
//    cout<<endl;
//    for(int i=0;i<26;i++){
//        cout<<b[i]<<' ';
//    }
//    cout<<endl;
    for(int i=0;i<26;i++){
        if(a[i]!=b[i] || a[i]==0 || b[i]==0){
            cout<<"Failed"<<endl;
            return 0;
        }
    }
    for(int i=0;i<t.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[j]==t[i]){
                cout<<s1[j];
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}
