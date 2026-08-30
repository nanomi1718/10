#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
char c;
	FILE*fp;
	char input[100];
	
	fp= fopen("sample.txt","r");
	
	if(fp==NULL)
		printf("Failed to open file!\n");
		
	while((c=fgetc(fp)) != EOF)
	{
		putchar(c);
	}	
	
	fclose(fp);

}
