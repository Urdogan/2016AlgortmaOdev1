
/* 
13253505
Nazým URDOÐAN
*/



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float fak_sayi,faktoriyel=1,kontrol,temp_sayi;
	int faktoriyel_i;
	
	char islem;
	
	unsigned int sayi;
	int i;
	unsigned int coll_sayac=0,coll_sayaceb=0,eb_i=0;
	int kontrol2=1;
	
	
	printf("Menu\n");
	printf("-----------------------\n");
	printf("1. Ters Faktoryel\n");
	printf("2. Collatz dongusu\n");
	printf("3. En Uzun Collatz\n");
	printf("4. Cikis\n");
	printf("-----------------------\n");
	printf("Yapmak istediginiz islemi giriniz..: ");
	scanf("%c",&islem);
	
	
	switch (islem){
		case '1':
			printf("Sayiyi giriniz..;");
			scanf("%f",&fak_sayi);
			
			temp_sayi=fak_sayi;	
			
			if (fak_sayi==1){
				printf("0 ! ve ya 1 ! ");
			}
			
			while ( fak_sayi>1 ){
				faktoriyel++;	
				fak_sayi=fak_sayi/faktoriyel;
				//printf("sayi %f %f \n",faktoriyel,fak_sayi);
				kontrol=0;
				if (fak_sayi<1 && fak_sayi>0){
					printf("Faktoriyel Yok");
					kontrol=1;
					break;
					}
	}		if (fak_sayi==0){
				printf("Faktoriyel Yok");
		
	}
	
			if (kontrol==0){
				faktoriyel_i=(int)faktoriyel;
				printf("%d ! ",faktoriyel_i);
		}
			break;
	
		case '2':
			printf("sayiyi giriniz..:");
			scanf("%d",&sayi);
		
				while (sayi>1){
					if (sayi%2==0){
						sayi=sayi/2;
						printf("%d,  ",sayi);
				}
					else {
						sayi=(sayi*3)+1;
						printf("%d,  ",sayi);
				}
		}
			break;
		
		
		case '3':
			printf("Sayi Giriniz..:");
			scanf("%d",&sayi);
			kontrol2=1;
			i=sayi;
			if (i<0){
			
				printf("Lutfen Pozitif Bir Sayi Giriniz\n");
				kontrol2=0;
			}
			for (i; i>1; i--){
				
				//printf("Denenen Collatz Sayisi:..  %d  \n",i); Denen sayýyý görmek için.
				sayi=i;
				coll_sayac=0;
				while (sayi>1){
					coll_sayac++;
					if (sayi%2==0){
						sayi=sayi/2;
				
						//printf("%d,  ",sayi);
				
			}
					else {
						sayi=(sayi*3)+1;
						//printf("%d,  ",sayi);
				
			}
				
		}	
			if (coll_sayac>coll_sayaceb){
				coll_sayaceb=coll_sayac;
				eb_i=i;
			}
			}
			
			if (kontrol2>0){
				printf("En Cok Dongu %d\n",coll_sayaceb);
				printf("Sayi %d\n",eb_i);
			}
			
			
			
			break;
			
		case '4':
			printf("Iyi Gunler...")	;
			break;
		
		default :
			printf("Gecersiz islem");
	}
		return 0;
	}
		
		
		
		
		

		
	
	
	
		
		
		
		
	
	

