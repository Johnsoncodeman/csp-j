//
//  main.cpp
//  输出绝对值
//
//  Created by zhongwen wang on 2022/7/5.
//

#include <iostream>
using namespace std;
void f(double x){
    if(x<0){
        printf("%.2f", x*-1);
        
    }
    else if(x==0){
        printf("%.2f", 0);
    }
    else
        printf("%.2f", x);
};
int main(int argc, const char * argv[]) {
    double a;
    cin>>a;
    f(a);
    return 0;
}
