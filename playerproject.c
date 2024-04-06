#include<stdio.h>
typedef struct player
{
	int j_no,runs,wickets,No_matches;
	char name[20];
}player;
void store(player*);
void display(player*);
void search(player*);
void delet(player*);
void update(player*);
void top_runs(player*);
int t;

void main()
{
	int n,choice;
	char z;
	printf("Enter How Many  Player:");
	scanf("%d",&t);
	player p[t];
	
	
	do{
		printf("1:Store\n2:display\n3:search\n4:delete\n5:update\n6.Top player runs:\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				store(p);
				break;
				
			case 2:
				display(p);
				break;
				
			case 3:
				search(p);
				break;
			
			case 4:
				delet(p);
				break;
				
			case 5:
				update(p);
				break;
				
			case 6:
			    top_runs(p);
			    break;
				
			default :
				printf("Invalide choice\n");
			
		}
		fflush(stdin);
		
	
	printf(" Do you continue?(Y/N)\n");
	scanf("%c",&z);
	
	}while(z=='Y' || z=='y');
	
		
	
}

void store(player* p)
{
		int i;
		for(i=0;i<t;i++)
		{
		printf("Enter the Jercy Number:");
		scanf("%d",&p[i].j_no);
		printf("Enter Player name:");
		scanf("%s",&p[i].name);
		printf("Enter Player Runs:");
		scanf("%d",&p[i].runs);
		printf("Enter the Number of Matches:");
		scanf("%d",&p[i].No_matches);
		printf("Enter the Wikets:");
		scanf("%d",&p[i].wickets);
		printf("\n\n");
		}
}

void display(player* p)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
		,p[i].j_no,p[i].name,p[i].runs,p[i].No_matches,p[i].wickets);
			printf("\n\n");	
	}	
}

void search(player* p)
{
	int i,j,choice,flag=0;
	printf(" 1: search by J_no:\n 2:search by Name: \nEnter the choice: ");
	scanf("%d",&choice);
			
	if(choice==1)
	{
	printf("Enter to search J_no: ");
   scanf("%d",&j);
   
   
   for(i=0;i<t;i++)
   {
   		if(p[i].j_no==j)
   		{	
   				printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
				   ,p[i].j_no,p[i].name,p[i].runs,p[i].No_matches,p[i].wickets);
   				flag=1;
				   break;
				 printf("\n\n");  
		}  	
   }
   if(flag==0)
   {
   	printf("Player Not found\n");	  
   }
}
	
	
	if(choice==2)   
   {
   
   char n[20];
   int ans,flag=0;
   printf("Enter to search Name: ");
   scanf("%s",&n);
	for(i=0;i<t;i++)
	{
		ans=strcmp(p[i].name,n);
			
		if(ans==0)
		{
			printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
			,p[i].j_no,p[i].name,p[i].runs,p[i].No_matches,p[i].wickets);		
			flag=1;	
			break;
			
			 printf("\n\n");
		}		
	
									
	}
	if(flag==0)
		{
		printf("Player Name Not Found\n");
		}
	}
	
}

void delet(player* p)
{
	int i,j,n,flag=0;
	printf("Enter to delete J_no: ");
   scanf("%d",&n);
   
   
   for(i=0;i<t;i++)
   {
   		if(p[i].j_no==n)
   		{
   			j=i;
   			
   			while(j<t-1)
   			{
   				p[j]=p[j+1];
   				j++;
			}
				t--;
				flag=1;
				break;
		}	
	
	}
	if(flag==0)
	{
		printf("Invalide J_Number\n");
	}
	
}
void update(player* p)
{
	int i,n,flag=0,choice;
	printf("Enter the update player num:");
	scanf("%d",&n);
	for(i=0;i<t;i++)
	{
		if(p[i].j_no==n)
		{
			printf("\n\n");
			printf("1:Name:\n2:Runs:\n3:No of Matches:\n4wickets:\nEnter your choice:");
			scanf("%d",&choice);
			printf(" upadte information Player:\n");
			
		if(choice==1)	
		{
			printf("Enter Player name:");
		scanf("%s",&p[i].name);
		}
		if(choice==2)
		{
		printf("Enter Player Runs:");
		scanf("%d",&p[i].runs);
		}
		if(choice==3)
		{
		printf("Enter the Number of Maches:");
		scanf("%d",&p[i].No_matches);
		}
		if(choice==4)
		{
		printf("Enter the Wikets:");
		scanf("%d",&p[i].wickets);
		}
		
		flag=1;
		break;
			
		}
		
	}
	if(flag==0)
	{
	
	printf("Invalide J_Number\n");
	}
}
void top_runs(player* p)
{
	int i,first,second,third,a=0,b=0,c=0;
    first=p[0].runs;
    second=p[0].runs;
    third=p[0].runs;
	
for(i=1;i<t;i++)
{
	if(first<p[i].runs)
	first=p[i].runs;
}
while(p[a].runs!=first)
{
	a++;
}
printf("\n first top runner: \n");
printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
		,p[a].j_no,p[a].name,p[a].runs,p[a].No_matches,p[a].wickets);
for(i=1;i<t;i++)
{
	if(first>p[i].runs && p[i].runs>second)
	second=p[i].runs;
}
while(p[b].runs!=second)
{
	b++;
}
printf("\n second top runner: \n");
printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
		,p[b].j_no,p[b].name,p[b].runs,p[b].No_matches,p[b].wickets);
 
 for(i=1;i<t;i++)
{
	if(second>p[i].runs && p[i].runs>third)
	third=p[i].runs;
}
while(p[c].runs!=third)
{
	c++;
}
printf("\n third top runner: \n");
printf("Jercy No:- %d || name:- %s || Runs:- %d\n || No.Matches:- %d || Wikets:- %d\n"
		,p[c].j_no,p[c].name,p[c].runs,p[c].No_matches,p[c].wickets);
			
} 


	
	
					



