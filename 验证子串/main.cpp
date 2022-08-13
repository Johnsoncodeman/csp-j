//
//  main.cpp
//  验证子串
//
//  Created by zhongwen wang on 2022/8/4.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string a,b;
    cin>>a>>b;
    if(b.find(a)<b.size()){
        cout<<a<<" is substring of "<<b<<endl;
    }
    else if(a.find(b)<a.size()){
        cout<<b<<" is substring of "<<a<<endl;
    }
    else
        cout<<"No substring"<<endl;
    return 0;
}
