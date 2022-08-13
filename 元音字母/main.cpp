//
//  main.cpp
//  元音字母
//
//  Created by zhongwen wang on 2022/8/9.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count=0;
    if(s[0]=='a' || s[0]=='i' || s[0]=='e'  || s[0]=='o'  || s[0]=='u'){
        count++;
    }
    for(int i=1;i<=s.size();i++){
        if((s[i]=='a' || s[i]=='i' || s[i]=='e'  || s[i]=='o'  || s[i]=='u') && (s[i-1]!='a' && s[i-1]!='i' && s[i-1]!='e'  && s[i-1]!='o'  && s[i-1]!='u')){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
