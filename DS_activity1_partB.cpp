/*temperature Tracker:
Write a program for Tracking daily temprature of 3 cities for a week . The program calculates the avg temprerature for each day and for the week.
PRN=B24CE1109*/
#include <stdio.h>
int main()
{
	float tempr[3][7];
	float total=0.0,avg=0.0;
	printf("Enter the temprerature for 3 Cities\n");
	
	for(int c=0;c<3;c++){
    	printf("\nfor a Week%d",c+1);
    	
    	for(int w=0;w<7;w++){
        	printf("\nday %d\t =",w+1);
        	scanf("%f",&tempr[c][w]);
    	}
	}
    	printf("TEMPERATURE TRACKING");
    	printf("\nSno.\tcityName\tDay1\t\tDay2\t\tDay3\t\tDay4\t\tDay5\t\tDay6\t\tDay7\t\tAvgtemprerature\n");
	for(int c=0;c<3;c++){
    	printf("\n%d \t",c+1);
    	printf("city %d\t",c+1);
    	for (int w=0;w<7;w++){
        	printf("\t%f ",tempr[c][w]);    
        	total+=tempr[c][w];
       	 
    	}
    	avg=total/7;
    	total=0.0;
        	printf("\t%f",avg);
	}
}