//
//  main.cpp
//  整数大小对比
//
//  Created by zhongwen wang on 2022/7/5.
//

#include <iostream>
using namespace std;
void f(int a,int b){
    cin>>a>>b;
    if(a>b){
        cout<<">"<<endl;
    }
    else if(a<b){
        cout<<"<"<<endl;
    }
    else if(a==b){
        cout<<"="<<endl;
    }
};
int main(int argc, const char * argv[]) {
    int x,y;
    f(x,y);
    return 0;
}
