#include<stdio.h>

int main()
{
	float temp1 , temp2 , temp3;
    
	printf("Enter first day temperature : ");
    scanf("%f", &temp1);
    
    printf("Enter Second day temperature : ");
    scanf("%f", &temp2);
    
    printf("Enter Third day temperature : ");
    scanf("%f", &temp3);
    
    float avertemp = (temp1 + temp2 + temp3) / 3;
   // printf("%f" , avertemp );
    
    if(avertemp > 40)
	{
		printf("Hot %f", avertemp);
	}
	else if(avertemp < 40)
	    if(avertemp >= 20)
	    {
	    	printf("Moderate %f", avertemp);
		}
		else if(avertemp < 20)
		{
			printf("Cool %f", avertemp);
		}
		else
		{
			printf("Wrong Input");
		}
    
    
}

