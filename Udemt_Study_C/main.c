#include <stdio.h> //Temel Komutlar i�in C K�t�phanesi
#include <limits.h> //Veri Tipleri'nin De�er Aral�klar�n� ��renmek i�in Gerekli K�t�phane
#include <float.h> //Float ile i�lemler k�t�phanesi
#include <math.h> //C Matematiksel i�lemler k�t�phanesi
#include <stdbool.h> //Boolean veri tipi k�t�phanesi
#include <time.h> //rand() Fonksiyonu K�t�phanesi

#include <conio.h>  // getch()
#include <stdlib.h> // system()//Standart Type Converion k�t�phanesi
#include <windows.h> // Sleep()

#include <ctype.h> //Standart Type Converion k�t�phanesi

#define SIZE 50 //Type conversion �r i�in tan�mlama
/*
//Static �r fonksiyon prototipleri
void artirNormal(void);
void artirStatic(void);
*/

/*
* ----------------------------------------------------------------------------------------------------------
//Celsius'u Fahrenheit'e �evirme Fonksiyonu
int a;

float CelsiusToFahrenheit(int a) 
{
	return  ((a * ((float) 9 / 5)) + 32);
}
----------------------------------------------------------------------------------------------------------
*/
/*
----------------------------------------------------------------------------------------------------------
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
----------------------------------------------------------------------------------------------------------
*/
int main(void)
{
	/*
	----------------------------------------------------------------------------------------------------------
	//C'de Anahtar Kelimeler

	auto
	double
	int struct
	break
	else
	long
	switch
	case
	enum
	register
	typedef
	char 
	extern
	return
	union
	const
	float
	short
	unsigned
	continue
	goto
	sizeof
	volatile
	do
	if
	static
	while

	Bu kelimlerin C dilinde �zel anlam� olan kar��l�klar� vard�r 
	De�i�ken isimlendirirken kullan�lmamal�d�rlar 
	----------------------------------------------------------------------------------------------------------
	*/
	
	//int = 4 byte, %d
	//�2,147,483,648 � 2,147,483,647 aras� de�er tutabilir
	//----------------------------------------------------------------------------------------------------------
	//float = 4 byte, %f
	// %.xf => bu sek�lde yaz�l�rsa noktadan sonra x say� gozukur
	//float a = 2.25648348;
	//printf("float sayi: %.2f",a);
	//----------------------------------------------------------------------------------------------------------
	//double = 8 byte, %lf
	// %.xlf => bu sek�lde yaz�l�rsa noktadan sonra x say� gozukur
	//----------------------------------------------------------------------------------------------------------
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
	//----------------------------------------------------------------------------------------------------------
	//char = 1 byte, %c 
	//karakter tutar
	//char karakter = 'A';
	//printf("Harf: %c",karakter);
	//----------------------------------------------------------------------------------------------------------
	//long = 32bit sistemlerde 4 bytes, 64bit sistemlerde 8 bytes
	//�9,223,372,036,854,775,808 � 9,223,372,036,854,775,807 aras� de�er tutabilir
	//long long int say� = 0; //�eklinde tan�mlanabilir
	// %lld kullan�l�r
	//----------------------------------------------------------------------------------------------------------
	//�zel degisken tipleri
	/*
	Type Qualifers;
	const
	const int a = 5; seklinde tan�mland���nda a'nin degeri program�n �al��ma s�resi boyunca asla de�i�mez	
	----------------------------------------------------------------------------------------------------------
	volatile
	volatile int a; sekl�nde tan�mland�g�nda a de�ikeni ile ilgili hi� bir komut IDE'nin yapt��� optimizyona u�ramayacakt�r
	(pointerlar konusunda i�e yarayacak)
	----------------------------------------------------------------------------------------------------------
	restrict 
	(sadece pointer de�i�kenlerin �n�ne konabilir)
	(pointer optimazyonu i�in derleyiciye g�venle optimze edebilirsin der)
	Normalde bir bellek alan� birden fazla pointer de�i�ken taraf�ndan referans g�sterilebilir.
	Bu durumda derleyici, o bellek alan� �zerinde optimizasyon yapamaz.
	E�er pointer de�i�keni restrict olarak tan�mlarsak, ilgili bellek alan�n�n sadece, 
	o pointer taraf�ndan y�netilmesini (referans g�sterilmesini) garanti altina almi� oluruz.
	E�er derleyici bir bellek alan�n�n tek bir pointer de�i�ken taraf�ndan y�netildi�ini bilirse,
	bu alan �zerinde optimizasyona gidebilir. 
	
	int * restrict ptr1;
	int * restrict ptr2;
	
	*ptr1 = *ptr1 + 2;
	*ptr2 = *ptr2 + 2;
	*ptr1 = *ptr1 + 10;

	burada derleyici prt1 de�i�keninin ba�ka hi� bir pointer de�i�ken taraf�ndan de�i�tireyece�ini bildi�i i�in;
	1 ve 3. sat�rdaki ifade derleyici taraf�ndan birle�tirilerek a�a��daki gibi y�r�t�lmesinin sa�layacakt�r;
	
	*ptr1 = *ptr1 + 12;
	*ptr2 = *ptr2 + 2;

	Bu optimizasyon ile kodumuz 2 sat�ra inmi�tir.Sonu� olarak program�m�z �al���rken i�lemciye bir komut az
	g�nderdi�i i�in daha h�zl� �al��acakt�r.
	----------------------------------------------------------------------------------------------------------
	_Atomic
	C11 Standard�nda ge�erlidir
	Tan�mlanan de�i�kenler birden fazla thread (kanal) taraf�ndan kullan�lmaya m�sait hale gelecektir
	----------------------------------------------------------------------------------------------------------
	Storage Classes (Bellek Depolama S�n�flar�);
	extern
	static
	auto
	register
	----------------------------------------------------------------------------------------------------------
	extern
	extern ile bir dosyada tan�mlanan global de�i�kenlerin di�er dosyada kullanbilmesini sa�lar
	�r: main.c subfolder.h ayn� program�n bir par�as�ysa main.c de veya subfolder.h'ta 
	tan�ml� bir de�i�ken di�er dosyadada kullan�labilmektedir
	
	//subfolder.h ta tan�ml� sayi de�i�keni olsun
	int sayi = 5;
	//main.c de bu �ekilde ayn� say� deger�n� kullanab�l�yoruz
	extern int sayi;
	//bu �ekilde tan�mland���nda sayi de�i�keni iki dosyada ayn� bellek alan�n� ifade eder
	//bu �ekilde tan�mlamam�� olsak farkl� bellek alanlar� kullan�l�rd�
	----------------------------------------------------------------------------------------------------------
	register
	Baz� programlarda �ok kullan�lan de�i�kenlerin h�zl� i�lem g�rmesini isteyebiliriz
	De�i�ken de�erleri genellikle bellekte depolan�rlar fakat belle�e eri�im yava�t�r
	Bu sebeple daha h�zl� i�lem yapmak i�in de�i�kenlerimizin bellekte de�il CPU �zerindeki 
	Register (Yazma�)'larda tutulmas� isteyebiliriz Bunu yapmak i�in register'� kullan�r�z
	//�r:
	register int z = 5;
	printf("registerda tutulan sayi: %d",z);

	Uyar�: CPU'daki registerlar�n say�s� s�n�rl�d�r (kullan�lan cihaza g�re de�i�ebilir ama yinede s�n�rl�d�r)
	Bu y�zden register sadece gerekli g�r�ld���nde kullan�lmal�d�r, e�er �ok say�da register tan�mlamas� yap�p
	CPU'nun limitine ula��rsak limiti a�an de�i�kenler normal de�i�ken gibi i�lem g�r�rler

	Uyar�2: register de�i�kenleri pointerlar ile kullanamay�z, ��nk� pointer de�i�kenler bellek adresi tutmak i�in
	tasarlanm��t�r. Register de�i�kenler ise registerlarda tutulduklar� i�in bellek adresleri yoktur
	//�r:
	//register tan�mlanmas�
	register int x = 4;
	//register olarak tan�mlanm�� de�i�enin bellek adresine & ile eri�emeyiz
	//Dolay�s�yla a�a��daki sat�r derlenmede hata verir
	int *pointer = &x;

	printf("%d\n",*pointer);
	return 0;
	//Bu koda derlendi�inde hata verir ��kt� almak istiyorsak ba�taki register tan�mlamas�n� kald�rmam�z gerekir
	----------------------------------------------------------------------------------------------------------
	static
	bununla tan�mlanan de�i�kenler de�erlerini kaybetmezler
	//�r:
	//fonksiyon prototipleri mainini �st�nde tan�ml�
	*/
	/*
	printf("-----------------------------\n");
	printf("Normal Degisken ornegi\n");
	printf("-----------------------------\n");
	artirNormal();
	artirNormal();
	artirNormal();

	printf("-----------------------------\n");
	printf("Static Degisken ornegi\n");
	printf("-----------------------------\n");
	artirStatic();
	artirStatic();
	artirStatic();
	*/
	//fonksiyon tan�mlar�n mainin d���nda altta

	//Yaz�lan kodun ��kt�s�
	/*
	-----------------------------
	Normal Degisken ornegi
	-----------------------------
	Normal: 0
	Normal: 0
	Normal: 0
	-----------------------------
	Static Degisken ornegi
	-----------------------------
	Static: 0	
	Static: 1
	Static: 2
	----------------------------------------------------------------------------------------------------------
	auto
	bu kelime ba��na eklendi�i de�i�kenin de�i�ken tan�m�ndaki de�i�kenin 
	ge�i�i bir s�re zarf�nda kullan�laca��n� s�yler

	Eskinden (10 y�llar �nce) belli bir kod blo�unda ge�erli yerel de�i�ken tan�mlaman�n
	tek yolu auto yu kullanmakt� ama �imdi bunu derleyiciler sanki auto varm�� gibi alg�lay�p yap�yor

	auto nun sadece c de anahtar kelime oldu�unu bilmek yeterlidir kodlarda kullan�lmayacak
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
	*/
	//----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/

	//Veri Tiplerini Bellekte kaplad��� alan� ��renme
	/*
	char charDegisken = 'X';
	short int shortIntSayi = 45;
	int intSayi = 24;
	long int longIntSayi = 151;
	long long int longLongIntSayi = 1654564;
	float floatSayi = 2.3;
	double doubleSayi = 7.77;
	long double longDoubleSayi = 3.14159;

	printf("char tipi bellek alani: %lu byte\n", sizeof(charDegisken));
	printf("short int tipi bellek alani: %lu byte\n", sizeof(shortIntSayi));
	printf("int tipi bellek alani: %lu byte\n", sizeof(intSayi));
	printf("longIntSayi tipi bellek alani: %lu byte\n", sizeof(longIntSayi));
	printf("longLongIntSayi tipi bellek alani: %lu byte\n", sizeof(longLongIntSayi));
	printf("floatSayi tipi bellek alani: %lu byte\n", sizeof(floatSayi));
	printf("doubleSayi tipi bellek alani: %lu byte\n", sizeof(doubleSayi));
	printf("longDoubleSayi tipi bellek alani: %lu byte\n", sizeof(longDoubleSayi));
	----------------------------------------------------------------------------------------------------------
	*/

	//scanf'deki de�ikeni tan�mlarken �n�ne koydu�umuz & bu i�aret �unu refere eder; 
	// x = de�i�ken, &x = memory (ram)'deki x'in adresi
	//----------------------------------------------------------------------------------------------------------
	//Kullan�c�dan get ile string alma

	//char ad[20];

	//printf("Adinizi giriniz: ");
	//gets(ad);
	//printf("Girilen ad %s",ad);
	//gets sadece string okur
	//----------------------------------------------------------------------------------------------------------
	/* exp:ya� hesaplama 
	
	int x;
	int age;
	printf("Please Enter Your Birth Year: ");
	scanf_s("%d", &x);
	
	age = (2025 - x);
	
	printf("Your age is %d",age);
	*/
	//----------------------------------------------------------------------------------------------------------
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
	
	/*
	----------------------------------------------------------------------------------------------------------
	//Type Casting
	//Type casting operat�r� b�lme i�leminden �nceliklidir
	int x = 771;
	int y = 4;
	int d = 6;
	int g = 7;
	
	float z = (float) x / y;
	double c = (double) d / g;
	
	printf("%f\n",z);
	printf("%lf", c);
	----------------------------------------------------------------------------------------------------------
	//Type Converison (Tip �evrimleri)
	stringden floata �evrimek gibi a��r d�n���mler i�in kullan�l�r
	bu i� i�in �zelbaz� fonksiyonlar kullan�lmaktad�r
	bu fonksiyonlar "stdlib.h" ve "ctype.h" isimli standart k�t�phaneler alt�nda bulunmaktad�r
	bu k�t�phanede en �ok kullan�lan fonksiyonlar;
	----------------------------------------------------------------------------------------------------------
	atoi
	stdlib.h ile gelen bu fonksiyon kendisine parametre olarak gelen karekter dizisini tamsay�ya �evirir
	ve bu tam say�y� return ile d�nd�r�r
	//Fonksiyon prototipi
	int atoi(const char *);
	----------------------------------------------------------------------------------------------------------
	atof
	kendisine parametre olarak gelen karekter dizisini ondal�k say�ya �evirir
	ve say�y� return ile d�nd�r�r
	//fonksiyon imzas�
	int atof(const char *);
	----------------------------------------------------------------------------------------------------------
	isDigit
	ctype.h ile gelen bu fonksiyon kendisine parametre olarak gelen karekterterin say�sal de�er olup olmad���n�
	bulur e�er karakter '0','1','2','3','4','5','6','7','8','9' de�erlerinden birine sahipse bu fonksiyon 1 de�eri
	d�nd�r�r e�er sahip de�ilse 0 de�eri d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	//Bu Fonksiyonlar�n kullan�lm�na �rnek
	
	//main ist�nde SIZE tan�mlamas�
	char metin[SIZE];

    char sayistr1[] = "256";
    char sayistr2[] = "134";
    char sayistr3[] = "9.25";
    char sayistr4[] = "3.75";

    // ilk iki karakter dizisini atoi ile tam say�ya �evirip topluyoruz
    int sayi1 = atoi(sayistr1);
    int sayi2 = atoi(sayistr2);
    int toplam1 = sayi1 + sayi2;
    printf("Toplam 1 -> %d\n", toplam1);

    // 3 ve 4. karakter dizisini atof ile ondal�k say�ya �evirip topluyoruz
    float sayi3 = atof(sayistr3);
    float sayi4 = atof(sayistr4);
    float toplam2 = sayi3 + sayi4;
    printf("Toplam 2 -> %.2f\n", toplam2);

    // isdigit kullan�m�
    printf("Please Enter String Series: ");
    fgets(metin, SIZE, stdin);

    printf("Your integers from your entered string series: ");
    for (int i = 0; i < SIZE; i++)
    {
        if (metin[i] == '\0')
            break;
        if (isdigit((unsigned char)metin[i]))   
			// �nemli: unsigned char d�n��t�r
			//isdigit()�e verilen de�er unsigned char olmal�, aksi takdirde 
			//negatif char de�erlerinde tan�ms�z davran�� olabilir.
            printf("%c", metin[i]);
    }
    printf("\n");
	----------------------------------------------------------------------------------------------------------
	Di�er Type Conversion Fonksiyonlar�
	----------------------------------------------------------------------------------------------------------
	isalpha
	ctype.h k�t�phanesiyle gelir
	parametre olarak giren b�r karekter�n alfabedek� harflerden b�r� olup olmad�g�n� kontrol eder
	eger gelen parametre bir harfse 0'dan farkl� b�r de�er dondurur
	eger deg�lse 0 de�erini d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	isalnum
	ctype.h k�t�phanesiyle gelir
	kendisine parametre olarak gelen bir alfanumerik bir ifade olup olmad���n� bulur
	e�er karekter bir harfe kar��l�k geliyorsa veya '0','1','2','3','4','5','6','7','8','9' de�erlerinden 
	birine sahipse; bu fonksiyon s�f�rdan farkl� b�r deger dondurur, Aksi taktride 0 de�erini d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	islower
	ctype.h k�t�phanesiyle gelir
	kendisine parametre olarak gelen bir harfin k���k harf olup olmad���n� kontrol eder; e�er k���k harf ise
	0'dan farl� bir de�er d�nd�r�r; e�er de�ilse 0 de�erini d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	isupper
	ctype.h k�t�phanesiyle gelir
	kendisine parametre olarak gelen bir harfin b�y�k harf olup olmad���n� kontrol eder; e�er b�y�k harf ise
	0'dan farl� bir de�er d�nd�r�r; e�er de�ilse 0 de�erini d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	tolower
	ctype.h k�t�phanesiyle gelir
	kendisine parametre olarak gelen bir harfin k���k harf olup olmad���n� kontrol eder; e�er k���k harf ise
	ayn� de�eri geri d�nd�r�r; e�er b�y�k harf ise k���k harfe �evirir ve bu de�eri geri d�nd�r�r
	----------------------------------------------------------------------------------------------------------
	toupper
	ctype.h k�t�phanesiyle gelir
	kendisine parametre olarak gelen bir harfin b�y�k harf olup olmad���n� kontrol eder; e�er b�y�k harf ise
	ayn� de�eri geri d�nd�r�r; e�er k���k harf ise b�y�k harfe �evirir ve bu de�eri geri d�nd�r�r
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	//if else te mant�ksal �perat�rler
	// && ve anlam�na gelir
	// || veya anlam�na gelir
	/*
	----------------------------------------------------------------------------------------------------------
	//Mant�ksal Operat�rler ve 1-0 (temel boolean) Veri Tipi
	int x; 
	int y;  
	int z;  

	x = 4 < 7; //do�ruysa 1, yanl��sa 0 d�nd�r�r
	y = (3 < 6) && (40 % 2 == 10); //bu 1 ve 0 lar� mant�ksal operat�rlerlede kullanabiliriz
	z = (31 < 6) && (40 % 2 == 1) || (10 / 2 == 5); //Mant�ksal operatorlerle birlikte kombinede kullan�lab�l�r (kontrole soldan ba�lar)
	
	printf("x:%d y:%d z:%d",x,y,z);
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
	//Konsoldan g�r�len b�r say�n�n 3'e veya 7'ye bolunup bolunmed�g�n� yazan program
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	*----------------------------------------------------------------------------------------------------------
	//Boolean veri tipi
	//Sadece 0 yada 1 tutabilir

	bool agirmi = true;
	bool hafifmi = false;

	printf("kosul1: %d, kosul2: %d",agirmi,hafifmi);
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	
	//rand() Fonksiyonu kullan�m�
	
	//rand() fonksiyonu bu �ekilde ba�lat�lmazsa program kapat�l�p a��lmad��� s�rece ayn� say�y� verir
	
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	Aritmetik Artt�rma ve Azaltma Operat�rleri (++ ve --)
	
	++ operat�r�
	1 artt�r�r
	sayi++ => �nce de�er atamas� yap�l�r sonra artt�r�l�r, 1 artt�r�r 
	++sayi => �nce artt�r�l�r sonra de�er atamas� yap�l�r, 1 artt�r�r

	-- operat�r�
	sayi-- => �nce de�er atamas� yap�l�r sonra eksiltilir, 1 eksiltir
	--sayi => �nce eksiltilir sonra de�er atamas� yap�l�r, 1 eksiltir
	----------------------------------------------------------------------------------------------------------
	Mant�ksal Operat�rler (Not(!),And(&&),Or(||),XOR(^))
	|----------------------------------------------------------------------------------------|
	| X | Y | NOT X (!X) | NOT Y (!Y) | X and Y (X && Y) | X or Y (X || Y) | X xor Y (X ^ Y) |
	|----------------------------------------------------------------------------------------|
	| 0 | 0 |    1       |	   1	  |       0          |        0        |        0        | 
	|----------------------------------------------------------------------------------------|
	| 0 | 1 |	 1       |     0      |		  0          |	      1        |	    1        |
	|----------------------------------------------------------------------------------------|
	| 1 | 0 |    0       |     1      |		  0          |        1        |        1        |
	|----------------------------------------------------------------------------------------|
	| 1 | 1 |	 0	     |	   0      |		  1		     |        1        |        0        | 
	|----------------------------------------------------------------------------------------|
	----------------------------------------------------------------------------------------------------------
	NOT (De�il) Operat�r�
	Mant�ksal ifadenin t�mleyenini (de�ilini) al�r
	----------------------------------------------------------------------------------------------------------
	AND (Ve) Operat�r�
	sa� ve solundaki Mant�ksal ifadelerin ikiside True(1) ise True Yoksa False(0) verir
	----------------------------------------------------------------------------------------------------------
	OR (Veya) Operat�r�
	sa� ve solundaki Mant�ksal ifadelerin ikiside False(0) ise False Yoksa True(1) verir
	----------------------------------------------------------------------------------------------------------
	XOR (^)
	sa� ve solundaki Mant�ksal ifadeler birbirinden farkl� ise True (1) olur;
	sa� ve solundaki Mant�ksal ifadeler birbirinin    ayn� ise False(0) olur;
	----------------------------------------------------------------------------------------------------------
	BITWISE (Bit'ler �zerinden i�lem yapan) Operat�rler
	Bu operat�rler uyguland�klar� de�i�kenleri ikilik tabanda (1 ve 0) �evirip kar��l�k gelen bitler �zerinden 
	i�lem yapan �perat�rlerdir. 5 farkl� bit tabanl� operat�r bulunmaktad�r;
	----------------------------------------------------------------------------------------------------------
	1)Mant�ksal And (ve) Operat�r� (&)
	Bu operat�r sa��ndaki ve solundaki de�i�kenlerin bitleri �zerinden mant�ksal and i�lemi uygular
	�r:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a & b;       // 0000 1111 = 15 //

	printf("(a & b) = %u\n", c);

	bunun ��kt�s�; 
	
	(a & b) = 15
	----------------------------------------------------------------------------------------------------------
	2)Mant�ksal Or (veya) Operat�r� (|)
	Bu operat�r sa��ndaki ve solundaki de�i�kenlerin bitleri �zerinden mant�ksal or i�lemi uygular
	�r:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a | b;       // 0011 1111 = 63 //

	printf("(a | b) = %u\n", c);

	bunun ��kt�s�;

	(a | b) = 63
	----------------------------------------------------------------------------------------------------------
	3)Mant�ksal (XOR) Operat�r� (^)
	Bu operat�r sa��ndaki ve solundaki de�i�kenlerin bitleri �zerinden mant�ksal XOR i�lemi uygular
	�r:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a ^ b;       // 0011 0000 = 48 //

	printf("(a ^ b) = %u\n", c);

	bunun ��kt�s�;

	(a ^ b) = 48
	----------------------------------------------------------------------------------------------------------
	4)Complement (T�mleme) Operat�r� (~)
	Bu Operat�r uyguland��� de�i�ken veya de�erin ikilik tabandaki kar��l���ndaki 0 olan bitlerini 1, 
	1 olan bitlerini 0 yapar.
	�r:
	unsigned char ch = 63;
	unsigned char tumleyen = ~ch;
	
	printf("~%d = %d\n", ch, tumleyen);
	
	bunun ��kt�s�;
	~63 = 192
	----------------------------------------------------------------------------------------------------------


*/


	return 0;
}
	/*
	//Static �r fonksiyon tan�mlar�
	void artirNormal(void)
	{
	//x de�i�keni static olarak tan�mlanmad��� i�in
	//artirNormal fonksiyonu her �a��r�ld���nda x de�eri s�f�rlan�r
	int x = 0;
	printf("Normal: %d\n",x);
	x++;
	}

	void artirStatic(void)
	{
	//x de�i�keni static olarak tan�mland��� i�in
	//artirStatic fonksiyonu tekrar �a��r�ld���nda de�erini kaybetmez
	static int x = 0;
	printf("Static: %d\n",x);
	x++;
	}	
	*/



