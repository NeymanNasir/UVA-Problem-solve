#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,a,b,sum,i,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%d %d",&a,&b);
        for(i=a,sum=0;i<=b;i++){
            if(i&1){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
