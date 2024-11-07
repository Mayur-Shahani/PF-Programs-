
#include<stdio.h>
 
 int main()
{
    double a , b, c;
    
	printf("Enter first float number : ");
    scanf("%lf", &a );
    
	printf("Enter Second float number  : ");
    scanf("%lf", &b );
    
	printf("Enter Third float number : ");
    scanf("%lf", &c );
    
    if (a > b) {
     if (a > c)
       printf("A is greatest");
}
    if (b > a) {
     if (b > c)
       printf("B is greatest");
}
    // if (c > a) {
    //	if(c > b)
    //	 printf("c is greatest");
	//}
  else {
          printf("C is greatest");
   return 0;
 }
}
