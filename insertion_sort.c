#include<stdio.h>
#include<conio.h>

void main()
{
	int array[10],i,j,temp;
	clrscr();
	printf("enter the elements for insertion sort\n");
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);

	for(i=1;i<10;i++)
	{	temp=array[i];
        j=i;
	   while(j>=0&&temp<array[j-1])
	   
		   
		   { 
		        array[j]=array[j-1];
				
		   }
		 
			  array[j]=temp;
	   
	}
	printf("sorted elements are\n");
for(i=0;i<10;i++)
		printf("%d  ",array[i]);
	getch();
}



/*
enter the elements for insertion sort
9
8
7
6
5
4
3
2
1
1
sorted elements are
1  1  2  3  4  5  6  7  8  9  

*/