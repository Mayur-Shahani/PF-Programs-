#include<stdio.h>
int main()
{
   char character ;
   printf("Enter any Character : ");
   scanf ("%c", &character);
   
   if (character == 'a' || character == 'e'|| character == 'i'|| character == 'o'|| character == 'u'){
      printf(" %c alphabet is vowel", character);
}
   else{
      printf(" %c alphabet is consonent ", character);
}
    return 0;
} 
