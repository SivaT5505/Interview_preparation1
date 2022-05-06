#include<stdio.h>
int main()
{
    int row,col,len;
    char str[1000];
    scanf("%s",str);
    len=strlen(str);
    for(row=1;row<=len;row++,printf("\n")){
        for(col=1;col<=len;col++)
        if(row==col || row+col==len+1)
            printf("%c ",str[row-1]);
        else
            printf("  ");
        }
        return 0;
    }
