#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=76,n;
    char response;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n!=a)
    {
        if (n<a)
        {
         printf("\nEnter Higher No\n");
         scanf("%d",&n);  
        }
        else if (n>a)
        {
            printf("\n enter lower no\n");
         scanf("%d",&n);  

        }
        else
        {
            printf("You win have you enjoyed ?");

        }
        
        
        
    }
    
    return 0;
}
