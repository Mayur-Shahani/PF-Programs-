#include<stdio.h>
int main()
{
   float temp1,temp2,temp3;
 
   printf("Enter first temperature : ");
   scanf("%f", &temp1);
   
   printf("Enter Second temperature : ");
   scanf("%f", &temp2);
   
   printf("Enter Third temperature : ");
   scanf("%f", &temp3);
   
   float z = (temp1 + temp2 +temp3 ) / 3.0;
  // printf("%f", z);
  
   if ( z > 40){
       printf ("Temperature is too hot %f ", z);
}
   else if ( z > 20 ) {
    	if (z < 39.9)//what about 39.5?
       printf ("Temperature is moderate %f ", z);
}

 else if (z < 20){
     printf("Temperature is cool %f ", z);
 }
   else {
      printf (" Unspecified input %f ", z);
 }
   return 0;
}
