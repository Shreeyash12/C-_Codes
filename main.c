#include <stdio.h>
#include <stdlib.h>
#include "cricketPlayer.c"
#include <string.h>
void main()
{
	int n=0,ch;
	cricket *div=NULL;
	printf("\t\t\t----------------***CRICKET_PLAYER_INFORMATION***--------------\n");
	do
	{
		printf("\n*******************************************************");
		printf("\n Menu: \n1)Store\n2)Display\n3)Search\n4)Update\n5)Delete\n6)EXIT\n");
		printf("\n*******************************************************");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		printf("\n*******************************************************");
		switch(ch)
		{
		case 1:
			printf("\nEnter the number of players information you want:");
			scanf("%d",&n);
			div = (cricket*)malloc(sizeof(cricket) * n);
			storecricket(div,n);
			break;
			
		case 2:
		 if(n==0)
		 {
			printf("\nNo information are currently stored.\n");
			
		 }
		 else
		 {
			displaycricket(div,n);
		 }	
		 break;
		 
		 case 3:
		 if(n==0)
		 {
			printf("\nNo information are currently stored.\n");
			
		 }
		 else
		 {
			searchcricket(div,n);
		 }	
		 break;
		 
		 case 4:
		 if(n==0)
		 {
			printf("\nNo information are currently stored.\n");
			
		 }
		 else
		 {
			updatecricket(div,n);
		 }	
		 break;
		 
		 case 5:
		 if(n==0)
		 {
			printf("\nNo information are currently stored.\n");
			
		 }
		 else
		 {
			deletecricket(div,&n);
			free(div);
		 }	
		 break;
		 case 6:
		 	printf("\nEXIT.");
		 	break;
		default:
			printf("\nINVALID CHOICE.");
		}
	}while(ch!=6);
		
}

