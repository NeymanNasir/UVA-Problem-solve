#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,i;
    long int a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b<=c)||(a+c<=b)||(c+b<=a)){
            printf("Case %d: Invalid\n",i);
        }
        else if(a==b&&b==c&&c==a){
            printf("Case %d: Equilateral\n",i);
        }
        else if((a==b)||(a==c)||(b==c)){
            printf("Case %d: Isosceles\n",i);
        }
        else{
            printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}
