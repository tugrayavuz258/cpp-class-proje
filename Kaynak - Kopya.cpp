

														/****************************************************************************
														**					SAKARYA ÜNÝVERSÝTESÝ
														**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
														**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
														**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
														**
														**				ÖDEV NUMARASI :      1
														**				ÖÐRENCÝ ADI:      Tuðra YAVUZ
														**				ÖÐRENCÝ NUMARASI: b221210064
														**				DERS GRUBU: A
														****************************************************************************/





#include <iostream>
#include <iomanip>		
#include <cmath>
#include <locale.h>
#include <conio.h>							//kutuphaneler
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
struct ogrenci
{
	string adi;
	string soyadi;
	int No;
	int kisasinav1;
	int kisasinav2;
	int odev1;																	//isetenen struct blogu
	int odev2;
	int proje;
	int vize;
	int final;
	int yilicinotu;
	int basarinotu;
	int dogumgun;
	int dogumay;
	int dogumyil;
};
int verigirisekraninadonusdegiskeni;
int menucikisdegiskeni;

string isimler[30] = {
			"Yusuf" , "Alparslan" ,"Miraç", "Eymen", "Mustafa",  "Ali", "Çýnar",
			"Mert",  "Miran",  "Alperen", "Açelya", "Adile", "ilke", "Ajda", "Alev", "Alara", "Alime", "Aliye",					//isim string blogu
			"Aden", "Zeynep" ,"Berra", "Tugra", "Yavuz" ,"nazli" 
			,"Almina", "Asya", "Ayda", "fatma", "seda" ,"tugce" };

string soyisimler[30] = {		
			"ÞEN", "KANDEMÝR", "ÇEVÝK", "ERKURAN", "TÜTEN", "ÖZTÜRK", "YÜZBAÞIOÐLU", "VURAL", "YÜCEL", "SÖNMEZ", "ERTEKÝN",					//soyisim string blogu
			"DEDE", "UYANIK", "ASLAN", "AKBULUT", "ORHON", "UZ", "ERDEM", "KULAÇ", "KAYA", "SELVÝ", "AKPINAR" ,"ABACIOÐLU", "ÇAY" ,"IÞIK" ,"ÖZER" ,
			"ÖZDEMÝR" ,"ÖZTÜRK" ,"TAHTACI" ,"BÜYÜKCAM"
};

string notdonustur(int sayisalnot)
{
	string harflinot;
	if (sayisalnot >= 90)
		harflinot = "AA";
	else if (sayisalnot <= 89 && sayisalnot >= 85)
		harflinot = "BA";
	else if (sayisalnot <= 84 && sayisalnot >= 80)                                        //girilen notlar harf notuna cevriliyor
		harflinot = "BB";
	else if (sayisalnot <= 79 && sayisalnot >= 75)
		harflinot = "CB";
	else if (sayisalnot <= 74 && sayisalnot >= 70)
		harflinot = "CC";
	else if (sayisalnot <= 69 && sayisalnot >= 65)
		harflinot = "DC";
	else if (sayisalnot <= 60 && sayisalnot >= 64)
		harflinot = "DD";
	else if (sayisalnot <= 59 && sayisalnot >= 50)
		harflinot = "FD";
	else
		harflinot = "FF";
	return harflinot;
}




int notukontrolet(int girilennot)
{
	
	do {

		                                                                                    // girilen not 0-100 arasinda mi yani dogru mu diye kontrol eden fonksiyon
		cin >> girilennot;
		
	} while (!(girilennot >= 0 && girilennot <= 100));  // girilen deger 0-100 arasinda mi kontrol ediliyor
	int notdegiskeni;
	notdegiskeni = girilennot;
	cout << "girginiz deger gecerli sonraký ýsleme gecýyorsunuz" << endl;

	return notdegiskeni;
}




ogrenci ogrenciler[100];  //ogrencilerimizin arrays seklinde tutumunu saglayan kod



