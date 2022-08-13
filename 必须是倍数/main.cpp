//
//  main.cpp
//  必须是倍数
//
//  Created by zhongwen wang on 2022/7/13.
//

#include <iostream>
using namespace std;
int gcd(int x,int y){
    while(y!=0){
        int k=x%y;
        x=y;
        y=k;
    }
    return x;
};
int main(int argc, const char * argv[]) {
    int x,y;
    cin>>x>>y;
    cout<<x/gcd(x,y)*y<<endl;
    return 0;
}
