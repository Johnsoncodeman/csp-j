//
//  main.cpp
//  自动修正
//
//  Created by zhongwen wang on 2022/8/8.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string a;
    cin>>a;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout<<a<<endl;
    return 0;
}
