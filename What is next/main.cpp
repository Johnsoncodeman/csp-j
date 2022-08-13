//
//  main.cpp
//  What is next
//
//  Created by zhongwen wang on 2022/7/22.
//

#include <iostream>
using namespace std;
void f(int a,int &num){
    int n=0;
    for(int i=2;i<a;i++){
        if(a%i!=0){
            n++;
        }
    }
    if(n==a-2){
        num++;
        cout<<a<<endl;
    }
}
int main(int argc, const char * argv[]) {
    int n,num=0;
    cin>>n;
    for(int i=0;num==0;n++){
        f(n,num);
    }
    return 0;
}
