#include<iostream>
#include<cstring>
using namespace std;
//void qsort(int l,int r,int *a){
//    int i,j,mid,p;
//    i=l;
//    j=r;
//    mid=a[(l+r)/2];
//    do{
//        while(a[i]<mid){
//            i++;
//        }
//        while(a[j]>mid){
//            j--;
//        }
//        if(i<=j){
//            p=a[i];
//            a[i]=a[j];
//            a[j]=p;
//            i++;
//            j--;
//        }
//    }
//    while(i<=j);
//    if(l<j){
//        qsort(l,j,a);
//    }
//    if(i<r){
//        qsort(i,r,a);
//    }
//};
//void msort(int s,int t,int  *a,int *r){
//    if(s==t){
//        return ;
//    }
//    int mid=(s+t)/2;
//    msort(s,mid,a,r);
//    msort(mid+1,t,a,r);
//    int i=s,j=mid+1,k=s;
//    while(i<=mid && j<=t){
//        if(a[i]<=a[j]){
//            r[k]=a[i];
//            k++;
//            i++;
//        }
//        else
//        {
//            r[k]=a[j];
//            k++;
//            j++;
//        }
//    }
//    while(i<=mid){
//        r[k]=a[i];
//        k++;
//        i++;
//    }
//    while(j<=t){
//        r[k]=a[j];
//        k++;
//        j++;
//    }
//    for(int i=s;i<=t;i++){
//        a[i]=r[i];
//    }
//};
//void search(int x,int top,int bot,int *a){
//    int mid;
//    if(top+bot){
//        mid=(top+bot)/2;
//        if(x=a[mid]){
//            cout<<"YES"<<endl;
//        }
//        else{
//            if(x<a[mid]){
//                search(x,mid+1,bot,a);
//            }
//            else
//                search(x,top,mid-1,a);
//        }
//    }
//    else
//        cout<<"NO"<<endl;
//};
int s(int n,int k){
    if((n<k) || (k==0)){
        return 0;
    }
    if((k==1) || (k==n)){
        return 1;
    }
    return s(n-1,k-1)+k*s(n-1,k);
};
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<s(n,k);
    /*
    int k,x,l=1,r=10,a[11];
    for(k=1;k<=10;k++){
        cin>>a[k];
    }
    cin>>x;
    search(x,l,r,a);
    long long a[101]={0},b[101]={0},i,j,x,y,z;
    cin>>x>>y>>z;
    for(i=1;i<=x;i++){
        a[i]=1;
        b[i]=0;
    }
    for(i=x+1;i<=z+1;i++){
        b[i]=y*a[i-x];
        a[i]=a[i-1]+b[i-2];
    }
    cout<<a[z+1]<<endl;
    
    int n,i,j,a[101][101];
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cin>>a[i][j];
        }
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            if(a[i+1][j]>=a[i+1][j+1]){
                a[i][j]+=a[i+1][j];
            }
            else
                a[i][j]+=a[i+1][j+1];
        }
        
    }
    cout<<a[0][0]<<endl;

    int n;
    cin>>n;
    int a[2000],r[2000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    msort(0,n,a,r);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    
    int n;
    cin>>n;
    int a[2000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    qsort(0,n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    
    int n,a[1001],b[1001];
    cin>>n;
    int num=0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        int count=0;
        for(int j=0;j<i;j++){
            if(a[j]!=a[i]){
                count++;
            }
        }
        if(count==i){
            b[num]=a[i];
            num++;
        }
    }
    for(int i=0;i<num;i++){
        for(int j=1;j<num;j++){
            if(b[j]<b[j-1]){
                int tmp=b[j];
                b[j]=b[j-1];
                b[j-1]=tmp;
            }
        }
    }
    cout<<num<<endl;
    for(int i=0;i<num;i++){
        cout<<b[i]<<' ';
    }
    cout<<endl;
   return 0;
     */
    
    return 0;
}

