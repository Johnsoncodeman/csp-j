//
//  main.cpp
//  哥伦比亚数
//
//  Created by zhongwen wang on 2022/7/22.
//

#include <iostream>
using namespace std;
int d(int b){
    int num=0;
    while(b){
        num+=b%10;
        b/=10;
    }
    return num;
};
bool check(int a){
    for(int i=a;i>=1;i--){
        if(i+d(i)==a){
            return false;
        }
    }
    return true;
};
int main() {
    int n=10;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(check(tmp)){
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
}
