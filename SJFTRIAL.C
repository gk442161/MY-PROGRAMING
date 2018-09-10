#include<stdio.h>
#include<conio.h>


 int MAX=10;
void insert(int jb,int dur);
void pricid(int position);
int del();
void display();


struct queue{
	int jb,dur;
  }qu[10],temp;


int rare=-1;
int start=-1;

void main()
{
 int opr,duration,job;
 clrscr();
 do
{
 printf("\nENTRE THE OPERATION TO BE PERFORMED\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n\tENTRED OPERTION NO. IS  ");
 scanf("%d",&opr);
 switch(opr)
{
 case 1:
     printf("\nENTER THE JOB NO. FROM THE FOLLOWING\n1.J1\n2.J2\n3.J3\n4.J4\nENTERED JOB IS ");
     scanf("%d",&job);
     if(job<5&&job>0)
    { printf("ENTER THE DURATION FOR YOUR JOB ");
     scanf("%d",&duration);
     insert(job,duration); }
     else
     printf("INVALID JOB NO. ENTERED\n");
     break ;
 case 2:
      printf("\n%d",del());
      break;
 case 3:
     display();
     break ;
 case 4:
     break ;
default:
     printf("\nENTERED INVALID CHOICE");
     break;
 }
}while(opr!=4);
getch();
}


void insert(int job,int duration)
{
  if(rare==(MAX-1))
      printf("OVERFLOW");

 if(rare==-1)
   { rare=0;
    qu[rare].jb=job;qu[rare].dur=duration;
   }
 else
  {
   rare=rare+1;
   qu[rare].jb=job;qu[rare].dur=duration;
   pricid(rare);
  }
 if(start==-1)
 start=0;
}

int del()
 {
    temp=qu[start];
   if(start==rare)
  {
    {printf("\nUNDERFLOW") ;
    return -1;
    }
  }
  else
   { start++ ;
     return temp.jb;
   }
}


void pricid(int position)
{
	while(qu[position].dur<qu[position-1].dur)
	{
		temp=qu[position-1];
		qu[position-1]=qu[position];
		qu[position]=temp;
		position--;
	}
}

 void display()
 {       int i;
	 printf("\nJOB NO.      	DURATION\n");
	 for( i=start;i<=rare;i++)
		 printf("\n%d           	 %d",qu[i].jb,qu[i].dur);
		 printf("\n");

     }