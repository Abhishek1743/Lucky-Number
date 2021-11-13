#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int m,d,t,r,j;
    scanf("%d",&n);
    if(n>0 && n<10)
    {
        if(n==3 || n==9)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else if(n>=10 && n<100)
    {
        m=n%10;
        d=n/10;
        if(d==3 || d==9 || m==3 || m==9)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else if(n>=100 && n<1000)
    {
        m=n%10;
        t=n%100;
        t=t/10;
        d=n/100;
        if(d==3 || d==9 || m==3 || m==9 || t==3 || t==9)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else if(n>=1000 && n<10000)
    {
        m=n%10;
        t=n%1000;
        t=t/100;
        j=n%100;
        j=j/10;
        r=n/1000;
        if(m==3 || m==9 || t==3 || t==9 || r==3 || r==9 || j==3 || j==9)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else if(n>=10000 && n<100000)
     {
        m=n%10;
        t=n%1000;
        t=t/100;
        j=n%100;
        j=j/10;
        r=n/1000;
        int p=n%10000;
        p=p/1000;
        int q=n%100000;
        q=q/10000;
        if(m==3 || m==9 || t==3 || t==9 || r==3 || r==9 || j==3 || j==9 || p==3 || p==9 || q== 3 || q==9)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}
