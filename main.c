#include<stdio.h>
int main()
{
    int pos,tra;
    int count=0;
    char str[1000];
    scanf("%s",str);
    for(pos=tra=0;str[tra]!=NULL;tra++){
        if(str[pos]==str[tra]){
            count++;
            }
        else{
            printf("%c%d",str[pos],count);
            pos=tra;
            count=1;
    }
    }
  printf("%c%d",str[pos],count);
}
