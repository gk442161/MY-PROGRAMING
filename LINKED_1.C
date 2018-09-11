#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void creat(int info);
void insertion(int info);
void deletion(int info);
void display();




struct node
{
	int val;
	struct node *next;
}*new,*temp;



struct node *start=NULL;

void main()
{
	int x,choice;
	clrscr();
do
{
	printf("\n1.CREAT NEW ELEMENT\n2.INSERTION\n3.DELETION\n4.DISPLAY\n5.EXIT");
	printf("                          \nENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	switch(choice){
			case 1:
		        printf("\nENTER THE ELEMENT TO BE INSERTED\n");
				scanf("%d",&x);
			   	creat(x);
				break;
		case 2:
                printf("\nENTER THE ELEMENT TO BE INSERTED AFTER WITHIN THE LIST\n");
				scanf("%d",&x);
				insertion(x);
				break;
        case 3:
               printf("\nENTER THE ELEMENT TO BE DELETED\n");
               scanf("%d",&x);
               deletion(x);
               break;
        case 4:
		        display();
               break ;
    	case 5:
                break;		
		default :
              printf("\n..........YOU ENTERED WRONG CHOICE........\n");		
		      break ;
			  
		}  
	}while(choice!=5);

	
getch();
}


void creat(int info)
{   printf("\n");
	new=(struct node*)malloc(sizeof(struct node*));
	new->val=info;
	new->next=NULL;
	if(start==NULL)
	{start=new;
	}
	else
	{temp=start;
     while(temp->next!=NULL)
	    temp=temp->next;
	temp->next=new;
	}
	
}

void insertion(int info)
{  printf("\n");
    int value;
    new=(struct node*)malloc(sizeof(struct node*));
    struct node *postemp;
      temp=start;
    while(temp!=NULL&&temp->val!=info)
	{
		temp=temp->next;
	};
	if(temp==NULL)
		   printf("\n.........THERE IS NO SUCH ELEMENT...............");
	else

	{printf("\nENTER THE THE ELEMENT TO BE INSERTED");
	 scanf("%d",&value);
	 new->val=value;
	 postemp=temp->next;
	 temp->next=new;
	 new->next=postemp;
	}
}

void deletion(int info)
{printf("\n");
	  struct node *pretemp;
      temp=start;
	  if(start->val==info)
	  { start=start->next;
	      free(temp);
	  }
	  else
	  {
		  while(temp!=NULL&&temp->val!=info)
	   {
		 pretemp=temp;
		temp=temp->next;
	   };
	   if(temp==NULL)
		   printf("\n.................THERE IS NO SUCH ELEMENT.................");
	   else;
	   { pretemp->next=temp->next;
	   free(temp);
	   }
	  }
	   
}

void display()
{printf("\n");
	  
     temp=start;
	 
    while(temp!=NULL)
	{
		printf("\n%d",temp->val);
		temp=temp->next;
	};
}


/*
****************************************OUTPUT***********************************************
1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
1

ENTER THE ELEMENT TO BE INSERTED1


1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
2

ENTER THE ELEMENT TO BE INSERTED AFTER WITHIN THE LIST



ENTER THE THE ELEMENT TO BE INSERTED2

1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
4


1
2
1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
1

ENTER THE ELEMENT TO BE INSERTED3


1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
1

ENTER THE ELEMENT TO BE INSERTED4


1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
3

ENTER THE ELEMENT TO BE DELETED2


1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
4


1
3
4
1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE
3

ENTER THE ELEMENT TO BE DELETED6


.................THERE IS NO SUCH ELEMENT.................
1.CREAT NEW ELEMENT
2.INSERTION
3.DELETION
4.DISPLAY
5.EXIT                          
ENTER YOUR CHOICE

*/
