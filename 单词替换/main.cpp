//
//  main.cpp
//  单词替换
//
//  Created by zhongwen wang on 2022/8/5.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string a,b,c;
    getline(cin,a);
    cin>>b>>c;
    for (int i=0; i<a.size(); i++) {
        if(a.find(b)<a.size()){
            a.replace(a.find(b),b.size(),c);
        }
    }
    cout<<a<<endl;
    return 0;
}
