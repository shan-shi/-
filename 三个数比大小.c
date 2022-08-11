#include<stdio.h>
int main()
{
    int a,b,c,Max;
    scanf("%d %d %d",&a,&b,&c);
    Max=a>b?a:(b>c?b:c);
  	printf("%d\n",Max);
    return 0;
}
