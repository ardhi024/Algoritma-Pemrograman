#include <stdio.h>
int luas_persegi_panjang (int p, int l) {
	int luas;
	luas = p*l;
	return luas;
}
int kll_persegi_panjang (int p, int l){
	int kll;
	kll = 2*(p+l);
	return kll;
}
int main(){
	int panjang, lebar, luas, keliling;
	printf("Menghitung Luas dan Keliling Persegi Panjang\n");
	printf("Masukkan panjang persegi panjang : ", panjang);
	scanf("%d", &panjang);
	printf("Masukkan lebar persegi panjang : ", lebar);
	scanf("%d", &lebar);
	
	luas=luas_persegi_panjang(panjang,lebar);
	keliling=kll_persegi_panjang(panjang,lebar);
	printf("luas persegi panjang adalah %d", luas);
	printf("\nvolume tabung adalah %d", keliling);
	return 0;
}
