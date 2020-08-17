#include<iostream>
using namespace std;
int comp(int a,int b){
    if(a>b)return 1;
    else if(a<b)return -1;
    else return 0;
}
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int pl[4][3],vel[4][3]={0};
    for(int i=0;i<4;i++){
        scanf("<x=%3d, y=%3d, z=%3d>",&pl[i][0],&pl[i][1],&pl[i][2]);
        getchar();
    }
    for(int i=0;i<4;i++){
            cout<<"["<<pl[i][0]<<","<<pl[i][1]<<","<<pl[i][2]<<"]"<<endl;
        }
    int T=0;
    int txyz[3]={0};
    for(int j=0;j<3;j++){
        int tpl[4],vel[4]={0};
        for(int i=0;i<4;i++){
            tpl[i]=pl[i][j];
        }
        while(true){
            bool flag=false;
            for(int i=0;i<4;i++){
                if(vel[i]!=0||tpl[i]!=pl[i][j]){
                    flag=true;
                }
            }
            if(!flag&&txyz[j]) break;
            txyz[j]++;
            for(int i=0;i<4;i++){
                for(int k=0;k<4;k++){
                    vel[k]+=comp(tpl[i],tpl[k]);
                }
            }
            for(int i=0;i<4;i++){
                tpl[i]+=vel[i];
            }
        }
    }
    
    cout<<lcm(txyz[0],lcm(txyz[1],txyz[2]))<<endl;

}