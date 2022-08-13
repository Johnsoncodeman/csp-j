//
//  main.cpp
//  字符串插入
//
//  Created by zhongwen wang on 2022/8/6.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b,c;
        cin>>a>>b;
        c=a;
        int  e=c.size();
        char tmp=c[0];
        for(int j=1;j<e;j++){
            if(c[j]>c[0]){
                tmp=c[j];
            }
        }
        string str="";
        str+=tmp;
        int num=a.find(str);
        a.insert(num+2,b);
        cout<<a<<endl;
    return 0;
}
