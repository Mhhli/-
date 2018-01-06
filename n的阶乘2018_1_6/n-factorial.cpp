#include<iostream>

using namespace std;

int main(){
    int n;
    long long result=1;
   // cout<<"long long size:"<<sizeof(int)<<endl;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
            result*=i;
        cout<<result;
        result=1;
    }
}
