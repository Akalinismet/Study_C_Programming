#include <stdio.h> //Temel Komutlar i�in C K�t�phanesi
#include <limits.h> //Veri Tipleri'nin De�er Aral�klar�n� ��renmek i�in Gerekli K�t�phane
#include <float.h> //Float ile i�lemler k�t�phanesi
#include <math.h> //C Matematiksel i�lemler k�t�phanesi
#include <stdbool.h> //Boolean veri tipi k�t�phanesi
#include <time.h> //rand() Fonksiyonu K�t�phanesi

#include <conio.h>  // getch()
#include <stdlib.h> // system()
#include <windows.h> // Sleep()

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
	/*
	//Mant�ksal Operat�rler ve 1-0 (temel boolean) Veri Tipi
	int x; 
	int y;  
	int z;  

	x = 4 < 7; //do�ruysa 1, yanl��sa 0 d�nd�r�r
	y = (3 < 6) && (40 % 2 == 10); //bu 1 ve 0 lar� mant�ksal operat�rlerlede kullanabiliriz
	z = (31 < 6) && (40 % 2 == 1) || (10 / 2 == 5); //Mant�ksal operatorlerle birlikte kombinede kullan�lab�l�r (kontrole soldan ba�lar)
	
	printf("x:%d y:%d z:%d",x,y,z);
	*/

	/*
	//Konoldan g�r�len b�r say�n�n 3'e veya 7'ye bolunup bolunmed�g�n� yazan program
	int a; //Kullan�c�dan Al�nan Say�
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
	
	//For d�ng�s�
	//for'un syntax'�;
	// for(ba�lang�� de�eri;d�g� ko�ulu;sayac�n de�i�tirilmesi)
	//scope: ya�am alan�
	//i'nin scope'u for d�g�s�n�n i�inde
	//for da kullan���m�z de�i�keni hep bu �ekil local tan�mlamal�y�z
	//for d���ndan m�dahale edilememeli
	/*
	int iter1toplam = 0;
	int iter2toplam = 0;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i <= 10 ; i++)
	{
	
		printf("iterasyon %d\n", i);
		iter1toplam = iter1toplam + i; //bu �ekilde fonksiyonun d�nd�rd��� i lerin toplam�n� hesaplayabiliyoruz
		count1++; //bu �ekilde fonksiyonun d�nd�rd��� i lerin say�s�n� tutabiliyoruz

	}
	
	printf("\nA iterasyon dizisi degerler toplami; %d\n\n", iter1toplam);
	printf("\nA iterasyon dizisi toplam deger sayisi; %d\n\n", count1);

	//bu �ekilde local tan�mland���nda farkl� for d�ng�lerinde ayn� de�i�ken kullan�lsa bile �ak��ma olmaz
	
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
	//For �rnek soru: 9-100 aras�ndaki 7 nin katlar�n� ve toplam�n� ekrana yazd�r�n
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
	
	//while d�ng�s�
	//for'dan farkl� olarak sayac kullan�lmak zorundad�r sayac wh�le'�n d�s�na yaz�l�r 
	// while'in i�indeki ko�ul do�ru oldu�u s�rece �al��maya devam eder
	/*
	int a = 0;
	
	while (a < 10)
	{
		a++;
		printf("%d\n", a);
	}
	*/
	/*
	//Do-While D�ng�s�
	int sayac = 0;
	int a = 5;
	int b = 2;
	
	do {
		//kod blo�u
		printf("This do-while loop: iterasyon %d\n",sayac);
		sayac++;
	
	} while (a > b); //ko�ul

	//do-wh�le ile wh�le'�n fark�;
	//Wh�lede kosul yanl�ssa donguye h�c g�rmez ama 
	// do-wh�leda yanl�s olsa b�le en az b�r defa donguye g�rer
	*/
	
	//rand() Fonksiyonu kullan�m�
	
	//rand() fonksiyonu bu �ekilde ba�lat�lmazsa program kapat�l�p a��lmad��� s�rece ayn� say�y� verir
	
	/*
	srand(time(NULL)); 
	
	int x = rand();
	int y = rand();

	printf("rastgele sayi: %d\n", x); //rastgele b�r say�y� yazar ekrana
	printf("rastgele 0-100 arasi sayi: %d", (x % 100)); //bu �ekilde 0-100 aras� rastgele bir say�y� ekrana yazar
	
	return 0;
	*/
	/*
	//D�ng�lerde break ve continue kullan�m�
	
	for(int i = 0; i <= 10; i++)
	{
		printf("%d\n",i);
		
		if (i == 5) 
			break; //burada break'i kullanarak i = 5 oldu�unda for d�ng� ko�ulu daha tamamlanmam��ken d�g�den ��kabiliyoruz
	}

	for (int i = 0; i <= 10; i++)
	{
		if (i == 5)
			continue; //burada continue'i kullanarak i = 5 oldu�unda 5'i atl�y�p 6.indexten devam edecek

		printf("%d\n", i);

	}
	*/


	return 0;
}





