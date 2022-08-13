//
//  main.cpp
//  判断奇偶
//
//  Created by zhongwen wang on 2022/7/21.
//

#include <iostream>
using namespace std;
void check(int a,int b){
    if((a+b)%2==0){
        cout<<"Even"<<endl;
    }
    else
        cout<<"Odd"<<endl;
}
  
int main(){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        check(a,b);
    }
    return 0;
}
