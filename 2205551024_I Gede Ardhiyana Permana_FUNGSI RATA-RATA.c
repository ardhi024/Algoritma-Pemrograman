#include <stdio.h>
float rata_rata_nilai (float a, float b, float c){
	float rata_rata;
	rata_rata = (a+b+c)/3;
	return rata_rata;
}
int main(){
	float nilai, nilai1, nilai2, nilai3;
	char nama;
	printf("Rata-Rata Nilai Siswa\n");
	printf("Masukkan nilai pertama : ", nilai1);
	scanf("%f", &nilai1);
	printf("Masukkan nilai kedua : ", nilai2);
	scanf("%f", &nilai2);
	printf("Masukkan nilai ketiga : ", nilai3);
	scanf("%f", &nilai3);
	
	nilai = rata_rata_nilai(nilai1, nilai2, nilai3);
	printf("Nilai rata-rata anda adalah : %.2f", nilai);
	return 0;
}