void menusecenek1() {
	system("CLS");
	int deger;
	int deger2;
	int deger3;
	int deger4;
	for (int i = 0; i < 20; i++) {
		cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);  //girilen adette ogrenci yazdiriliyor
		cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;

	}
	do {

		cout << "sonraki 20 ogrenciyi gormek icin 1 tusunu giriniz";
		cin >> deger;



	} while (deger != 1);      // kullanici devam etmek istiyor mu istemiyor mu degiskenimiz yoluyla kontrol ediyoruz
	system("CLS");
	for (short i = 20; i < 40; i++) {
		cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);  //girilen adette ogrenci yazdiriliyor
		cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;

	}
	do {

		cout << "sonraki 20 ogrenciyi gormek icin 1 tusunu giriniz";
		cin >> deger2;
	} while (deger2 == !1); // kullanici devam etmek istiyor mu istemiyor mu degiskenimiz yoluyla kontrol ediyoruz
	system("CLS");
	for (short i = 40; i < 60; i++) {
		cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);  //girilen adette ogrenci yazdiriliyor
		cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;
	}
	do {

		cout << "sonraki 20 ogrenciyi gormek icin 1 tusunu giriniz";
		cin >> deger3;
	} while (deger3 == !1); // kullanici devam etmek istiyor mu istemiyor mu degiskenimiz yoluyla kontrol ediyoruz
	system("CLS");
	for (short i = 60; i < 80; i++) {
		cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);  //girilen adette ogrenci yazdiriliyor
		cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;
	}
	do {

		cout << "sonraki 20 ogrenciyi gormek icin 1 tusunu giriniz";
		cin >> deger4;
	} while (deger4 == !1); // kullanici devam etmek istiyor mu istemiyor mu degiskenimiz yoluyla kontrol ediyoruz
	system("CLS");
	for (int i = 80; i < 100; i++) {
		cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);   //girilen adette ogrenci yazdiriliyor
		cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;

	}
	
}



void menusecenek2() {
	int gosterileceknot = 0;
	int gosterilecekno = 0;
	int gosterilecekgun = 0;
	int gosterilecekay = 0;
	int gosterilecekyil = 0;
	string gosterilecekogrenciadi;
	string gosterilecekogrencisoyadi;
	for (int i{}; i < 100; i++) {
													//tek tek degerlerý getýren kod blogu									
		if (gosterileceknot <= ogrenciler[i].basarinotu)    //ogrencýlerý karsýlastýran kod blogu										//en buyuk notu bulan kod
		{
			gosterileceknot = ogrenciler[i].basarinotu;
			gosterilecekogrenciadi = ogrenciler[i].adi;
			gosterilecekogrencisoyadi = ogrenciler[i].soyadi;
			gosterilecekno = ogrenciler[i].No;
			gosterilecekgun = ogrenciler[i].dogumgun;
			gosterilecekay = ogrenciler[i].dogumay;
			gosterilecekyil = ogrenciler[i].dogumyil;
		}

	}
	cout << "en yuksek not: " << gosterilecekogrenciadi << " " << gosterilecekogrencisoyadi << " " << gosterileceknot << " "  << "notun harf notu hali : " << notdonustur(gosterileceknot) << " ";
	cout << "ogrencinin numarasi: " << gosterilecekno << " " << "ogrencinin dogum gunu:  " << gosterilecekgun << "." << gosterilecekay<< "." << gosterilecekyil<<  endl << endl << endl;

}



void menusecenek3() {

	int gosterileceknotdusuk = 100;
	string gosterilecekogrenciadidusuk;
	string gosterilecekogrencisoyadidusuk;
	int gosterilecekno;
	int gosterilecekgundusuk;
	int gosterilecekaydusuk;
	int gosterilecekyildusuk;
	for (short i = 0; i < 100; i++) { 
															                //tek tek degerlerý getýren kod blogu											
		if (gosterileceknotdusuk >= ogrenciler[i].basarinotu)                                                                           // en kucuk notu bulan kod
		{																	//ogrencýlerý kasrsýlastýran kod blogu
			gosterileceknotdusuk = ogrenciler[i].basarinotu;
			gosterilecekogrenciadidusuk = ogrenciler[i].adi;
			gosterilecekogrencisoyadidusuk = ogrenciler[i].soyadi;
			gosterilecekno = ogrenciler[i].No;
			gosterilecekgundusuk = ogrenciler[i].dogumgun;
			gosterilecekaydusuk = ogrenciler[i].dogumay;
			gosterilecekyildusuk = ogrenciler[i].dogumyil;
		}

	}
	cout << "en dusuk not: " << gosterilecekogrenciadidusuk << " " << gosterilecekogrencisoyadidusuk << " " << gosterileceknotdusuk << "  notun harf notu hali : " << notdonustur(gosterileceknotdusuk) << " ogrencinin numarasi: " << gosterilecekno << "  ";
	cout << "ogrencinin dogum tarihi " << gosterilecekgundusuk << "." << gosterilecekaydusuk << "." << gosterilecekyildusuk << endl;



}

