//
//  main.cpp
//  闰年展示
//
//  Created by zhongwen wang on 2022/7/5.
//

#include <iostream>
using namespace std;
void f(int a,int b){
    int c=0;
    for(int i=a;i<=b;i++){
        if(i%4==0 && i%100!=0){
            c++;
        }
        if(i%400==0){
            c++;
        }
    }
    cout<<c<<endl;
    for(int i=a;i<=b;i++){
        if(i%4==0 && i%100!=0){
            cout<<i<<' ';
        }
        if(i%400==0){
            cout<<i<<' ';
        }
    }
};
int main(int argc, const char * argv[]) {
    int x,y;
    cin>>x>>y;
    f(x,y);
    return 0;
}
