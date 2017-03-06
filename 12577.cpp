/*#include<stdio.h>
#include<iostream>
#include<string.h>

int main()
{
    int ccount,pcount,i,len,ccase=0;
    char str[100];
    char H[]="Hajj";
    char U[]="Umrah";
    while(scanf(" %[^\n]",str)){
        len=strlen(str);
        if(str[0]=='*'){
                break;
            }
            ccase++;
        for(i=0,ccount=0;i<len;i++){
            if(str[i]==H[i]){
                ccount++;
            }
            else{
                break;
            }
        }
        for(i=0,pcount=0;i<len;i++){
            if(str[i]==U[i]){
                pcount++;
            }
            else{
                break;
            }
        }
        if(ccount==4){
            printf("Case %d: Hajj-e-Akbar\n",ccase);
        }
        else if(pcount==5){
            printf("Case %d: Hajj-e-Asghar\n",ccase);
        }

    }

    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int t=0;
    while(scanf("%s",str)){
        if(strcmp(str,"Hajj")==0)printf("Case %d: Hajj-e-Akbar\n",++t);
        else if(strcmp(str,"Umrah")==0)printf("Case %d: Hajj-e-Asghar\n",++t);
        else if(strcmp(str,"*")==0)break;
    }
    return 0;
}

