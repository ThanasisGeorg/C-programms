#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void RandomPasswordGenerator(int n){
	int i=0;
	int randomizer=0;
	srand((unsigned int)(time(NULL)));
	char numbers[]="0123456789";
	char letters[]="abcdefghijklmnopqrstuvwxyz";
	char LETTERS[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[]="!@#$%^&*?";
	char password[n];
	
	randomizer=rand()%4;
	
	for (i=0; i<n; i++){
     	if (randomizer==1){
         	password[i]=numbers[rand()%10];
         	randomizer=rand()%4;
         	printf("%c", password[i]);
        }
     	else if (randomizer==2){
         	password[i]=symbols[rand()%8];
         	randomizer=rand()%4;
         	printf("%c", password[i]);
        }
     	else if (randomizer==3){
         	password[i]=letters[rand()%26];
         	randomizer=rand()%4;
         	printf("%c", password[i]);
        }
     	else {
         	password[i]=LETTERS[rand()%26];
         	randomizer=rand()%4;
         	printf("%c", password[i]);
        }
    }
         
}

int main(){
	int n;
	do{
		printf("Give n : ");
		scanf("%d", &n);
	}
	while (n<15);
	RandomPasswordGenerator(n);
	printf("\n");
	
	system ("Pause");
	return 0;
}
