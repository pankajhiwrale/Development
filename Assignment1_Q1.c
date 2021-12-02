//1.Program to divide two numbers

#include<stdio.h>
int Divide(int iNo1, int iNo2)   //function Declaration
{
int iAns = 0;            //variable initialization
if(iNo2 < 0)           //condition
{
return -1;
}
iAns = iNo1 / iNo2;
return iAns;
}
int main()  //entry point function
{
int iValue1 = 15, iValue2 = 5;    //variable initialization
int iRet = 0;
iRet = Divide(iValue1, iValue2);     //function call    
printf("Division is %d",iRet);
return 0;
}