#include <stdio.h>
#include <stdlib.h>

int menu(int Select){
	printf("\nWhat would you like to do?\n");
	printf("\n->1. Deposit\n->2. Withdrawal\n->3. See my Balance\n-4. Exit\n\n");
	printf("Select: ");
	scanf("%d", &Select);
	return Select;
}

void services(int loops){
	int Select, select, amount;
	FILE *f;
	while(Select!=4){
	     Select=menu(select);
	     if (Select==1){
	         printf("\nEnter your amount : $");
	         scanf("%d", &amount);
	         f=fopen("balance.txt","r+");
	         printf("Your Balance is : $%c\n", f);  
			 fclose(f);   
	    }
	     else if (Select==2){
		     printf("\nEnter your amount : $");
	         scanf("%d", &amount);
	         f=fopen("balance.txt","r+");
	         printf("Your Balance is : $%c\n", f);
	         fclose(f);
	    }
	     else if (Select==3){
	         f=fopen("balance.txt","r+");
	         printf("\nYour Balance is : $\n", f);
	         fclose(f);
	    }
	    else if (Select==4){
	         return;
	    }
	}
}

int main (){
	int tries=3, pin, PIN=1234, loops;
	printf("Enter your PIN : ", pin);
	scanf("%d", &pin);
	if (pin==PIN)
	     services(loops);
	else{
	     do{
		     tries=tries-1;
		     printf("Incorrect PIN\nPlease try again\n%d tries remaining\n\n", tries);
		     printf("Enter your PIN : ", pin);
		     scanf("%d", &pin);
	     }
	     while (pin!=PIN && tries!=1);
	     if (pin==PIN && tries==1)
	         services(loops);
		 else if (pin!=PIN && tries==1)
		     printf("\nYour account has been locked\n\n");
		 else
		     services(loops); 
	}

	return 0;
}
