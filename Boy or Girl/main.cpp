//
//  main.cpp
//  Boy or Girl
//
//  Created by zhongwen wang on 2022/7/30.
//

#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int a=0,c=1;
    for(int i=0;i<str.size();i++){
        a=0;
        for(int j=i;j>=0;j--){
            if(str[j]!=str[i]){
                a++;
            }
        }
        if(a==i){
            c++;
        }
    }
    if(c%2==0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
