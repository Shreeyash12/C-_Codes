#include "cricketPlayer.h"
void storecricket(cricket *arr, int a)
{
    int i;
    for (i=0;i<a;i++)
    {
        printf("\n------------*STORE INFORMATION OF %d PLAYERS*-------------",(i+1));

        printf("\nEnter the jersy number of player here     :");
        scanf("%d",&arr[i].jersyno);
        fflush(stdin);

        printf("\nEnter the player name here                :");
        scanf("%[^\n]s",&arr[i].players_name);

        do
        {
            printf("\nEnter the age of player here              :");
            scanf("%d",&arr[i].age);
            fflush(stdin);

            if (arr[i].age<18||arr[i].age>50)
            {
                printf("Age must be between 18 and 50. Please enter a valid value.\n");
            }

        } while (arr[i].age < 18 || arr[i].age > 50);

        printf("\nEnter the team of player here             :");
        scanf("%[^\n]s", &arr[i].team);

        printf("\nEnter the runs of player here             :");
        scanf("%d", &arr[i].runs);

        printf("\nEnter the wickets of player here          :");
        scanf("%d", &arr[i].wickets);

        printf("\nEnter the matches that player played here :");
        scanf("%d", &arr[i].matches);
        fflush(stdin);

        printf("\nEnter the role of player here             :");
        scanf("%[^\n]s", &arr[i].role);
    }
}
void displaycricket(cricket *arr, int b)
{
	printf("\n-----------------*DISPLAY INFORMATION OF PLAYERS*----------------");
	int i;
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nJERSY NO\t| PLAYERS_NAME\t\t| PLAYERS_AGE\t| TEAM_NAME\t\t| RUNS_OF_PLAYER\t| WICKETS\t| MATCHES\t| ROLE\t\t | ");
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
    for(i=0;i<b;i++)
    {
    	printf("\n%d\t\t| %-22s| %-14d| %-22s| %-22d| %-14d| %-14d| %-15s| ",arr[i].jersyno,arr[i].players_name,arr[i].age,arr[i].team,arr[i].runs,arr[i].wickets,arr[i].matches,arr[i].role);
    
	}
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
}
void searchcricket(cricket *arr,int c)
{
	int i,no,found;
	int ch;
	char s;
	do
	{
		found=0;
		printf("\nDo you want to search the player? Y/N:");
		scanf(" %c",&s);
		if(s=='y'||s=='Y')
		{
			printf("\nEnter 1 to search by jersy number:");
			printf("\nEnter 2 to search by player name :");
			scanf("%d", &ch);
			if(ch==1)
			{
				printf("\nPlease enter the jersy number you want to search:");
				scanf("%d",&no);
				for(i=0;i<c;i++)
				{
				if(arr[i].jersyno==no)
				{
					printf("\n------------------------------------------------------------------------------------------------------------------------------------------");
	                printf("\nPLAYERS_NAME\t\t| PLAYERS_AGE\t| TEAM_NAME\t\t| RUNS_OF_PLAYER\t| WICKETS\t| MATCHES\t| ROLE\t\t | ");
	                printf("\n------------------------------------------------------------------------------------------------------------------------------------------");
	                printf("\n%-24s| %-14d| %-22s| %-22d| %-14d| %-14d| %-15s| ",arr[i].players_name,arr[i].age,arr[i].team,arr[i].runs,arr[i].wickets,arr[i].matches,arr[i].role);
	                printf("\n------------------------------------------------------------------------------------------------------------------------------------------");
    			
    	            found=1;
					break;	
				}
				}
			}
			if(ch==2)
			{   
			    fflush(stdin);
			    char p[20];
				printf("\nPlease enter the player name you want to serach:");
				scanf(" %[^\n]s",&p);
				for(i=0;i<c;i++)
				{
				if(strcasecmp(arr[i].players_name,p)==0)
				{
					printf("\n----------------------------------------------------------------------------------------------------------------------------------");
	                printf("\nJERSY NO\t| PLAYERS_AGE\t| TEAM_NAME\t\t| RUNS_OF_PLAYER\t| WICKETS\t| MATCHES\t| ROLE\t\t | ");
	                printf("\n----------------------------------------------------------------------------------------------------------------------------------");
	                printf("\n%d\t\t| %-14d| %-22s| %-22d| %-14d| %-14d| %-15s| ",arr[i].jersyno,arr[i].age,arr[i].team,arr[i].runs,arr[i].wickets,arr[i].matches,arr[i].role);
	                printf("\n----------------------------------------------------------------------------------------------------------------------------------");
    	            found=1;
    	            break;
				}
				}
			}
			if(found==0)
			{
				printf("\nPLAYER NOT FOUND PLEASE TRY AGAIN....");
			}
		}
		if(s=='n'||s=='N')
		{
			printf("\nEXIT FROM SEARCH.");
			break;
		}	
    }while(s=='y');
}
void updatecricket(cricket *arr,int d)
{
	int i,no;
	int ch;
	char s;
	for(i=0;i<d;i++)
	{
		printf("\nDo you want to update the player??? y/n:");
		scanf(" %c", &s);
		if(s=='y'|| s=='Y')
		{
			printf("\nEnter the jersy number that you want to update:");
			scanf("%d", &no);
			if(arr[i].jersyno==no)
			{
				printf("\nEnter 1 to update player name.");
				printf("\nEnter 2 to update age.");
				printf("\nEnter 3 to update team.");
				printf("\nEnter 4 to update runs.");
				printf("\nEnter 5 to update wicket.");
				printf("\nEnter 6 to update matches.");
				printf("\nEnter 7 to update role.");
				scanf("\n%d",&ch);
				if(ch==1)
				{
					printf("Enter the new player name:");
					scanf("%s",&arr[i].players_name);
				}
				else if(ch==2)
				{
					printf("Enter the new age:");
					scanf("%d",&arr[i].age);
				}
				else if(ch==3)
				{
					printf("Enter the new team :");
					scanf("%s",&arr[i].team);
				}
				else if(ch==4)
				{
					printf("Enter the new runs:");
					scanf("%d",&arr[i].runs);
				}
				else if(ch==5)
				{
					printf("Enter the new wicket:");
					scanf("%d",&arr[i].wickets);
				}
				else if(ch==6)
				{
					printf("Enter the new matches:");
					scanf("%d",&arr[i].matches);
				}
				else if(ch==7)
				{
					printf("Enter the new role:");
					scanf("%s",&arr[i].role);
				}
				else
				{
				printf("\nINVALID CHOICE");
				break;	
				}	
			}
		}
		if(s=='n'|| s=='N')
		{
			printf("\nEXIT");
			break;
		}
	    if((s=='n'||s=='N')&&(s=='y'||s=='Y'))
		{
			printf("\nINVALID CHOICE");
			continue;
		}
	}
		printf("\n---------------*UPDATED PLAYER INFORMATION*-------------");
		for(i=0;i<d;i++)
		{
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	    printf("\nJERSY NO\t|PLAYERS_NAME\t\t| PLAYERS_AGE\t| TEAM_NAME\t\t| RUNS_OF_PLAYER\t| WICKETS\t| MATCHES\t| ROLE\t\t | ");
	    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	    printf("\n%d\t\t| %-22s| %-14d| %-22s| %-22d| %-14d| %-14d| %-15s| ",arr[i].jersyno,arr[i].players_name,arr[i].age,arr[i].team,arr[i].runs,arr[i].wickets,arr[i].matches,arr[i].role);
	    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	    }
    
}
void deletecricket(cricket *arr, int *e)
{
	int i,no,found=0,j;
	int ch;
	char s;
	printf("\nEnter the jersy number to delete it details:");
	scanf("%d",&no);
	for(i=0;i<*e;i++)
	{
		if(arr[i].jersyno==no)
		{
			found=1;
			for(j=i;j<*e;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	if(found==1)
	{
		*e=*e-1;
	}
	else
	{
		printf("\nRECORD NOT FOUND");
	}
	for(i=0;i<*e;i++)
	{
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nJERSY NO\t|PLAYERS_NAME\t\t| PLAYERS_AGE\t| TEAM_NAME\t\t| RUNS_OF_PLAYER\t| WICKETS\t| MATCHES\t| ROLE\t\t | ");
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n%d\t\t| %-22s| %-14d| %-22s| %-22d| %-14d| %-14d| %-15s| ",arr[i].jersyno,arr[i].players_name,arr[i].age,arr[i].team,arr[i].runs,arr[i].wickets,arr[i].matches,arr[i].role);
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
	}
	printf("\nRECORD DELETED SUCCESFULLY.");
	
}



