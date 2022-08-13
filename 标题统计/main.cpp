//
//  main.cpp
//  标题统计
//
//  Created by zhongwen wang on 2022/8/8.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++){
        if((s[i]>47 && s[i]<58)||(s[i]>64 && s[i]<91)||(s[i]>96 && s[i]<123)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