void menusecenek4() {



	int notortalamasi;
	int nottoplami{};																									// not ortalamasý hesaplayan kod
	for (short i = 0; i < 100; i++) {
		nottoplami += ogrenciler[i].basarinotu;								//not toplamý hesaplanýyor
	}
	notortalamasi = nottoplami / 100;
	cout << "sinif ortalamaniz:" << notortalamasi << endl << endl << endl;


}


void menusecenek5() {


		int standartsapmatoplami;
		double standartsapma;
		int varyanstoplami;
		int gercekvaryans = 0;
		int notortalamasi2;
		int nottoplami2 = 0;
	for (short i = 0; i < 100; i++) {
			nottoplami2 += ogrenciler[i].basarinotu;        //ogrencilerin not toplami bulunuyor
	}

		notortalamasi2 = nottoplami2 / 100;
	for (short i = 0; i < 100; i++) {
			varyanstoplami = ogrenciler[i].basarinotu - notortalamasi2;
			gercekvaryans = varyanstoplami * varyanstoplami + gercekvaryans;                 //varyans degerleri bulunuyor
	}
		standartsapmatoplami = gercekvaryans / (99);
		standartsapma = sqrt(standartsapmatoplami);
		cout << "sinifin standart sapmasi = " << standartsapma <<endl << endl << endl;       //standart sapma bulunup yazdiriliyor







}



void menusecenek6() {


	int istenecekminnot;
	int istenecekmaksnot;
	do {
		cout << "lutfen gormek istedginiz en dusuk notu giriniz" << endl;        //girilen not istenen deger araliginda mi diye kontrol eden not
		cin >> istenecekminnot;
	} while (!(istenecekminnot >= 0 && istenecekminnot <= 100));
	do {
		cout << "lutfen gormek istedginiz en yuksek notu giriniz" << endl;		//girilen not istenen deger araliginda mi diye kontrol eden not
		cin >> istenecekmaksnot;
	} while (!(istenecekmaksnot >= 0 && istenecekmaksnot <= 100));
	for (int i = 0; i < 100; i++) {																																		//gormek ýstene deger araligindaki notlari gosteren kod blogu
																									//dongu ýle karsýlastýrýlacak degerler atanýyor
		if (ogrenciler[i].basarinotu >= istenecekminnot && ogrenciler[i].basarinotu <= istenecekmaksnot) {          //ogrenci basari notu min ile maks degerleri arasinda mi kontrol eden kod
			cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "  isimli ogrencinin notu istedginiz deger aralarigindadir   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);   
			cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;
		}
	}


}


void menusecenek7() {

	int istenecekmaksnot2{};
	do {
		cout << "lutfen gormek istediginz en yuksek notu yaziniz";						//girilen not istenen deger araliginda mi diye kontrol eden not
		cin >> istenecekmaksnot2;
	} while (!(istenecekmaksnot2 >= 0 && istenecekmaksnot2 <= 100));
	for (short i = 0; i < 100; i++) {																																		//gormek ýstenen en buyuk nottan dusuk notlarý gosteren kod
		                                                             //dongu ýle karsýlastýrýlacak degerler atanýyor
		if (ogrenciler[i].basarinotu <= istenecekmaksnot2) {  //istenen deger arasidna mk kontrol ediliyot
			cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "  isimli ogrencinin notu istedginiz degerden dusuktur  " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);
			cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;
		}


	}


}



void menusecenek8() {


	int istenecekminnot2;
	do {
		cout << "lutfen gormek istediginz en dusuk notu yaziniz";
		cin >> istenecekminnot2;														//girilen not istenen deger araliginda mi diye kontrol eden not
	}while (!(istenecekminnot2 >= 0 && istenecekminnot2 <= 100));
	for (int i = 0; i < 100; i++) {      //dongu ýle karsýlastýrýlacak degerler atanýyor
		if (ogrenciler[i].basarinotu >= istenecekminnot2) {		 //karsilastirmayi yapan kod blogu																															//gormek ýstenen en dusuk nottan buyuk notlarý gosteren kod
			cout << ogrenciler[i].adi << "   " << ogrenciler[i].soyadi << "  isimli ogrencinin notu istedginiz degerden yuksektir   " << "ogrencinin basari notu: " << ogrenciler[i].basarinotu << "   " << "notunun harf notu hali   " << notdonustur(ogrenciler[i].basarinotu);
			cout << "   " << "ogrencinin numarasi:  " << ogrenciler[i].No << "   " << "ogrencinin dogum tarihi:   " << ogrenciler[i].dogumgun << "." << ogrenciler[i].dogumay << "." << ogrenciler[i].dogumyil << endl;
		}
	}



}







