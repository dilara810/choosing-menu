#include <stdio.h>
#include <stdlib.h>

/* Write a program that displays a menu on the screen with the following options, and performs the required operation :
1. Triangular?
2. Prime?
3. EXIT
Program terminates when user enters 3. (Do not forget to make data validation for menu options) 
- Triangular number is a number if and only if it is a sum of consecutive integers 1+2+3+…..
For example:
6 is a triangular number because it is the sum of 1+2+3; 
15 is a triangular number because it is the sum of 1+2+3+4+5.
- Prime number is a number whose divisors are only 1 and itself.

*/

int main(int argc, char *argv[]) 
{ 

    printf(" MENU ");
    printf("--------------\n");
    printf("1.Triangular?\n");
    printf("2.Prime?\n");
    printf("3.Exit\n");
    
    int i=1,choice,number;
    int sum=0,flag=0,division;

    
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    
    while(choice>3 || choice<=0)
    {
    	printf("Wrong choice! Enter your choice again: ");
        scanf("%d",&choice);
    }
    
       
       
    while(choice !=3)
    {
    	printf("Enter a number: ");
       scanf("%d",&number);
    	sum=0,i=1;
     switch(choice)
     {   
    	case 1: do
              	{      
    		          sum+=i;
					  i++;
				}while(number>sum);
					  
					  if(number==sum)
					  {
					  	printf("%d is a triangular number\n",number);
					  }
					  else
					  {
					  	printf("%d is not a triangular number\n",number);
					  }
	        	
    	        
    	   break;
    	
		
		case 2: for(i=2;i<number;i++)
		        {
		        	division=number%i;
		        	
		        	if(division==0)
		        	{
		        		flag =1;
					}
				}
				
				if(flag==1)
					printf("%d is not prime\n",number);
				else
				    printf("%d is a prime\n",number);
				    
    		break;	
			
	
    }
			printf("\nEnter your choice: ");
            scanf("%d",&choice);
    
	}
	
	
    
    
	return 0;
}
