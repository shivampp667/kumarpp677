/*
#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of pattern ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    //  *
}
*/
/*
#include <stdio.h>

int fact(int a)
{
    int res;
    for(int i=1;i<=5;i++)
    {
        res=res*i;
        
    }
    return res;
}
int main() {
    
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    int sun=fact(num);
    printf("the factorial is %d",sun);
    
}
*/
/*
#include <stdio.h>

int fact(int a)
{
    if(a==1)
    {
        return 1;
        
    }
    int res = fact(a-1);//5-1=4, 4-1=3
    
    return res;
}
int main() {
    
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    int sun=fact(num);
    printf("the factorial is %d",sun);
    
}
*/