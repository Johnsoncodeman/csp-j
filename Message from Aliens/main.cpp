//
//  main.cpp
//  Message from Aliens
//
//  Created by 王中文 on 2022/8/17.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string s,t="";
    string str="";
    cin>>s;
    int a=s.size();
    for(int i=0;i<a;i++){
        if(s[i]=='R'){
            reverse(t.begin(), t.end());
        }
        else
            t+=s[i];
        for(int j=1;j<t.size();j++){
            if(t[j]==t[j-1]){
                t.erase(j,1);
                t.erase(j-1,1);
            }
        }
//        for(int k=0;k<t.size();k++){
//            cout<<t[k];
//        }
//        cout<<endl;
    }
    int b=t.size();
    for(int i=0;i<b;i++){
        if(t[i]!='0'){
            cout<<t[i];
        }
    }
    cout<<endl;
    return 0;
}
