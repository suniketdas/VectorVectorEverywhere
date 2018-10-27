#include <stdio.h>
#include "suniket.h"
int main()
{
	struct vector a,b,c;
	printf("\n\t\t\t\t\t*******Welcome To vector calculator********\n\n");
	int draw,flag=1,dotP;
	do
	{
		printf("\n\n\nPress 1 for addition\nPress 2 for subtraction\nPress 3 for Dot Product\nPress 4 for cross Product\nto exit press any other key");
		scanf("%d",&draw);
		if(draw>0 && draw<5)
		{
		printf("\n Please enter your vectors\n\n1st vector::");
		input(&a);
		printf("\n 2nd vector::");
		input(&b);
		}
		switch(draw)
		{
			case 1: c=sum(a,b);
					printf("\n Result::");
					print(c);
					break;
			case 2: c=sub(a,b);
					printf("\n Result::");
					print(c);
	
					break;
			case 3: dotP=dotproduct(a,b);
					printf("\n Result::");
					printf("%d",dotP);

					break;
			case 4: c=cross(a,b);
										printf("\n Result::");
					print(c);

					break;
			default: flag=0;
		}

		if(flag)
		{
			printf("\n if you want to calculate more values press 1 else press any key ::");
			scanf("%d",&draw);
			if(draw!=1)
			{
				flag=0;
			}
		}
	}while(flag);
}