int main() {
	setlocale(LC_ALL, "Turkish");
	srand(time(0));
	int islem;
	int islemsayisi1 = 0;
	do{																//veri giris ekranina donmenin do while komutu
	do {															//veri giris ekraninin do while komutu
		int islemsayisi1 = 0;

		cout << "1 islemi  degiskenin uyelerini random belirler ad ve soy ad dizilerinden rastegele bir ad ve bir soy ad secer" << endl;
		cout << "Her bir not deðiþkeni için,100 öðrenciden %10’unun notu 0-40 arasýnda,%50’ sinin 40 ile 70, %15’inin 70 ile 80 ve  %25’inin 80 ile 100 arasinda secer." << endl;			//veri giris ekraninda yapilacaklari gosteren string blogu
		cout << " 2 islemi Ogrenci deðiþkeni üye deðerleri kullanýcýdan istenecek. Girilen notlarýn doðruluðu kontrol edilecek ( 0-100) arasinda mi diye" << endl;
		cout << "Vizenin %50+kýsa sýnav%17+kýsa sýnav%27+odev1%10+odev2%10+proje%16" << endl;
		cout << "Baþarý notu hesabý için : Yýl içi notunun % 55 + final % 45        denklemleri kullanilir \n \n \n \n \n \n";
		cout << "yapmak istediginiz islemi seciniz(1 veya 2) eger dogru sayi girilmezse tekrar istenecektir \n \n \n \n \n \n ";
		cin >> islem;

		if (islem == 1) {
			for (int i = 0; i < 100; i++) {
				int soyaddegisken1;
				soyaddegisken1 = rand() % 30;
				ogrenciler[i].soyadi = soyisimler[soyaddegisken1];                         //random notlar ataniyor

				int isimdegisken1;
				isimdegisken1 = rand() % 30;
				ogrenciler[i].adi = isimler[isimdegisken1];

				ogrenciler[i].No = rand() % (9999);
				ogrenciler[i].dogumgun = rand() % (30) + 1;
				ogrenciler[i].dogumay = rand() % (12) + 1;
				ogrenciler[i].dogumyil = rand() % (10) + 1995;


			}

			for (short i = 0; i < 10; i++) {												//random notlar ataniyor
				ogrenciler[i].kisasinav1 = rand() % 41;
			}	
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].kisasinav1 = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].kisasinav1 = rand() % (11) + 70;
			}
			for (short i = 75; i < 100; i++) {
				ogrenciler[i].kisasinav1 = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {
				ogrenciler[i].kisasinav2 = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].kisasinav2 = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].kisasinav2 = rand() % (11) + 70;
			}
			for (short i = 75; i < 100; i++) {										//random notlar ataniyor
				ogrenciler[i].kisasinav2 = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {
				ogrenciler[i].odev1 = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].odev1 = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].odev1 = rand() % (11) + 70;							//random notlar ataniyor
			}
			for (short i = 75; i < 100; i++) {												
				ogrenciler[i].odev1 = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {
				ogrenciler[i].odev2 = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].odev2 = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].odev2 = rand() % (11) + 70;
			}
			for (short i = 75; i < 100; i++) {
				ogrenciler[i].odev2 = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {							//random notlar ataniyor
				ogrenciler[i].proje = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].proje = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].proje = rand() % (11) + 70;
			}
			for (short i = 75; i < 100; i++) {
				ogrenciler[i].proje = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {								//random notlar ataniyor
				ogrenciler[i].vize = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].vize = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].vize = rand() % (11) + 70;					//random notlar ataniyor
			}
			for (short i = 75; i < 100; i++) {
				ogrenciler[i].vize = rand() % (21) + 80;
			}

			for (short i = 0; i < 10; i++) {
				ogrenciler[i].final = rand() % 41;
			}
			for (short i = 10; i < 60; i++) {
				ogrenciler[i].final = rand() % (31) + 40;
			}
			for (short i = 60; i < 75; i++) {
				ogrenciler[i].final = rand() % (11) + 70;
			}
			for (short i = 75; i < 100; i++) {
				ogrenciler[i].final = rand() % (21) + 80;
			}



																																					



			for (int i = 0; i < 100; i++) {
				ogrenciler[i].yilicinotu = ogrenciler[i].vize * 50 / 100 + ogrenciler[i].kisasinav1 * 7 / 100 + ogrenciler[i].kisasinav2 * 7 / 100 +
					ogrenciler[i].odev1 * 10 / 100 + ogrenciler[i].odev2 * 10 / 100 + ogrenciler[i].proje * 16 / 100;                  // her ogrenci icin ort hesaplanmasi
				ogrenciler[i].basarinotu = ogrenciler[i].yilicinotu * 55 / 100 + ogrenciler[i].final * 45 / 100;
			}








		}

		if (islem == 2) {

			for (short i = 0; i < 100; i++) {
				int soyaddegisken2 = 0;
				do {
					cout << "lutfen " << i + 1 << ". ögrencinin soyisim degiskenini giriniz (0-29)" << endl;
					cin >> soyaddegisken2;								//soyisim verisini elle alan kod blogu
				} while (!(soyaddegisken2 >= 0 && soyaddegisken2 <= 29));
				ogrenciler[i].soyadi = soyisimler[soyaddegisken2];
			}
			for (short i = 0; i < 100; i++) {
				int isimdegisken2 = 0;															//isim verisini elle alan kod blogu
				do {
					cout << "lutfen " << i + 1 << ". ögrencinin isim degiskenini giriniz (0-29" << endl;
					cin >> isimdegisken2;
				} while (!(isimdegisken2 >= 0 && isimdegisken2 <= 29));
				ogrenciler[i].adi = isimler[isimdegisken2];
			}
			for (short i = 0; i < 100; i++) {																			
				int nodegisken;
				cout << "lutfen " << i + 1 << ". ögrencinin numarasýný gýrýnýz degiskenini giriniz" << endl;											//okul numarasi verisini elle alan kod blogu
				cin >> nodegisken;
				ogrenciler[i].No = nodegisken;
			}
			for (short i = 0; i < 100; i++) {
				int gundegisken = 0;
				do {
					cout << "lutfen " << i + 1 << ". ögrencinin dogdugu günü  giriniz (1-30)" << endl;
					cin >> gundegisken;
				} while (!(gundegisken >= 1 && gundegisken <= 30));										//dogulan gun  verisini elle alan kod blogu
				ogrenciler[i].dogumgun = gundegisken;
			}
			for (short i = 0; i < 100; i++) {
				int aydegisken = 0;
				do {
					cout << "lutfen " << i + 1 << ". ögrencinin dogdugu ayi (1-12) giriniz" << endl;
					cin >> aydegisken;																				//dogulan ay verisini elle alan kod blogu
				} while (!(aydegisken >= 1 && aydegisken <= 12));
				ogrenciler[i].dogumay = aydegisken;
			}
			for (short i = 0; i < 100; i++) {
				int yildegisken = 0;
				do {
					cout << "lutfen " << i + 1 << ". ögrencinin dogdugu yili (1995-2004)" << endl;										//dogulan yil verisini elle alan kod blogu
					cin >> yildegisken;
				} while (!(yildegisken >= 1995 && yildegisken <= 2004));
				ogrenciler[i].dogumyil = yildegisken;
			}


			for (int i = 0; i < 100; i++) {
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << " isimli ogrencinin kisasinav 1 notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].kisasinav1);																									
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << " isimli ogrencinin kisasinav 2 notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].kisasinav2);
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << " isimli ogrencinin odev 1 notunu giriniz" << endl;    //ogrencilerin sinav basina notlarini alan kod blogu
				notukontrolet(ogrenciler[i].odev1);
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << " isimli ogrencinin odev 2 notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].odev2);
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << "isimli ogrencinin  proje notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].proje);
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << "isimli ogrencinin  vize notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].vize);
				cout << "lutfen" << ogrenciler[i].adi << " " << ogrenciler[i].soyadi << "isimli ogrencinin  final notunu giriniz" << endl;
				notukontrolet(ogrenciler[i].final);
			}

			for (int i = 0; i < 100; i++) {
				ogrenciler[i].yilicinotu = ogrenciler[i].vize * 50 / 100 + ogrenciler[i].kisasinav1 * 7 / 100 + ogrenciler[i].kisasinav2 * 7 / 100 +
					ogrenciler[i].odev1 * 10 / 100 + ogrenciler[i].odev2 * 10 / 100 + ogrenciler[i].proje * 16 / 100;          //  her ogrenci icin ort hesaplanmasi
				ogrenciler[i].basarinotu = ogrenciler[i].yilicinotu * 55 / 100 + ogrenciler[i].final * 45 / 100;
			}
		}

		else if (islem!=1 && islem != 2 ) {
			cout << "lutfen 1 veya 2 giriniz \n \n \n" << endl;						//istenen tipte islem girilmediginde calisan kod blogu
		}

	} while (islem != 1 && islem != 2);





	do {         // menu cikisinin do while komutu
		int islemsayisi2;
		do {  //menunun do while komutu

			cout << "verilerinizle yapmak istediginiz islemi seciniz" << endl;
			cout << "islem  1	Sýnýfýn listesi yazdýrýlsýn. " << endl;
			cout << "islem  2	Sýnýfýn en yüksek notu hesaplansýn." << endl;
			cout << "islem  3	Sýnýfýn en düþük notu hesaplansýn." << endl;
			cout << "islem  4	Sýnýfýn ortalamasý hesaplansýn. " << endl;															//yapilacak islemleri gosteren menu sekmesi
			cout << "islem  5	Sýnýfýn standart sapmasý hesaplansýn.  " << endl;
			cout << "islem  6 	Baþarý notu belirli bir aralýkta olanlar listelensin " << endl;
			cout << "islem  7 	Baþarý notu belirtilen bir deðerin altýnda olan öðrencilerin listesi alýnabilsin " << endl;
			cout << "islem  8	Baþarý notu belirtilen bir deðerin üstünde olan öðrencilerin listesi alýnabilsin " << endl;
			cin >> islemsayisi2;
			string gosterilecekogrenciadi;
			string gosterilecekogrencisoyadi;
			int gosterilecekdeger = 0;

			if (islemsayisi2 == 1)
			{
				menusecenek1();                                        //1. menu seceneginin fonksiyonunu cagiran kod

			}
			else if (islemsayisi2 == 2) {

				menusecenek2();											//2. menu seceneginin fonksiyonunu cagiran kod
			}
			else if (islemsayisi2 == 3) {
				menusecenek3();											//3. menu seceneginin fonksiyonunu cagiran kod

			}
			else if (islemsayisi2 == 4) {
				menusecenek4();											//4. menu seceneginin fonksiyonunu cagiran kod

			}
			else if (islemsayisi2 == 5) {
																		//5. menu seceneginin fonksiyonunu cagiran kod
				menusecenek5();
			}

			else if (islemsayisi2 == 6) {
				menusecenek6();											//6. menu seceneginin fonksiyonunu cagiran kod

			}
			else if (islemsayisi2 == 7) {
				menusecenek7();											//7. menu seceneginin fonksiyonunu cagiran kod
			}
			else if (islemsayisi2 == 8) {
				menusecenek8();											//8. menu seceneginin fonksiyonunu cagiran kod

			}
			else
				cout << "lutfen 1 ile 8 arasinda 1 sayi giriniz";		//yanlis islem girilmisse cailistirilan kod blogu

		} while (!(islemsayisi2 >= 1 && islemsayisi2 <= 8));
		cout << "menude farkli islem yapmak ister misiniz 1 tuslayiniz istemiyorsaniz farki sayi tuslayiniz  " << endl << endl << endl << endl << endl;

		cin >> menucikisdegiskeni;
	} while (menucikisdegiskeni == 1);									// menu cikisinin do while komutu
	cout << "veri giris ekranina donemek ister  misiniz isterseniz 1 tuslatin istemiyorsaniz farki sayi tuslayin \n \n \n \n \n \n \n";
	cin >> verigirisekraninadonusdegiskeni;								
	}while(verigirisekraninadonusdegiskeni == 1);						//veri giris ekranina donmenin do while komutu
	return 0;
}