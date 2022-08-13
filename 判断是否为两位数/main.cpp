//
//  main.cpp
//  判断是否为两位数
//
//  Created by zhongwen wang on 2022/7/5.
//

#include <iostream>
using namespace std;
void f(int x){
    cin>>x;
    if(x>=10 && x<=99){
        cout<<"1"<<endl;
    }
    else
        cout<<"0"<<endl;
};
int main(int argc, const char * argv[]) {
    int a;
    f(a);
    return 0;
}
