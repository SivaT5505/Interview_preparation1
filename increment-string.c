#include<stdio.h>
int main()
{
    int i,len;
    char str[1000];
    scanf("%s",str);
    len=strlen(str);
    for(i=1;i<=len;i++,printf("\n")){
        printf("%.*s",i,str);
        //printf("%5.*s",i,str); op-opposite print
    }
    return 0;
}
