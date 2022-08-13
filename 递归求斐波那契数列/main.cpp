//
//  main.cpp
//  递归求斐波那契数列
//
//  Created by zhongwen wang on 2022/7/22.
//

#include <iostream>
using namespace std;
void f(int n,int *a,int num){
    if(num<=n){
        num++;
        a[num]=a[num-1]+a[num-2];
        f(n,a,num);
    }
    else
        cout<<a[n]<<endl;
}
int main(int argc, const char * argv[]) {
    int a[15];
    a[0]=1;
    a[1]=1;
    int n;
    cin>>n;
    f(n,a,1);
    return 0;
}
