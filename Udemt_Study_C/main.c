#include <stdio.h> //Temel Komutlar i�in C K�t�phanesi
#include <limits.h> //Veri Tipleri'nin De�er Aral�klar�n� ��renmek i�in Gerekli K�t�phane
#include <float.h> //Float ile i�lemler k�t�phanesi
#include <math.h> //C Matematiksel i�lemler k�t�phanesi

/*
//Celsius'u Fahrenheit'e �evirme Fonksiyonu
int a;

float CelsiusToFahrenheit(int a) 
{
	return  ((a * ((float) 9 / 5)) + 32);
}
*/
/*
//Saniye S�reyi Saat-Dakika-Saniye'ye D�n��t�rme Fonksiyonu
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
	//�2,147,483,648 � 2,147,483,647 aras� de�er tutabilir
	
	//float = 4 byte, %f
	// %.xf => bu sek�lde yaz�l�rsa noktadan sonra x say� gozukur
	//float a = 2.25648348;
	//printf("float sayi: %.2f",a);

	//double = 8 byte, %lf
	// %.xlf => bu sek�lde yaz�l�rsa noktadan sonra x say� gozukur

	//double vs float
	/*
	float:
	4 byte (32 bit) kaplar.
	Yakla��k 7 basamak (decimal digit) kesinlik sa�lar.
	Daha az yer kaplad��� i�in bellek k�s�tl� sistemlerde tercih edilir.

	double:
	8 byte (64 bit) kaplar.
	Yakla��k 15�16 basamak kesinlik sa�lar.
	Daha b�y�k say�lar ve daha hassas i�lemler i�in uygundur.
	*/

	//char = 1 byte, %c 
	//karakter tutar
	//char karakter = 'A';
	//printf("Harf: %c",karakter);

	//long = 32bit sistemlerde 4 bytes, 64bit sistemlerde 8 bytes
	//�9,223,372,036,854,775,808 � 9,223,372,036,854,775,807 aras� de�er tutabilir
	//long long int say� = 0; //�eklinde tan�mlanabilir
	// %lld kullan�l�r

	//de�i�kenlerin tutabildikleri de�er aral�klar�n� ��renmek i�in a�a��daki kod kullan�labilir
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

	//��kt�s�;
	int min : -2147483648
	int max : 2147483647
	long min : -2147483648
	long max : 2147483647
	long long min : -9223372036854775808
	long long max : 9223372036854775807
	double max : 1.797693e+308
	long double max : 1.797693e+308
	*/

	//scanf'deki de�ikeni tan�mlarken �n�ne koydu�umuz & bu i�aret �unu refere eder; 
	// x = de�i�ken, &x = memory (ram)'deki x'in adresi

	//Kullan�c�dan get ile string alma

	//char ad[20];

	//printf("Adinizi giriniz: ");
	//gets(ad);
	//printf("Girilen ad %s",ad);
	//gets sadece string okur
	
	/* exp:ya� hesaplama 
	
	int x;
	int age;
	printf("Please Enter Your Birth Year: ");
	scanf_s("%d", &x);
	
	age = (2025 - x);
	
	printf("Your age is %d",age);
	*/

	//C de math k�t�phanesi
	//buradak� fonks�yonlar; 
	//pr�ntf�n d�s�ndada kullan�lab�l�r
	//i�erlerine say� yerine de�i�kenler yaz�labilir 
	
	//printf("%d",abs(-5)); //mutlak de�er alma
	//printf("%.2lf",pow(2,5)); //�s alma (taban,�s)
	//printf("%.2f", floor(12.87)); //a�a�� yuvarlama
	//printf("%.2f", ceil(3.27)); //yukar� yuvarlama
	//printf("%.2f", sqrt(81)); //karek�k alma
	//printf("%.2f", exp(2)); //e �zeri alma (e^x),(e = 2.72) 
	
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
	float a = 0.00; //s�cakl�k girdisi

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
	//Celsius To Fahrenheit d�n��t�rme (Fonksiyon Tan�mlayarak)
	float b;

	printf("Please Enter Your Celsius Tempature: ");
	scanf_s("%d",&a);
	
	b = CelsiusToFahrenheit(a);

	printf("Your Temperature's Fahrenheit Equal is: %.2f",b);
	*/
	/*
	//Saniye S�reyi Saat-Dakika-Saniye'ye D�n��t�rme
	
	printf("Please Enter Your Second Type Time: ");
	scanf("%d",&saniye);

	SecondTransformation(saniye);
	*/

	/*
	//��gen oldu�unu do�rulama ve heron form�l�yle alan hesaplama
	
	float a, b, c; //��genin kenarlar� 
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
	//km-per price-consume a g�re maliyet t�ketim ve drive mode belirleme
	float a; //kat edilen mesafe km cinsinde
	float b; //harcanan yak�t litre cindisinden
	float c; //yak�t�n litre ba�� fiyat� tl cinsinden
	float d; //t�ketim
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
	//if else te mant�ksal �perat�rler
	// && ve anlam�na gelir
	// || veya anlam�na gelir

	
	return 0;
}