#include<stdio.h>
int main(){
	int i;
	char str[100];
	int count = 0;	
	printf("Enter a String: ");
	scanf("%[^\n]",&str);	
	for ( i = 0;str[i] != '\0'; i++){
		if (str[i] == ' '){
			count++;
		}
	}	
	printf("Total number of Whitespaces are: %d",count);
	return 0;
}





