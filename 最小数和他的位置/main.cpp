//
//  main.cpp
//  最小数和他的位置
//
//  Created by zhongwen wang on 2022/7/11.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a=1,b=0,num;
    cin>>num;
    b=num;
    for(int i=1;i<10;i++){
        cin>>num;
        if(num<b){
            b=num;
            a=i+1;
        }
    }
    cout<<b<<endl<<a<<endl;
    return 0;
}
