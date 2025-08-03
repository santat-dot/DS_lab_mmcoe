/*PROBLEM STATEMENT:
Rainfall Tracking:
Write a program to track rain data for 3 cities over 4 months.
Using a 2D array, we can store the data, calculate the avg rain
 for each city, and display the rain data in a tabular format.*/
#include <stdio.h>
int main()
{
	float rain[3][4];
	float total=0.0,avg=0.0;
	printf("Enter the rain Data for 3\n");
	for(int c=0;c<3;c++){
    	printf("\n Enter data for city %d",c+1);
    	for(int m=0;m<4;m++){
        	printf("\nMonth %d\t =",m+1);
        	scanf("%f",&rain[c][m]);
    	}
	}
    	printf("Rainfall TRACKING");
    	printf("\nSno.\tcityName\tMonth1\t\tMonth2\t\tMonth3\t\tMonth4\t\tAvgrain\n");
	for(int c=0;c<3;c++){
    	printf("\n%d \t",c+1);
    	printf("city %d\t",c+1);
    	for (int m=0;m<4;m++){
        	printf("\t%f ",rain[c][m]);    
        	total+=rain[c][m];
       	 
    	}
    	avg=total/4;
        	printf("\t%f",avg);
	}
}