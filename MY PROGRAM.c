#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct id{
	char name[20];
	int num[20];
	int rec;
}dt;


int main()
{
	printf("Enter Reciept Number :");
	scanf("%d",&dt.rec);
	fflush(stdin);
	printf("Enter Name :");
	scanf("%s",&dt.name);
	fflush(stdin);
	printf("Enter Cell # :");
	scanf("%d",&dt.num);
	system("cls");
	
	
	
	int choice;
	menu:
		{
			printf("\n\n\t\t\t***WELCOME TO DELIZIA RESTUARANT***\n\t\t\t=================================\n\n");
			printf("\t\tCategoreis of food :\n");
			printf("\n\t\t\t[1].Burgers\n\t\t\t[2].Sandwhiches\n\t\t\t[3].Broast and Tikka\n\t\t\t[4].Pizza\n\t\t\t[5].Beverages\n\t\t\t[6].Deserts\n\n\t\tCategories end\n\n\t\t\t[7].Generate Bill\n");
			
			printf("\n\nSelect your category :");
			scanf("%d",&choice);
		}
		
		switch(choice)
		{
			case 1 :
				system("cls");
				
					printf("\n\n\t\t\t***BURGERS***\n\t\t\t=============\n\n");
					printf("\n\t\t\t[1].Chicken Burger : Rs.320/-\n\t\t\t[2].Beef Burger : Rs.380/-\n\t\t\t[3].Chicken Cheesy Burger : Rs.350/-\n\t\t\t[4].Zinger Burger : Rs.280/-\n\t\t\t[5].Zinger + cheese Burger : Rs.330/-\n\t\t\t[6].Big Fire Burger : Rs.450/-\n\t\t\t");
					
					int ch1 = 0 ;
					printf("\n\nSelect your type of burger :");
					scanf("%d",&ch1);
					
					int qty1 = 0 ;
					printf("Enter Quantity :");
					scanf("%d",&qty1);
					
					float x1 = 0.0 ;  //total price of burgers
					switch(ch1)
					{
						case 1 :
							x1=(320)*(qty1);
							break;
						
							
						case 2 :
							x1=(380)*(qty1);	
							break;
							
							
						case 3 :
							x1=(350)*(qty1);
							break;
							
							
						case 4 :
							x1=(250)*(qty1);
							break;
						
							
						case 5 :
							x1=(330)*(qty1);
							break;
							
						
						case 6 :
							x1=(450)*(qty1);
							break;
						
					}
					
					system ("cls");
					
					goto menu;
					
			case 2 :
				system("cls");
				printf("\n\n\t\t\t***SANDWHICHES***\n\t\t\t================");
				printf("\n\t\t\t[1].Chicken Sandwhich : Rs.200/-\n\t\t\t[2].Club Sandwhich : Rs.250/-\n\t\t\t[3].Crispy Club Sandwhich : Rs.300/-\n\n");
				
				int ch2 = 0 ;
				printf("Select your type of Sandwhich :");
				scanf("%d",&ch2);
				
				int qty2 = 0 ;
				printf("\nEnter Quantity :");
				scanf("%d",&qty2);
				
				float x2 = 0.0 ;
				
				switch(ch2)
				{
					case 1 :
						x2 = (200)*(qty2);
						break;
					case 2:
						x2=(250)*(qty2);
						break;
						
					case 3 :
						x2 = (300)*(qty2);
						break;	
							
				}
				system ("cls");
				goto menu ;
				
				
			case 3 :
				system("cls");
				printf("\n\t\t\t***BROAST AND TIKKA***\n\t\t\t==========================\n");
				printf("\n\t\t\t[1].Chicken Crispy Broat : Rs.150\n\t\t\t[2].Chiecken Leg Tikka : Rs.220/-\n\t\t\t[3].Chiecken Chest Tikka : Rs.250/-\n\t\t\t[4].Chicken Malai Tikka : Rs.270/-");
				
				int ch3 = 0 ;
				printf("\nSelect your type of Tikka or Broast :");
				scanf("%d",&ch3);
				
				int qty3 = 00 ;
				printf("Enter Quantity :");
				scanf("%d",&qty3);
				
				float x3 = 0.0 ;
				switch(ch3)
				{
					case 1 :
						x3 = (150)*(qty3);
						break;
						
					case 2 :
						x3 = (220)*(qty3);
						break;
						
					case 3:
						x3 = (250)*(qty3);
						break;
						
					case 4:
						x3 = (270)*(qty3);
						break;			
				}
				
				system("cls");
				goto menu ;
				
			case 4 :
				system("cls");
				printf("\n\n\t\t\t***PIZZA***\n\t\t\t================");
				printf("\n\n\t\tNOTE : All pizza available are in cheese + chicken flavour ;\t THANK YOU\n\n");
				printf("\n\n\n\t\t\t[1].Small pan Pizza : Rs.200/-\n\t\t\t[2].Regular Pizza : Rs.350/-\n\t\t\t[3].Medium Pizza : Rs.550/-\n\t\t\t[4].Large Pizza : Rs.800/-\n")	;
				
				int ch4 = 00 ;
				printf("Select your size of pizza :");
				scanf("%d",&ch4);
				
				int qty4 = 0 ;
				printf("Enter quantity :");
				scanf("%d",&qty4);
				float x4 = 0.0000 ;
				
				switch(ch4)
				{
					case 1 :
						x4 = (200)*(qty4);
						break;
						
					case 2 :
						x4 = (350)*(qty4);
						break;
						
					case 3 :
						x4 = (550)*(qty4);
						break;
						
					case 4 :
						x4 = (800)*(qty4);
						break;			
				}
				system("cls");
				goto menu ;
			
			case 5 :
				system("cls");
				printf("\n\n\t\t\t***BEVERAGES***\n=================\n\n");
				printf("\t\tNOTE : All beverages availavel are of RS.60/- and are in 350 ml pack.\n\n");
				printf("\n\t\t\t[1].COKE\n\t\t\t[2].PEPSI\n\t\t\t[3].7up\n\n");
				
				int ch5 = 0 ;
				printf("Select your drink :");
				scanf("%d",&ch5);
				
				int qty5 = 0 ;
				printf("Enter Quantity :");
				scanf("%d",&qty5);
				
				float x5 = 0.0 ;
				x5 = (60)*(qty5);
				 
				system ("cls");
				goto menu ;
				
			case 6 :
				system("cls");
				printf("\n\n\t\t\t***DESERTS***\n\t\t\t===================\n");
				printf("\n\t\tNOTE : Only Ice creams are available as deserts and each cup of RS.150/-");
				printf("\n\n\t\t\t[1].Chocolate\n\t\t\t[2].Dark Chocolate + chips\n\t\t\t[3].Vanilla\n\t\t\t[4].Strawberry\n\n");
				
				int ch6 = 0 ;
				printf("Select your type of Ice cream :");
				scanf("%d",&ch6);
				
				int qty6 = 0 ;
				printf("Enter Quantity :");
				scanf("%d",&qty6);
				
				float x6 = 0.0 ;
				
				x6 = (150)*(qty6);
				
				system("cls");
				goto menu ;	 
				
			case 7 :
				
				system("cls");
				
				printf("\n\n\t\t\tDELIZIA RESTUARANT\n\t\t\t====================\n\n");
				printf("\t\t\t\tFinal Recipt\n\t\t\t\t-------------\n\n");
				printf("\t\t\tReceipt Number : %d",dt.rec);
				printf("\n\t\t\tName : %s",dt.name);	
				printf("\n\t\t\tCell # : %d",dt.num);
				printf("\n\n\t\t\tITEMS LIST\n\t\t\t=============\n");
				printf("\n\t\tBurger                     : %d \t\tQuantity : %d \t Price   : %.2f ",ch1,qty1,x1);
				printf("\n\t\tSandwhich                  : %d \t\tQuantity : %d \t Price   : %.2f ",ch2,qty2,x2);
				printf("\n\t\tBroast and Tikka           : %d \t\tQuantity : %d \t Price   : %.2f ",ch3,qty3,x3);
				printf("\n\t\tPizza                      : %d \t\tQuantity : %d \t Price   : %.2f ",ch4,qty4,x4);
				printf("\n\t\tBeverages                  : %d \t\tQuantity : %d \t Price   : %.2f ",ch5,qty5,x5);
				printf("\n\t\tDeserts                    : %d \t\tQuantity : %d \t Price   : %.2f ",ch6,qty6,x6);
				printf("\n\n\t\t\t================================================\n\n");
				printf("\n\n\t\tTotal Items   : %d ",qty1+qty2+qty3+qty4+qty5+qty6);
				printf("\n\n\t\tTotal Amount : %.2f",x1+x2+x3+x4+x5+x6);
				printf("\nGST will be taken of 13 percent\n\n");
				float y = 0.0;
				y=(x1+x2+x3+x4+x5+x6)*0.13;
				float paid = 0.0 ;
				printf("Costumer Paid :");
				scanf("%f",&paid);
				printf("\n\t\t\tTotal GST         : %.2f ",y);
				printf("\n\n\t\t\tCostumer Paid : %.2f" , paid );
				float z = (paid) - (x1+x2+x3+x4+x5+x6+y);
				printf("\n\n\t\t\tRefund        : %.2f" ,z);
				printf("\n\n\t\t\tNet Amount    : %.2f",x1+x2+x3+x4+x5+x6+y);
				printf("\n\n\t\t\t\t\t\tThank You...!\t\tEnjoy your day :)");
				
				
				
					
				
				
				
						
		}
	

	
	
	
	return 0 ;
}
