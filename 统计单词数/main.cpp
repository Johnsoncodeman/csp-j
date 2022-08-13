//
//  main.cpp
//  统计单词数
//
//  Created by zhongwen wang on 2022/8/6.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string a,b;
    int  c=0;
    getline(cin,a);
    getline(cin,b);
    b.insert(0," ");
    b.insert(b.size()," ");
    a.insert(0," ");
    a.insert(a.size()," ");
    string e=b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(e.begin(), e.end(), e.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    for(int i=0;i<e.size();i++){
        if(e.find(a)<=e.size()){
            c++;
            e.erase(e.find(a),a.size()-1);
        }
    }
    if(c==0){
        cout<<-1<<endl;
    }
    else
        
        cout<<c<<' '<<b.find(a)<<endl;
    return 0;
}
