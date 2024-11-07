#include<stdio.h>
 int main()
{
   int y;
   printf("Enter a value : ");
   scanf("%d", &y);
   if (y % 5 == 0 ) 
       if(y % 7 == 0 )
	   {
     printf("The number is multiple of 5 & 7");
}
   else {
     printf("The number is not multiple of 5");
}
    return 0;
}  
