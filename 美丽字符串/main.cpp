//
//  main.cpp
//  美丽字符串
//
//  Created by zhongwen wang on 2022/7/30.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','v','x','y','z','w','t','o'};
    int b[26]={0};
    for(int i=0;i<s.size();i++){
        for(int j=0;j<26;j++){
            if(s[i]==a[j]){
                b[j]++;
            }
        }
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(b[i]%2==0 || b[i]==0){
            c++;
        }
    }
    if(c==26){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
