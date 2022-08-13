#include <iostream>
using namespace std;
int f(int a,int b,int i,int w,int &count,int m,int g,int e){
    for(int j=b;j>=a;j--){
        if((w*1000-(i*m))%j==0 && w*1000-(i*m)!=0){
            count+=(w*1000-(i*m))/j;
            cout<<count<<' ';
            e++;
            return 0;
        }
    }
    m--;
    if(m==0){
        g++;
        return 0;
    }
    f(a,b,i,w,count,m,g,e);
    return 0;
};
int main() {
    int a,b,w;
    cin>>a>>b>>w;
    int count=0;
    if(w*1000%b!=0){
        for(int i=a;i<=b;i++){
            int m=w*1000/i,g=0,e=0;
            f(a,b,i,w,count,m,g,e);
            if(g==b-a){
                cout<<"UNSATISFIABLE"<<endl;
            }
            if(e!=0){
                break;
            }
        }
        count=0;
    }
    else
        cout<<w*1000/b<<' ';
    
    if(w*1000%a!=0){
        for(int i=b;i>=a;i--){
            int m=w*1000/i,g=0,e=0;
            f(a,b,i,w,count,m,g,e);
            if(g==b-a){
                cout<<"UNSATISFIABLE"<<endl;
            }
            if(e!=0){
                break;
            }
        }
    }
    else{
        cout<<w*1000/a<<endl;
        
    }
    return 0;
}
