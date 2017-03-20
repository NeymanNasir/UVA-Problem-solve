//counting sorting algorithm

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,i,j,age,ara[150],cnt;
    while(scanf("%d",&n)){
        if(n==0)break;
        for(i=0;i<150;i++)ara[i]=0;
        for(i=1;i<=n;i++){
            scanf("%d",&age);
            ara[age]++;
        }
        for(i=1,cnt=0;i<=101;i++){
            if(ara[i]>0){
                for(j=1;j<=ara[i];j++){
                    cnt++;
                    printf("%d",i);
                    if(cnt!=n)printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
