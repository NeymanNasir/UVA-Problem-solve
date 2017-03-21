#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int n,num,sum,fsum;
    while(scanf("%ld",&n)){
        if(n==0)break;
        sum=0;
            while(n>0){
            num=n%10;
            sum=sum+num;
            fsum=sum;
            n=n/10;
            if(n==0&&sum>9){
                n=sum;
                sum=0;
            }
        }
    printf("%ld\n",fsum);
    }
    return 0;
}
