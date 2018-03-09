#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int fact= 1;
	
	printf("Faktoriyel hesabi yapilacak sayiyi girin:");
	scanf("%d",&a);
	while (a != 0){
		
	printf("%d\n",a);
	fact= fact *a;
	a--;

}
	printf("Faktoriyel: %d",fact);
	
	return 0;
}
