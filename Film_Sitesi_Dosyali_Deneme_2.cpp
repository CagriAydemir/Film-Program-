#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>//terminal temizleme kodunu içerir
#include <sstream>

//Bu kodu geliştirmen gerek, olmaz boyle.

using namespace std;

 struct Yonetmen{
   string adi;
   string memleketi;
   string yasi;

    Yonetmen(string yAdi, string yMemleketi, string Yasi){

      adi = yAdi;
      memleketi = yMemleketi;
      yasi = Yasi ;
   }


    void goster(){
    cout << adi << "(" << memleketi << " : " << yasi << ")" << endl;
   }

};

struct Film{

   string adi;
   Yonetmen yonetmeni;
   string basroller;
   string cikisyili;

    Film (string filmAdi, Yonetmen filmYonetmeni, string filmBasroller, string filmCikisYili)
    : adi(filmAdi), yonetmeni(filmYonetmeni), basroller(filmBasroller), cikisyili(filmCikisYili){ 
   }

   void goster(){
        
     cout << "----------- Film Bilgileri ------------"<<endl;
     cout << "Film         : "<<adi<<endl;
     cout << "Cikis Yili   : "<<cikisyili <<endl;
     cout << "Yonetmeni    : ";
     yonetmeni.goster();
     cout << "Basroller    : "<< basroller << endl << endl << endl;
    
   }

  
}; 


int main(){
     
     system("cls");


   ifstream file("Filmler.txt");
    
       
    Yonetmen y1("a","a","a"), y2("a","a","b"), y3("a","a","c"), y4("a","a","d"), y5("a","a","e"),
             y6("a","a","f"), y7("a","a","g"), y8("a","a","h"), y9("a","a","i"), y10("a","a","j");

    Yonetmen yonetmenler[10] = {y1,y2,y3,y4,y5,y6,y7,y8,y9,y10};

    Film f1("a",y1,"a","a"), f2("b",y2,"b","b"), f3("c",y3,"c","c"), f4("d",y4,"d","d"), f5("e",y5,"e","e"),
         f6("f",y6,"f","f"), f7("g",y7,"g","g"), f8("h",y8,"h","h"), f9("i",y9,"i","i"), f10("j",y10,"j","j");

    Film filmler[10] = {f1,f2,f3,f4,f5,f6,f7,f8,f9,f10};

       for(int i=0 ; i<10 ; i++){
       string A,B,C,D,E,F;
      
       getline(file, A);
       getline(file, B);
       getline(file, C);
       getline(file, D);
       getline(file, E);
       getline(file, F);
      
       Yonetmen ygecici(A,B,C);
       Film fgecici(D,ygecici,E,F);

       yonetmenler[i] = ygecici;
       filmler[i] = fgecici;
       }

       f1 = filmler[0];
       f2 = filmler[1];
       f3 = filmler[2];
       f4 = filmler[3];
       f5 = filmler[4];
       f6 = filmler[5];
       f7 = filmler[6];
       f8 = filmler[7];
       f9 = filmler[8];
       f10 = filmler[9];

     
       /*f1.goster();
       f2.goster();
       f3.goster();
       f4.goster();
       f5.goster();
       f6.goster();
       f7.goster();
       f8.goster();
       f9.goster();
       f10.goster();*/


 while(true){

     cout << "----------- Film Secim Menusu -----------" << endl;
     cout << "1)"  << f1.adi << endl;
     cout << "2)"  << f2.adi  << endl;
     cout << "3)"  << f3.adi << endl;
     cout << "4)"  << f4.adi << endl;
     cout << "5)"  << f5.adi << endl;
     cout << "6)"  << f6.adi << endl;
     cout << "7)"  << f7.adi << endl;
     cout << "8)"  << f8.adi << endl;
     cout << "9)"  << f9.adi << endl;
     cout << "10)" << f10.adi << endl << endl;

     int n;
     cout << "Film Secin : " ;
     cin >> n ;
     
     if(n==1){
       cout << endl;
       f1.goster();}
     else if(n == 2){
       cout << endl;
       f2.goster();}
     else if(n == 3){
       cout << endl;
       f3.goster();}
     else if(n == 4){
      cout << endl;
      f4.goster();}
     else if(n == 5){
      cout << endl;     
      f5.goster();}
     else if(n == 6){
      cout << endl;
      f6.goster();}
     else if(n == 7){
      cout << endl;
      f7.goster();}
     else if(n == 8){
      cout << endl;
      f8.goster();}
     else if(n == 9){
      cout << endl;
      f9.goster();}
     else if(n == 10){
      cout << endl;
      f10.goster();}
     else
      cout << "Gecersiz secim! Lutfen 1-10 arasinda bir sayi girin." << endl << endl;  

     int a;  
      cout << "1)Evet   2)Hayir" << endl;
      cout << "Baska bir film secmek ister misiniz : ";
      cin >> a ;
      cout << endl;

      if(a != 1)
         break;
    }       


    file.close(); 
  return 0;
}