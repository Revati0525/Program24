//write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultiFact(int iNO)
{
    int iCnt=0;
   
    for(iCnt = 1; iCnt < iNO; iCnt++)                  //O(N) order of capital N
    {
       if((iNO % iCnt) == 0)
       { 
         printf("%d\n",iCnt);
       }
       
    }
}      
int main()
{
    int ivalue = 0;
    int iRet = 0;
 
    printf("enter number\n");
    scanf("%d",&ivalue);

    iRet = MultiFact(ivalue);

    printf("%d", iRet);

    return 0;
}