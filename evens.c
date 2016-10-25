include <stdio.h>

int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
    printf("even");
    }

else if(n%2!=0)
{
    printf("odd");
}
else
{
    printf("invalid");
}
    return 0;
    }
