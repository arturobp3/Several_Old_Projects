//switch es un ciclo que puede funcionar commo el goto y como el if
//menu. El switch se utiliza para no anidar if
//si el switch no llevase break se ejecutarian todos los casos hasta donde este el break

#include <stdio.h>
#include <stdlib.h>

#define DELAY 150000

int menu(void);
void delay(void);

main(){
	
	while(1){
		
			switch(menu())
			{
				case 1:
				{
					puts("\nExecuting choice 1.");
					delay();
					break;
				}
				case 2:
				{
					puts("\nExecuting choice 2.");
					delay();
					break;
				}
				case 3:
				{
					puts("\nExecuting choice 3.");
					delay();
					break;
				}
				case 4:
				{
					puts("\nExecuting choice 4.");
					delay();
					break;
				}
				case 5:
				{
					puts("Exiting program now...");
					delay();
					return 0;
				}
				
				default:
				{
					puts("Invalid choice, try again.");
					delay();
				}
				
				
			}
	}
}

int menu(void)
{
	int reply;
	
	puts("\nEnter 1 for task A.");
	puts("Enter 2 for task B.");
	puts("Enter 3 for task C.");
	puts("Enter 4 for task D.");
	puts("Enter 5 to exit program.");
	
	scanf("%d", &reply);
	
	return reply;	
}

void delay(void){
	long x;
	for (x = 0; x < DELAY; x++){
		;}
}