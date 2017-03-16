#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    long long I;
    int i,len,j,Cont;
    char str[100];
    char str2[100];
    while(1){
        scanf("%lld",&I);
        if(I==0)break;
        i=0;
        while(I>0){
            str[i]=I%2+'0';
            I=I/2;
            i++;
        }
        str[i]='\0';
        len=strlen(str);
        for(j=len-1,Cont=0,i=0;j>=0;j--,i++){
            if(str[j]=='1'){
                Cont++;
            }
            str2[i]=str[j];
        }
        str2[i]='\0';
        printf("The parity of %s is %d (mod 2).\n",str2,Cont);
    }
    return 0;
}
