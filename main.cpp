#include <iostream>
#include <stdio.h>



int main(int argc, char** argv) {
	
	int height, space, i, j, k;
	
	
	printf("Merhaba,\nLutfen Yapilacak Islem icin Yukseklik Bilgisini giriniz: ");
	scanf("%d", &height);
	printf("Yukseklik Bilgisi: %d\n", height);
	printf("----------------------------------------------------------------\n");
	printf("\n");
	
	char karakter1=' ';
	char karakter2='*';
	
	for (i=0; (height-i)!=0; i++){
		
		space=2*(height-(i+1));	
		
		for(j=0;  j<2;  j++){
			
			
			
			
						
			for (k=0; k<i; k++) printf("%c", karakter1);	
				
			
			for (k=0; k<3; k++) printf("%c", karakter2);
		
			
			for (k=0; (k-space)!=0; k++) printf("%c", karakter1);
			
			
			for (k=0; k<3; k++) printf("%c", karakter2);
			
			for (k=0; k<i; k++) printf("%c", karakter1);
		
			
				
			
		}
		
		printf("\n");
		
	}
	
	
	
	return 0;
}
