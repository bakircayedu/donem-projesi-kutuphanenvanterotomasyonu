#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void DosyaYaz(FILE *dosya){
	int sayisi,kitapkodu,x,a;
	char kitapadi[50];
	char kitapkategori[50];
	int kitapuygun;
	int kitapsayfa;
	int kitapbasim;

	int i;
	dosya=fopen("kitapkayitlari.txt","a+");
	for(i=0; i<1;i++){
            for (a=0;a<99;a++) {


		printf("Lutfen Kitabin kategorisini giriniz:\n");
		printf("Roman icin = 1\n Masal icin=2\n Siir icin =3\n ");
		scanf("%d",&x);
		if (0<x && x<4) break;
	else
		printf("Lutfen gecerli bir kategori giriniz:\n\n");

	}
		if(x==1)
		strcpy(kitapkategori,"Roman");
		else if (x==2)
	    strcpy(kitapkategori,"Masal");
		else if (x==3)
	    strcpy(kitapkategori,"Siir");
	    else
	    printf("Lütfen geçerli bir kategori giriniz!");



		printf("Kitabin kodunu giriniz:\n");
		scanf("%d",&kitapkodu);
		printf("Kitabin adini giriniz:\n");
		scanf("%s",kitapadi);
		printf("Kitabin sayfa sayisini giriniz:\n");
		scanf("%d",&kitapsayfa);
		printf("Uygun Kitap sayisini giriniz:\n");
		scanf("%d",&kitapuygun);
		printf("Kitabin basim yilini giriniz:\n");
		scanf("%d",&kitapbasim);




fprintf(dosya,"%s %d %s %d %d %d\n",kitapkategori,kitapkodu,kitapadi,kitapsayfa,kitapuygun,kitapbasim);
        printf("KAYDETTIGINIZ KITABIN BILGILERI ASAGIDADIR\n");
        printf("-------------------------------------------\n");
        printf("Kitabin kategorisi : %s\n",kitapkategori);
		printf("Kitabin kodu : %d\n",kitapkodu);
		printf("Kitabin adi : %s\n",kitapadi);
		printf("Kitabin sayfa sayisi : %d\n",kitapsayfa);
		printf("Uygun Kitap sayisi : %d\n",kitapuygun);
		printf("Kitabin basim yili: %d\n",kitapbasim);

	}
	fclose(dosya);
}
void DosyaOku (FILE*dosya){
	int sayisi,kitapkodu;
	char kitapadi[50];
	char kitapkategori[50];
	int kitapuygun;
	int kitapsayfa;
	int kitapbasim;
	int i,x;
	dosya=fopen("kitapkayitlari.txt","r");
	printf("Listelemek istediginiz kitaplarin sayisini giriniz: ");
	scanf("%d",&x);
	for(i=0; i<x;i++){
		fscanf(dosya, "%s %d %s %d %d %d\n",kitapkategori,&kitapkodu,kitapadi,&kitapsayfa,&kitapuygun,&kitapbasim);
		printf("Kitabin kategorisi : %s\n",kitapkategori);
		printf("Kitabin kodu : %d\n",kitapkodu);
		printf("Kitabin adi : %s\n",kitapadi);
		printf("Kitabin sayfa sayisi : %d\n",kitapsayfa);
		printf("Uygun Kitap sayisi : %d\n",kitapuygun);
		printf("Kitabin basim yili: %d\n",kitapbasim);
		printf("\n");



	}
	fclose(dosya);
	}



int main() {




	FILE *deneme;

	int y = 0;
	int z;
    printf("KUTUPHANE SISTEMINE HOSGELDINIZ\n");
    printf("---------------------------------\n");
    printf("Lutfen yapmak istediginiz islemi tiklayiniz\n");
    printf("1-Kitap islemleri\n 2-Yazar islemleri \n 3-Kitap-yazar islemleri\n ");
    scanf("%d",&z);
    printf("\n\n");
    if(z==1){
        while(y != 3){

	printf("Kitap kayit icin 1 e basiniz\n");
	printf("Kitaplari listelemek icin 2 e basiniz\n");
	printf("Cikis icin 3 e basin\n");
	scanf("%d",&y);
	printf("\n");
	if(y == 1){
		DosyaYaz(deneme);
	}
	else if (y ==2) {

		DosyaOku(deneme);

	}

    }
    }
    else {
        printf("Suan maalesef bu islemi gerceklestiremiyoruz\n");
    }

return 0;










}
