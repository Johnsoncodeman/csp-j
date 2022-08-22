//
//  main.cpp
//  Paper Cutting
//
//  Created by 王中文 on 2022/8/17.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int n;
    cin>>n;
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int a1[n][26];
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            a1[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            for(int k=0;k<26;k++){
                if(a[k]==s[j]){
                    a1[i][k]++;
                    break;
                }
            }
        }
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<26;j++){
//            cout<<a1[i][j]<<' ';
//        }
//        cout<<endl;
//    }
    for(int m=0;m<n;m++){
        for(int i=0;i<26;i++){
            for(int j=1;j<n;j++){
                if(a1[j][i]<a1[j-1][i]){
                    int tmp;
                    tmp=a1[j-1][i];
                    a1[j-1][i]=a1[j][i];
                    a1[j][i]=tmp;
                }
            }
        }
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<26;j++){
//            cout<<a1[i][j]<<' ';
//        }
//        cout<<endl;
//    }
    for(int i=0;i<26;i++){
        for(int j=0;j<a1[0][i];j++){
            cout<<a[i];
        }
    }
    cout<<endl;
    return 0;
}
