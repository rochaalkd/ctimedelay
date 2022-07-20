#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<windows.h>

void refresh();
void delay(int);
int main(){
	int i;
	printf("The value of crypto is 4500000\n");
	delay(10);
	printf("The value of crypto might have been changed.");
	printf("\n1.REFRESH\n");
	scanf("%d",&i);
	delay(3);
	system("cls");
	refresh();
	
	
		
		return 0;
	}


	
	



  
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void refresh(){
	int j,k,c;

	for(j=1;j<=5;j++){
		c=4500000+j;
		printf("\nThe current value of crypto is %d",c);
		delay(3);
		printf("\n1.REFRESH\n");
		scanf("%d",k);
		system("cls");
	
	}
}
