#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,Term1,Term2,Final,Attendence,CT1,CT2,CT3,i;
    double Average,total_marks;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d %d %d %d %d",&Term1,&Term2,&Final,&Attendence,&CT1,&CT2,&CT3);
        if((CT1>=CT2&&CT2>=CT3)||(CT2>=CT1&&CT1>=CT3)){
            Average=(CT1+CT2)/2.0;
        }
        else if((CT1>=CT3&&CT3>=CT2)||(CT3>=CT1&&CT1>=CT2)){
            Average=(CT1+CT3)/2.0;
        }
        else if((CT2>=CT3&&CT3>=CT1)||(CT3>=CT2&&CT2>=CT1)){
            Average=(CT2+CT3)/2.0;
        }

        total_marks=Term1+Term2+Final+Attendence+Average;

        if(total_marks>=90) printf("Case %d: A\n",i);
        else if(total_marks>=80) printf("Case %d: B\n",i);
        else if(total_marks>=70) printf("Case %d: C\n",i);
        else if(total_marks>=60) printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);

    }

    return 0;
}

