#include <stdio.h> //Temel Komutlar için C Kütüphanesi
#include <limits.h> //Veri Tipleri'nin Deðer Aralýklarýný Öðrenmek için Gerekli Kütüphane
#include <float.h> //Float ile iþlemler kütüphanesi
#include <math.h> //C Matematiksel iþlemler kütüphanesi
#include <stdbool.h> //Boolean veri tipi kütüphanesi
#include <time.h> //rand() Fonksiyonu Kütüphanesi

#include <conio.h>  // getch()
#include <stdlib.h> // system()//Standart Type Converion kütüphanesi
#include <windows.h> // Sleep()

#include <ctype.h> //Standart Type Converion kütüphanesi

#define SIZE 50 //Type conversion ör için tanýmlama
/*
//Static ör fonksiyon prototipleri
void artirNormal(void);
void artirStatic(void);
*/

/*
* ----------------------------------------------------------------------------------------------------------
//Celsius'u Fahrenheit'e Çevirme Fonksiyonu
int a;

float CelsiusToFahrenheit(int a) 
{
	return  ((a * ((float) 9 / 5)) + 32);
}
----------------------------------------------------------------------------------------------------------
*/
/*
----------------------------------------------------------------------------------------------------------
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

	Bu kelimlerin C dilinde özel anlamý olan karþýlýklarý vardýr 
	Deðiþken isimlendirirken kullanýlmamalýdýrlar 
	----------------------------------------------------------------------------------------------------------
	*/
	
	//int = 4 byte, %d
	//–2,147,483,648 … 2,147,483,647 arasý deðer tutabilir
	//----------------------------------------------------------------------------------------------------------
	//float = 4 byte, %f
	// %.xf => bu sekýlde yazýlýrsa noktadan sonra x sayý gozukur
	//float a = 2.25648348;
	//printf("float sayi: %.2f",a);
	//----------------------------------------------------------------------------------------------------------
	//double = 8 byte, %lf
	// %.xlf => bu sekýlde yazýlýrsa noktadan sonra x sayý gozukur
	//----------------------------------------------------------------------------------------------------------
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
	//----------------------------------------------------------------------------------------------------------
	//char = 1 byte, %c 
	//karakter tutar
	//char karakter = 'A';
	//printf("Harf: %c",karakter);
	//----------------------------------------------------------------------------------------------------------
	//long = 32bit sistemlerde 4 bytes, 64bit sistemlerde 8 bytes
	//–9,223,372,036,854,775,808 … 9,223,372,036,854,775,807 arasý deðer tutabilir
	//long long int sayý = 0; //þeklinde tanýmlanabilir
	// %lld kullanýlýr
	//----------------------------------------------------------------------------------------------------------
	//özel degisken tipleri
	/*
	Type Qualifers;
	const
	const int a = 5; seklinde tanýmlandýðýnda a'nin degeri programýn çalýþma süresi boyunca asla deðiþmez	
	----------------------------------------------------------------------------------------------------------
	volatile
	volatile int a; seklýnde tanýmlandýgýnda a deðikeni ile ilgili hiç bir komut IDE'nin yaptýðý optimizyona uðramayacaktýr
	(pointerlar konusunda iþe yarayacak)
	----------------------------------------------------------------------------------------------------------
	restrict 
	(sadece pointer deðiþkenlerin önüne konabilir)
	(pointer optimazyonu için derleyiciye güvenle optimze edebilirsin der)
	Normalde bir bellek alaný birden fazla pointer deðiþken tarafýndan referans gösterilebilir.
	Bu durumda derleyici, o bellek alaný üzerinde optimizasyon yapamaz.
	Eðer pointer deðiþkeni restrict olarak tanýmlarsak, ilgili bellek alanýnýn sadece, 
	o pointer tarafýndan yönetilmesini (referans gösterilmesini) garanti altina almiþ oluruz.
	Eðer derleyici bir bellek alanýnýn tek bir pointer deðiþken tarafýndan yönetildiðini bilirse,
	bu alan üzerinde optimizasyona gidebilir. 
	
	int * restrict ptr1;
	int * restrict ptr2;
	
	*ptr1 = *ptr1 + 2;
	*ptr2 = *ptr2 + 2;
	*ptr1 = *ptr1 + 10;

	burada derleyici prt1 deðiþkeninin baþka hiç bir pointer deðiþken tarafýndan deðiþtireyeceðini bildiði için;
	1 ve 3. satýrdaki ifade derleyici tarafýndan birleþtirilerek aþaðýdaki gibi yürütülmesinin saðlayacaktýr;
	
	*ptr1 = *ptr1 + 12;
	*ptr2 = *ptr2 + 2;

	Bu optimizasyon ile kodumuz 2 satýra inmiþtir.Sonuç olarak programýmýz çalýþýrken iþlemciye bir komut az
	gönderdiði için daha hýzlý çalýþacaktýr.
	----------------------------------------------------------------------------------------------------------
	_Atomic
	C11 Standardýnda geçerlidir
	Tanýmlanan deðiþkenler birden fazla thread (kanal) tarafýndan kullanýlmaya müsait hale gelecektir
	----------------------------------------------------------------------------------------------------------
	Storage Classes (Bellek Depolama Sýnýflarý);
	extern
	static
	auto
	register
	----------------------------------------------------------------------------------------------------------
	extern
	extern ile bir dosyada tanýmlanan global deðiþkenlerin diðer dosyada kullanbilmesini saðlar
	ör: main.c subfolder.h ayný programýn bir parçasýysa main.c de veya subfolder.h'ta 
	tanýmlý bir deðiþken diðer dosyadada kullanýlabilmektedir
	
	//subfolder.h ta tanýmlý sayi deðiþkeni olsun
	int sayi = 5;
	//main.c de bu þekilde ayný sayý degerýný kullanabýlýyoruz
	extern int sayi;
	//bu þekilde tanýmlandýðýnda sayi deðiþkeni iki dosyada ayný bellek alanýný ifade eder
	//bu þekilde tanýmlamamýþ olsak farklý bellek alanlarý kullanýlýrdý
	----------------------------------------------------------------------------------------------------------
	register
	Bazý programlarda çok kullanýlan deðiþkenlerin hýzlý iþlem görmesini isteyebiliriz
	Deðiþken deðerleri genellikle bellekte depolanýrlar fakat belleðe eriþim yavaþtýr
	Bu sebeple daha hýzlý iþlem yapmak için deðiþkenlerimizin bellekte deðil CPU üzerindeki 
	Register (Yazmaç)'larda tutulmasý isteyebiliriz Bunu yapmak için register'ý kullanýrýz
	//ör:
	register int z = 5;
	printf("registerda tutulan sayi: %d",z);

	Uyarý: CPU'daki registerlarýn sayýsý sýnýrlýdýr (kullanýlan cihaza göre deðiþebilir ama yinede sýnýrlýdýr)
	Bu yüzden register sadece gerekli görüldüðünde kullanýlmalýdýr, eðer çok sayýda register tanýmlamasý yapýp
	CPU'nun limitine ulaþýrsak limiti aþan deðiþkenler normal deðiþken gibi iþlem görürler

	Uyarý2: register deðiþkenleri pointerlar ile kullanamayýz, çünkü pointer deðiþkenler bellek adresi tutmak için
	tasarlanmýþtýr. Register deðiþkenler ise registerlarda tutulduklarý için bellek adresleri yoktur
	//Ör:
	//register tanýmlanmasý
	register int x = 4;
	//register olarak tanýmlanmýþ deðiþenin bellek adresine & ile eriþemeyiz
	//Dolayýsýyla aþaðýdaki satýr derlenmede hata verir
	int *pointer = &x;

	printf("%d\n",*pointer);
	return 0;
	//Bu koda derlendiðinde hata verir çýktý almak istiyorsak baþtaki register tanýmlamasýný kaldýrmamýz gerekir
	----------------------------------------------------------------------------------------------------------
	static
	bununla tanýmlanan deðiþkenler deðerlerini kaybetmezler
	//ör:
	//fonksiyon prototipleri mainini üstünde tanýmlý
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
	//fonksiyon tanýmlarýn mainin dýþýnda altta

	//Yazýlan kodun çýktýsý
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
	bu kelime baþýna eklendiði deðiþkenin deðiþken tanýmýndaki deðiþkenin 
	geçiçi bir süre zarfýnda kullanýlacaðýný söyler

	Eskinden (10 yýllar önce) belli bir kod bloðunda geçerli yerel deðiþken tanýmlamanýn
	tek yolu auto yu kullanmaktý ama þimdi bunu derleyiciler sanki auto varmýþ gibi algýlayýp yapýyor

	auto nun sadece c de anahtar kelime olduðunu bilmek yeterlidir kodlarda kullanýlmayacak
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
	*/
	//----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/

	//Veri Tiplerini Bellekte kapladýðý alaný öðrenme
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

	//scanf'deki deðikeni tanýmlarken önüne koyduðumuz & bu iþaret þunu refere eder; 
	// x = deðiþken, &x = memory (ram)'deki x'in adresi
	//----------------------------------------------------------------------------------------------------------
	//Kullanýcýdan get ile string alma

	//char ad[20];

	//printf("Adinizi giriniz: ");
	//gets(ad);
	//printf("Girilen ad %s",ad);
	//gets sadece string okur
	//----------------------------------------------------------------------------------------------------------
	/* exp:yaþ hesaplama 
	
	int x;
	int age;
	printf("Please Enter Your Birth Year: ");
	scanf_s("%d", &x);
	
	age = (2025 - x);
	
	printf("Your age is %d",age);
	*/
	//----------------------------------------------------------------------------------------------------------
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
	
	/*
	----------------------------------------------------------------------------------------------------------
	//Type Casting
	//Type casting operatörü bölme iþleminden önceliklidir
	int x = 771;
	int y = 4;
	int d = 6;
	int g = 7;
	
	float z = (float) x / y;
	double c = (double) d / g;
	
	printf("%f\n",z);
	printf("%lf", c);
	----------------------------------------------------------------------------------------------------------
	//Type Converison (Tip Çevrimleri)
	stringden floata çevrimek gibi aðýr dönüþümler için kullanýlýr
	bu iþ için özelbazý fonksiyonlar kullanýlmaktadýr
	bu fonksiyonlar "stdlib.h" ve "ctype.h" isimli standart kütüphaneler altýnda bulunmaktadýr
	bu kütüphanede en çok kullanýlan fonksiyonlar;
	----------------------------------------------------------------------------------------------------------
	atoi
	stdlib.h ile gelen bu fonksiyon kendisine parametre olarak gelen karekter dizisini tamsayýya çevirir
	ve bu tam sayýyý return ile döndürür
	//Fonksiyon prototipi
	int atoi(const char *);
	----------------------------------------------------------------------------------------------------------
	atof
	kendisine parametre olarak gelen karekter dizisini ondalýk sayýya çevirir
	ve sayýyý return ile döndürür
	//fonksiyon imzasý
	int atof(const char *);
	----------------------------------------------------------------------------------------------------------
	isDigit
	ctype.h ile gelen bu fonksiyon kendisine parametre olarak gelen karekterterin sayýsal deðer olup olmadýðýný
	bulur eðer karakter '0','1','2','3','4','5','6','7','8','9' deðerlerinden birine sahipse bu fonksiyon 1 deðeri
	döndürür eðer sahip deðilse 0 deðeri döndürür
	----------------------------------------------------------------------------------------------------------
	//Bu Fonksiyonlarýn kullanýlmýna örnek
	
	//main istünde SIZE tanýmlamasý
	char metin[SIZE];

    char sayistr1[] = "256";
    char sayistr2[] = "134";
    char sayistr3[] = "9.25";
    char sayistr4[] = "3.75";

    // ilk iki karakter dizisini atoi ile tam sayýya çevirip topluyoruz
    int sayi1 = atoi(sayistr1);
    int sayi2 = atoi(sayistr2);
    int toplam1 = sayi1 + sayi2;
    printf("Toplam 1 -> %d\n", toplam1);

    // 3 ve 4. karakter dizisini atof ile ondalýk sayýya çevirip topluyoruz
    float sayi3 = atof(sayistr3);
    float sayi4 = atof(sayistr4);
    float toplam2 = sayi3 + sayi4;
    printf("Toplam 2 -> %.2f\n", toplam2);

    // isdigit kullanýmý
    printf("Please Enter String Series: ");
    fgets(metin, SIZE, stdin);

    printf("Your integers from your entered string series: ");
    for (int i = 0; i < SIZE; i++)
    {
        if (metin[i] == '\0')
            break;
        if (isdigit((unsigned char)metin[i]))   
			// önemli: unsigned char dönüþtür
			//isdigit()’e verilen deðer unsigned char olmalý, aksi takdirde 
			//negatif char deðerlerinde tanýmsýz davranýþ olabilir.
            printf("%c", metin[i]);
    }
    printf("\n");
	----------------------------------------------------------------------------------------------------------
	Diðer Type Conversion Fonksiyonlarý
	----------------------------------------------------------------------------------------------------------
	isalpha
	ctype.h kütüphanesiyle gelir
	parametre olarak giren býr karekterýn alfabedeký harflerden býrý olup olmadýgýný kontrol eder
	eger gelen parametre bir harfse 0'dan farklý býr deðer dondurur
	eger degýlse 0 deðerini döndürür
	----------------------------------------------------------------------------------------------------------
	isalnum
	ctype.h kütüphanesiyle gelir
	kendisine parametre olarak gelen bir alfanumerik bir ifade olup olmadýðýný bulur
	eðer karekter bir harfe karþýlýk geliyorsa veya '0','1','2','3','4','5','6','7','8','9' deðerlerinden 
	birine sahipse; bu fonksiyon sýfýrdan farklý býr deger dondurur, Aksi taktride 0 deðerini döndürür
	----------------------------------------------------------------------------------------------------------
	islower
	ctype.h kütüphanesiyle gelir
	kendisine parametre olarak gelen bir harfin küçük harf olup olmadýðýný kontrol eder; eðer küçük harf ise
	0'dan farlý bir deðer döndürür; eðer deðilse 0 deðerini döndürür
	----------------------------------------------------------------------------------------------------------
	isupper
	ctype.h kütüphanesiyle gelir
	kendisine parametre olarak gelen bir harfin büyük harf olup olmadýðýný kontrol eder; eðer büyük harf ise
	0'dan farlý bir deðer döndürür; eðer deðilse 0 deðerini döndürür
	----------------------------------------------------------------------------------------------------------
	tolower
	ctype.h kütüphanesiyle gelir
	kendisine parametre olarak gelen bir harfin küçük harf olup olmadýðýný kontrol eder; eðer küçük harf ise
	ayný deðeri geri döndürür; eðer büyük harf ise küçük harfe çevirir ve bu deðeri geri döndürür
	----------------------------------------------------------------------------------------------------------
	toupper
	ctype.h kütüphanesiyle gelir
	kendisine parametre olarak gelen bir harfin büyük harf olup olmadýðýný kontrol eder; eðer büyük harf ise
	ayný deðeri geri döndürür; eðer küçük harf ise büyük harfe çevirir ve bu deðeri geri döndürür
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	//if else te mantýksal öperatörler
	// && ve anlamýna gelir
	// || veya anlamýna gelir
	/*
	----------------------------------------------------------------------------------------------------------
	//Mantýksal Operatörler ve 1-0 (temel boolean) Veri Tipi
	int x; 
	int y;  
	int z;  

	x = 4 < 7; //doðruysa 1, yanlýþsa 0 döndürür
	y = (3 < 6) && (40 % 2 == 10); //bu 1 ve 0 larý mantýksal operatörlerlede kullanabiliriz
	z = (31 < 6) && (40 % 2 == 1) || (10 / 2 == 5); //Mantýksal operatorlerle birlikte kombinede kullanýlabýlýr (kontrole soldan baþlar)
	
	printf("x:%d y:%d z:%d",x,y,z);
	----------------------------------------------------------------------------------------------------------
	*/

	/*
	----------------------------------------------------------------------------------------------------------
	//Konsoldan gýrýlen býr sayýnýn 3'e veya 7'ye bolunup bolunmedýgýný yazan program
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	*/
	
	//rand() Fonksiyonu kullanýmý
	
	//rand() fonksiyonu bu þekilde baþlatýlmazsa program kapatýlýp açýlmadýðý sürece ayný sayýyý verir
	
	/*
	----------------------------------------------------------------------------------------------------------
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
	----------------------------------------------------------------------------------------------------------
	Aritmetik Arttýrma ve Azaltma Operatörleri (++ ve --)
	
	++ operatörü
	1 arttýrýr
	sayi++ => önce deðer atamasý yapýlýr sonra arttýrýlýr, 1 arttýrýr 
	++sayi => önce arttýrýlýr sonra deðer atamasý yapýlýr, 1 arttýrýr

	-- operatörü
	sayi-- => önce deðer atamasý yapýlýr sonra eksiltilir, 1 eksiltir
	--sayi => önce eksiltilir sonra deðer atamasý yapýlýr, 1 eksiltir
	----------------------------------------------------------------------------------------------------------
	Mantýksal Operatörler (Not(!),And(&&),Or(||),XOR(^))
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
	NOT (Deðil) Operatörü
	Mantýksal ifadenin tümleyenini (deðilini) alýr
	----------------------------------------------------------------------------------------------------------
	AND (Ve) Operatörü
	sað ve solundaki Mantýksal ifadelerin ikiside True(1) ise True Yoksa False(0) verir
	----------------------------------------------------------------------------------------------------------
	OR (Veya) Operatörü
	sað ve solundaki Mantýksal ifadelerin ikiside False(0) ise False Yoksa True(1) verir
	----------------------------------------------------------------------------------------------------------
	XOR (^)
	sað ve solundaki Mantýksal ifadeler birbirinden farklý ise True (1) olur;
	sað ve solundaki Mantýksal ifadeler birbirinin    ayný ise False(0) olur;
	----------------------------------------------------------------------------------------------------------
	BITWISE (Bit'ler üzerinden iþlem yapan) Operatörler
	Bu operatörler uygulandýklarý deðiþkenleri ikilik tabanda (1 ve 0) çevirip karþýlýk gelen bitler üzerinden 
	iþlem yapan öperatörlerdir. 5 farklý bit tabanlý operatör bulunmaktadýr;
	----------------------------------------------------------------------------------------------------------
	1)Mantýksal And (ve) Operatörü (&)
	Bu operatör saðýndaki ve solundaki deðiþkenlerin bitleri üzerinden mantýksal and iþlemi uygular
	ör:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a & b;       // 0000 1111 = 15 //

	printf("(a & b) = %u\n", c);

	bunun çýktýsý; 
	
	(a & b) = 15
	----------------------------------------------------------------------------------------------------------
	2)Mantýksal Or (veya) Operatörü (|)
	Bu operatör saðýndaki ve solundaki deðiþkenlerin bitleri üzerinden mantýksal or iþlemi uygular
	ör:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a | b;       // 0011 1111 = 63 //

	printf("(a | b) = %u\n", c);

	bunun çýktýsý;

	(a | b) = 63
	----------------------------------------------------------------------------------------------------------
	3)Mantýksal (XOR) Operatörü (^)
	Bu operatör saðýndaki ve solundaki deðiþkenlerin bitleri üzerinden mantýksal XOR iþlemi uygular
	ör:
	unsigned int a = 63;          // 0011 1111 = 63 //
	unsigned int b = 15;		  // 0000 1111 = 15 //
	unsigned int c = a ^ b;       // 0011 0000 = 48 //

	printf("(a ^ b) = %u\n", c);

	bunun çýktýsý;

	(a ^ b) = 48
	----------------------------------------------------------------------------------------------------------
	4)Complement (Tümleme) Operatörü (~)
	Bu Operatör uygulandýðý deðiþken veya deðerin ikilik tabandaki karþýlýðýndaki 0 olan bitlerini 1, 
	1 olan bitlerini 0 yapar.
	ör:
	unsigned char ch = 63;
	unsigned char tumleyen = ~ch;
	
	printf("~%d = %d\n", ch, tumleyen);
	
	bunun çýktýsý;
	~63 = 192
	----------------------------------------------------------------------------------------------------------


*/


	return 0;
}
	/*
	//Static ör fonksiyon tanýmlarý
	void artirNormal(void)
	{
	//x deðiþkeni static olarak tanýmlanmadýðý için
	//artirNormal fonksiyonu her çaðýrýldýðýnda x deðeri sýfýrlanýr
	int x = 0;
	printf("Normal: %d\n",x);
	x++;
	}

	void artirStatic(void)
	{
	//x deðiþkeni static olarak tanýmlandýðý için
	//artirStatic fonksiyonu tekrar çaðýrýldýðýnda deðerini kaybetmez
	static int x = 0;
	printf("Static: %d\n",x);
	x++;
	}	
	*/



