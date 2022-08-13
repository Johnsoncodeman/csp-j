//
//  main.cpp
//  做题最多的同学
//
//  Created by zhongwen wang on 2022/7/12.
//

#include <iostream>
using namespace std;
int main() {
    int n,a;
    cin>>n;
    int count=0,num=1;
    cin>>a;
    count=a;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a>count){
            num=i+1;
            count=a;
        }
    }
    cout<<num<<endl;
}
