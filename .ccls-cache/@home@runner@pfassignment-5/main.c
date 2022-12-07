#include<stdio.h>
int main()
{
   int ch,arr[3][3],arr2[3][3],arr3[3][3];
   for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {
            scanf("%d",&arr[i][j]);
         }
   }
   for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {
            printf("%d  ",arr[i][j]);
         }
         printf("\n");
    }
     for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {  
            scanf("%d",&arr2[i][j]);
         }
   }
   for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {
            printf("%d  ",arr2[i][j]);
         }
         printf("\n");
    }
    printf("\n 1. matrix addition");
    printf("\n 2. matrix subtraction");
    printf("\n please select");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    for(int i=0;i<=2;i++)
    {
         for(int j=0;j<=2;j++)
         {
            arr3[i][j]=arr[i][j]+arr2[i][j];
         }
    }
   for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {
            printf("%d  ",arr3[i][j]);
         }
         printf("\n");
    } 
    break;
    case 2: 
    for(int i=0;i<=2;i++)
    {
         for(int j=0;j<=2;j++)
         {
            arr3[i][j]=arr[i][j]-arr2[i][j];
         }
    }
   for(int i=0;i<=2;i++)
   {
         for(int j=0;j<=2;j++)
         {
            printf("%d  ",arr3[i][j]);
         }
         printf("\n");
   }
    break;
   }
            
return 0;
}