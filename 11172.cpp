#include<cstdio>
#include<iostream>

int main()
{
    int T;
    long long a,b;
    scanf("%d",&T);
    while(T--){
        scanf("%lld %lld",&a,&b);
        if(a>b){
            printf(">\n");
        }
        else if(b>a){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}

