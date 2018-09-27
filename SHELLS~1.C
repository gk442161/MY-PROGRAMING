#include<stdio.h>
#include<conio.h>

#define MAX 20



void main()
{
    int gap,length,array[MAX],i,j,temp;
    clrscr();
    printf("\nEnter the No. of elements you Want\n");
    scanf("%d",&length);
    printf("ENTER THE ELEMENTS\n");
    for(i=0;i<length;i++)
     { scanf("%d",&array[i]);
     }
     printf("\n****AFTER SHELL SORT****\n");
     
     gap=(length/2);
     
     while(gap>0)
     {   
         for(i=gap;i<length;i++)
	 {  temp=array[i];
            j=i;
            while(j>=gap&&array[j-gap]>temp)
              {array[j]=array[j-gap];
               j=j-gap;
              }
              array[j]=temp;
         }    
        gap=(gap/2);    
            
     }
      for(i=0;i<length;i++)
     { printf("\t%d",array[i]);
     }
 getch();
	
}



