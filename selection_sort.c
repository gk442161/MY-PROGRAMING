#include<stdio.h>
#include<conio.h>

void main()
{
	int min,array[10],temp,i,j;
	clrscr();
	printf("\nenter the elements for selection sort\n");
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
	for(i=1;i<10;i++)
	{	min=i;
		for(j=0;j<i;j++)
			if(array[j]>array[min])
			{temp=array[min];
		     array[min]=array[j];
			 array[j]=temp;
			}
	}
printf("sorted elements are\n");
for(i=0;i<10;i++)
		printf("%d  ",array[i]);
getch();

			
}
	

/*

enter the elements for selection sort
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
			