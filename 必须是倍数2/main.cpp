//
//  main.cpp
//  必须是倍数2
//
//  Created by zhongwen wang on 2022/7/14.
//

#include <iostream>
using namespace std;
int f(int a,int b){
    for(int i=1;i<=b;i++){
        if(a*i%b==0 && a*i>=b){
            cout<<a*i<<endl;
            break;
        }
    }
    return 0;
};
int main(int argc, const char * argv[]) {
    int a,b;
    cin>>a>>b;
    f(a,b);
    return 0;
}
