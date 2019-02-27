#include<stdio.h>
void main()
{
	int time;
	printf("Enter the time required");
	scanf("%d",&time);
	if((time>2)&&(time<=3))
		printf("The worker is highly efficient");
	else if((time>3)&&(time<=4))
		printf("The worker should improve the speed");
	else if((time>4)&&(time<=5))
		printf("worker is given training to improve speed");
	else
		printf("worker  is terminated");

}
			
