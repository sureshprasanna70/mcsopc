#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char source[1000002];
int flag;
void find_palin()
{
int len,i,tmp,t,tmp1;
len = strlen(source);
flag = 1;
for(i=0; i<len; i++)
    {
        if(source[i] != '9')
        {
            flag = 0;
            break;
        }
    }
if(flag == 1)
    {
        source[0] = '1';
        for(i=1; i<len; i++)
            source[i] = '0';
        source[len] = '1';
        source[len+1] = '\0';
        return ;
    }
flag = 0;
    for(i=0; i<len/2; i++)
    {
        if(source[i] < source[len-i-1])
            flag = -1;
        else if(source[i] > source[len-i-1])
            flag = 1;
        source[len-i-1] = source[i];
    }
    if(flag == -1 || flag==0)
    {
        t = 0;
        if(len%2 == 0)
            tmp1 = len/2-1;
        else
            tmp1 = len/2;
        while(source[tmp1-t] == '9')
        {
            source[tmp1-t] = '0';
            source[len-1-tmp1+t] = '0';
            t++;
        }
        source[tmp1-t] ++;
        source[len-1-tmp1+t] = source[tmp1-t];
    }
    return ;
}
int main()
{
    int t,i;
    scanf("%d\n",&t);
    for(i=0; i<t; i++)
    {
        gets(source);
        find_palin();
        printf("%s\n",source);
    }
return 0;
}