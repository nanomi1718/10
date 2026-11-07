#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	char src[]= "The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst,src); // ( 대상, 원본 , 뒤에서 앞으로 복사 원본에서 대상으로)
	
	printf("copied string : %s\n", dst);

   }

