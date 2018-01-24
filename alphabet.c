#include<stdio.h>
void main(){
	char ch;
	printf("please enter the character :");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
		printf("Alphabet");

	else
		printf("NO");
		
}
