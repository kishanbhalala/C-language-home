#include<stdio.h>
void main()
{  
   int  i,n;
   printf("enter up to value = ");
   scanf("%d",&n);

   i=1;                                //exp1
   while(i<=n)                       //exp2  
   {  
      printf("%d\t",i*i);
      i++;                           //exp3
   }
   
 	
}




//1,4,9,16,25.....series