#include <stdio.h> //Temel Komutlar için C Kütüphanesi
#include <limits.h> //Veri Tipleri'nin Deðer Aralýklarýný Öðrenmek için Gerekli Kütüphane
#include <float.h> //Float ile iþlemler kütüphanesi
#include <math.h> //C Matematiksel iþlemler kütüphanesi
#include <stdbool.h> //Boolean veri tipi kütüphanesi
#include <time.h> //rand() Fonksiyonu Kütüphanesi

#include <conio.h>  // getch()
#include <stdlib.h> // system()
#include <windows.h> // Sleep()

/*
//Celsius'u Fahrenheit'e Çevirme Fonksiyonu
int a;

float CelsiusToFahrenheit(int a) 
{
	return  ((a * ((float) 9 / 5)) + 32);
}
*/
/*
//Saniye Süreyi Saat-Dakika-Saniye'ye Dönüþtürme Fonksiyonu
int saniye;
int dakika;
int saat;

int SecondTransformation(int saniye)
{
	 
	saat = saniye / 3600;
	dakika = (saniye % 3600) / 60;
	saniye = saniye % 60;
	
	printf("Your Time in format (h/m/s): %d:%d:%d",saat,dakika,saniye);
}
*/
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

	//deðiþkenlerin tutabildikleri deðer aralýklarýný öðrenmek için aþaðýdaki kod kullanýlabilir
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
	
	//if-else
	/*
	float a = 0.00; //sýcaklýk girdisi

	printf("Please Enter your Temperature (in Celsius) (i.e. 27.2): ");
	scanf_s("%f", &a);


	if(a > 26.00)
	{
		printf("Your Temperature (%.2f) is Higher than the Room Temperature", a);
	}
	else if(a == 26.00)
	{
		printf("Your Tempreture (%.2f) is Equal the Room Temperature",a);
	}
	else
	{
		printf("Your Temperature (%.2f) is Lower than the Room Temperature",a);

	}
	*/
	/*
	//Celsius To Fahrenheit dönüþtürme (Fonksiyon Tanýmlayarak)
	float b;

	printf("Please Enter Your Celsius Tempature: ");
	scanf_s("%d",&a);
	
	b = CelsiusToFahrenheit(a);

	printf("Your Temperature's Fahrenheit Equal is: %.2f",b);
	*/
	/*
	//Saniye Süreyi Saat-Dakika-Saniye'ye Dönüþtürme
	
	printf("Please Enter Your Second Type Time: ");
	scanf("%d",&saniye);

	SecondTransformation(saniye);
	*/

	/*
	//Üçgen olduðunu doðrulama ve heron formülüyle alan hesaplama
	
	float a, b, c; //üçgenin kenarlarý 
	float alan;
	float s;

	printf("Please enter your Triangle's sides (in format a b c): ");
	scanf("%f %f %f",&a,&b,&c);
	
	s = (a + b + c) / 2;

	if ((a + b) > c)
	{
		if ((a + c) > b)
		{
			if ((b + c) > a)
			{
				alan = sqrt(s * (s - a) * (s - b) * (s - c));
				
				printf("Your Triangle's Area is %.2f", alan);
				
			}
			else
			{
				printf("\nThis is Not a Triangle !");
			}
		}
		else
		{
			printf("\nThis is Not a Triangle !");
		}
	}
	else
	{
		printf("\nThis is Not a Triangle !");
	}
	*/
	/*
	//km-per price-consume a göre maliyet tüketim ve drive mode belirleme
	float a; //kat edilen mesafe km cinsinde
	float b; //harcanan yakýt litre cindisinden
	float c; //yakýtýn litre baþý fiyatý tl cinsinden
	float d; //tüketim
	float e; //maliyet

	printf("Please Enter Your Distance Travelled in KM: ");
	scanf("%f", &a);
	printf("\nPlease Enter Your Fuel Consumed in liters: ");
	scanf("%f", &b);
	printf("\nPlease Enter Your Fuel Price Per Liter in TL: ");
	scanf("%f", &c);

	d = (b / a) * 100;

	e = b * c;

	if (d <= 5)
	{
		printf("Average Consume: %.2f L/100Km\nTotal Price: %.2f TL\nDrive Mode: Eco",d,e);
	}
	else if (5 < d && d <= 8)
	{
		printf("Average Consume: %.2f L/100Km\nTotal Price: %.2f TL\nDrive Mode: Normal", d, e);
	}
	else
	{
		printf("Average Consume: %.2f L/100Km\nTotal Price: %.2f TL\nDrive Mode: High Consume", d, e);
	}
	*/
	//if else te mantýksal öperatörler
	// && ve anlamýna gelir
	// || veya anlamýna gelir
	/*
	//Mantýksal Operatörler ve 1-0 (temel boolean) Veri Tipi
	int x; 
	int y;  
	int z;  

	x = 4 < 7; //doðruysa 1, yanlýþsa 0 döndürür
	y = (3 < 6) && (40 % 2 == 10); //bu 1 ve 0 larý mantýksal operatörlerlede kullanabiliriz
	z = (31 < 6) && (40 % 2 == 1) || (10 / 2 == 5); //Mantýksal operatorlerle birlikte kombinede kullanýlabýlýr (kontrole soldan baþlar)
	
	printf("x:%d y:%d z:%d",x,y,z);
	*/

	/*
	//Konoldan gýrýlen býr sayýnýn 3'e veya 7'ye bolunup bolunmedýgýný yazan program
	int a; //Kullanýcýdan Alýnan Sayý
	int b;
	int c;

	printf("Please Enter Your Number for Division to 3 or 7 Control: ");
	scanf("%d",&a);
	
	b = (a % 3 == 0);
	c = (a % 7 == 0);

	if (b == 1)
	{
		printf("The number you entered %d is divisible by 3\n",a);
	}
	else
	{
		printf("The number you entered %d is not divisible by 3\n",a);
	}
	
	if (c == 1)
	{
		printf("The number you entered %d is divisible by 7",a);
	}
	else
	{
		printf("The number you entered %d is not divisible by 7",a);
	}
	*/
	/*
	//Boolean veri tipi
	//Sadece 0 yada 1 tutabilir

	bool agirmi = true;
	bool hafifmi = false;

	printf("kosul1: %d, kosul2: %d",agirmi,hafifmi);
	*/
	
	//For döngüsü
	//for'un syntax'ý;
	// for(baþlangýç deðeri;dögü koþulu;sayacýn deðiþtirilmesi)
	//scope: yaþam alaný
	//i'nin scope'u for dögüsünün içinde
	//for da kullanýðýmýz deðiþkeni hep bu þekil local tanýmlamalýyýz
	//for dýþýndan müdahale edilememeli
	/*
	int iter1toplam = 0;
	int iter2toplam = 0;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i <= 10 ; i++)
	{
	
		printf("iterasyon %d\n", i);
		iter1toplam = iter1toplam + i; //bu þekilde fonksiyonun döndürdüðü i lerin toplamýný hesaplayabiliyoruz
		count1++; //bu þekilde fonksiyonun döndürdüðü i lerin sayýsýný tutabiliyoruz

	}
	
	printf("\nA iterasyon dizisi degerler toplami; %d\n\n", iter1toplam);
	printf("\nA iterasyon dizisi toplam deger sayisi; %d\n\n", count1);

	//bu þekilde local tanýmlandýðýnda farklý for döngülerinde ayný deðiþken kullanýlsa bile çakýþma olmaz
	
	for (int i = 10; i >= 1; i-=4)
	{

		printf("iterasyon %d\n", i);
		iter2toplam = iter2toplam + i;
		count2++;

	}
	
	printf("\nB iterasyon dizisi degerler toplami; %d\n ", iter2toplam);
	printf("\nB iterasyon dizisi toplam deger sayisi %d\n ", count2);
	*/
	/*
	//For örnek soru: 9-100 arasýndaki 7 nin katlarýný ve toplamýný ekrana yazdýrýn
	int count = 0;
	int toplam = 0;
	for (int i = 14; i <= 100; i += 7)
	{
		count++;
		printf("7'nin 9-100 arasi %d. kati: %d\n", count, i);
		toplam = toplam + i;
			
	}
	
	printf("7'nin 9-100 arasi katlari toplami: %d\n", toplam);
	*/
	
	//while döngüsü
	//for'dan farklý olarak sayac kullanýlmak zorundadýr sayac whýle'ýn dýsýna yazýlýr 
	// while'in içindeki koþul doðru olduðu sürece çalýþmaya devam eder
	/*
	int a = 0;
	
	while (a < 10)
	{
		a++;
		printf("%d\n", a);
	}
	*/
	/*
	//Do-While Döngüsü
	int sayac = 0;
	int a = 5;
	int b = 2;
	
	do {
		//kod bloðu
		printf("This do-while loop: iterasyon %d\n",sayac);
		sayac++;
	
	} while (a > b); //koþul

	//do-whýle ile whýle'ýn farký;
	//Whýlede kosul yanlýssa donguye hýc gýrmez ama 
	// do-whýleda yanlýs olsa býle en az býr defa donguye gýrer
	*/
	
	//rand() Fonksiyonu kullanýmý
	
	//rand() fonksiyonu bu þekilde baþlatýlmazsa program kapatýlýp açýlmadýðý sürece ayný sayýyý verir
	
	/*
	srand(time(NULL)); 
	
	int x = rand();
	int y = rand();

	printf("rastgele sayi: %d\n", x); //rastgele býr sayýyý yazar ekrana
	printf("rastgele 0-100 arasi sayi: %d", (x % 100)); //bu þekilde 0-100 arasý rastgele bir sayýyý ekrana yazar
	
	return 0;
	*/
	/*
	//Döngülerde break ve continue kullanýmý
	
	for(int i = 0; i <= 10; i++)
	{
		printf("%d\n",i);
		
		if (i == 5) 
			break; //burada break'i kullanarak i = 5 olduðunda for döngü koþulu daha tamamlanmamýþken dögüden çýkabiliyoruz
	}

	for (int i = 0; i <= 10; i++)
	{
		if (i == 5)
			continue; //burada continue'i kullanarak i = 5 olduðunda 5'i atlýyýp 6.indexten devam edecek

		printf("%d\n", i);

	}
	*/


	return 0;
}





