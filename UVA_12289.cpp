#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int T,i,cnt,len;
    char str[10];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        if(len==5){
            printf("3\n");
        }
        else{
            int cnt=0;
            if(str[0]=='o'){
                cnt++;
            }
            if(str[1]=='n'){
                cnt++;
            }
            if(str[2]=='e'){
                cnt++;
            }
            if(cnt>=2){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
    return 0;
}
