#include<iostream>
using namespace std;

int main()
{
    int arr[7][30]={0};
    char str[1051];
    cin>>str;
    int l=5,h=7,w=30;
    int cnt=0;
    for(int i=0;i<l;i++){
        cout<<"Layer "<<i+1<<endl;
        for(int j=0;j<h;j++){
            for(int k=0;k<w;k++){
                int t=str[cnt]-'0';
                cout<<t;
                cnt++;
                if(arr[j][k]!=1&&arr[j][k]!=2){
                    
                    if(t==1||t==0){
                        arr[j][k]=t+1;
                    }
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<arr[i][j]-1;
        }
        cout<<endl;
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]==1) cout<<" ";
            else cout<<1;
        }
        cout<<endl;
    }
}