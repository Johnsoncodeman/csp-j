//
//  main.cpp
//  判断数正负
//
//  Created by zhongwen wang on 2022/7/5.
//

#include <iostream>
using namespace std;
void f(int x){
    if(x<0){
        cout<<"negative"<<endl;
    }
    else if(x>0){
        cout<<"positive"<<endl;
    }
    else
        cout<<"zero"<<endl;
};
int main(int argc, const char * argv[]) {
    int a;
    cin>>a;
    f(a);
    return 0;
}
