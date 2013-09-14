#include<stdio.h>
int main()
{
    int n=0;
    long long no=0;
    long long zeroes=0;
    scanf("%d",&n);
    while(n)
    {
        
        scanf("%lld",&no);
        while(no)
        {
            no = no/5;
            zeroes+=no;
        }
        printf("%lld\n",zeroes);
        n--;
    }

    return 0;
}

