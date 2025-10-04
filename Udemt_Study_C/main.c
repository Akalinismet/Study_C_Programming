#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(void)
{

	
	//int = 4 byte, %d
	//–2,147,483,648 … 2,147,483,647 arasý deðer tutabilir
	
	//float = 4 byte, %f
	// %.xf => bu sekýlde yazýlýrsa noktadan sonra x sayý gozukur
	//float a = 2.25648348;
	//printf("float sayi: %.2f",a);

	//double = 8 byte, %lf
	// %.xlf => bu sekýlde yazýlýrsa noktadan sonra x sayý gozukur

	//double vs float
	/*
	float:
	4 byte (32 bit) kaplar.
	Yaklaþýk 7 basamak (decimal digit) kesinlik saðlar.
	Daha az yer kapladýðý için bellek kýsýtlý sistemlerde tercih edilir.

	double:
	8 byte (64 bit) kaplar.
	Yaklaþýk 15–16 basamak kesinlik saðlar.
	Daha büyük sayýlar ve daha hassas iþlemler için uygundur.
	*/

	//char = 1 byte, %c 
	//karakter tutar
	//char karakter = 'A';
	//printf("Harf: %c",karakter);

	//long = 32bit sistemlerde 4 bytes, 64bit sistemlerde 8 bytes
	//–9,223,372,036,854,775,808 … 9,223,372,036,854,775,807 arasý deðer tutabilir
	//long long int sayý = 0; //þeklinde tanýmlanabilir
	// %lld kullanýlýr

	//deðer aralýklarýný öðrenmek için aþaðýdaki kod kullanýlabilir
	/*
	printf("int min  : %d\n", INT_MIN);
	printf("int max  : %d\n", INT_MAX);

	printf("long min : %ld\n", LONG_MIN);
	printf("long max : %ld\n", LONG_MAX);

	printf("long long min : %lld\n", LLONG_MIN);
	printf("long long max : %lld\n", LLONG_MAX);

	printf("double max      : %e\n", DBL_MAX);
	printf("long double max : %Le\n", LDBL_MAX);

	return 0;

	//Çýktýsý;
	int min : -2147483648
	int max : 2147483647
	long min : -2147483648
	long max : 2147483647
	long long min : -9223372036854775808
	long long max : 9223372036854775807
	double max : 1.797693e+308
	long double max : 1.797693e+308
	*/

	//scanf'deki deðikeni tanýmlarken önüne koyduðumuz & bu iþaret þunu refere eder; 
	// x = deðiþken, &x = memory (ram)'deki x'in adresi

	//Kullanýcýdan get ile string alma

	//char ad[20];

	//printf("Adinizi giriniz: ");
	//gets(ad);
	//printf("Girilen ad %s",ad);
	//gets sadece string okur
	
	/* exp:yaþ hesaplama 
	
	int x;
	int age;
	printf("Please Enter Your Birth Year: ");
	scanf_s("%d", &x);
	
	age = (2025 - x);
	
	printf("Your age is %d",age);
	*/

	//C de math kütüphanesi
	//buradaký fonksýyonlar; 
	//prýntfýn dýsýndada kullanýlabýlýr
	//içerlerine sayý yerine deðiþkenler yazýlabilir 
	
	//printf("%d",abs(-5)); //mutlak deðer alma
	//printf("%.2lf",pow(2,5)); //üs alma (taban,üs)
	//printf("%.2f", floor(12.87)); //aþaðý yuvarlama
	//printf("%.2f", ceil(3.27)); //yukarý yuvarlama
	//printf("%.2f", sqrt(81)); //karekök alma
	//printf("%.2f", exp(2)); //e üzeri alma (e^x),(e = 2.72) 
	
	//Type Casting
	/*
	int x = 771;
	int y = 4;
	int d = 6;
	int g = 7;
	
	float z = (float) x / y;
	double c = (double) d / g;
	
	printf("%f\n",z);
	printf("%lf", c);
	*/
	
	







	return 0;
}