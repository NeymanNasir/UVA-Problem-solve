#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long a,b,sub;
    while(scanf("%lld %lld",&a,&b)!=EOF){
          if(a>=b){
            sub=a-b;
          }
          else{
            sub=b-a;
          }

          printf("%lld\n",sub);
          }
    return 0;
}
