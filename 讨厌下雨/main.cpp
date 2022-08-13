//
//  main.cpp
//  讨厌下雨
//
//  Created by zhongwen wang on 2022/7/12.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0,num=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(num<count){
                num=count;
            }
            count=0;
        }
        else
            count++;
        
    }
    cout<<num<<endl;
    return 0;
}
