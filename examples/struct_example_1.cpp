/* Prosti4uk primer za struktura i kak raboti */

#include<iostream>
using namespace std;

struct person //na6ata struktura "person"
 {
   int age, i;           // promenlivite, koito ni interesuvat
   float height;         // -||-
   int weight;           // -||-
   char student[20];     // -||-
   
   void zapisvane()        // tova e purvata funkciq, koqto si suzdavame za da zapisvame v strukturata, koqto suzdadohme
       {
         cout << endl << endl << "   ...Neka zapi6em parametrite za na6ata struktura..." << endl << endl;
         cout << "      Vuzrast: ";
         cin >> age;
         cout << "      Viso4ina: ";
         cin >> height;
         cout << "      Teglo: ";
         cin >> weight;
         cout << "      Ime: ";
         cin >> student;
       }
       
   void chetene()        // tova e vtorata i finalna funkciq, koqto 6te polzvame. tq 4ete zapisanata informaciq v strukturata 
                         // ... i q izvejda na ekrana; 
                         
                         // !! OBURNETE VNIMANIE NA SINTAKSISA !!
       {
         cout << endl << endl << "   ...Da proverim kakvo sme zapisali v strukturata..." << endl<<endl;
         cout << "      Vuzrast: " << person::age << " godini" << endl; 
                 // [ime na strukturata] :: [promenliva, koqto izkarvame]
         cout << "      Viso4ina: " << person::height << " sm" << endl;
         cout << "      Teglo: " << person::weight << " kg" << endl;
         cout << "      U4enik: " << person::student << endl << endl << endl;
         cout << "       ...S tova zavur6va na6iq prost primer :) ..." << endl<<endl;
       };
 };
 
 int main() 
 {
    person p;    // suzdavam konstruktor za udobstvo
             // [struct] -space- [konstr]
    p.zapisvane();    // polzvam purvata funkciq
             // !! OBURNETE VNIMANIE NA SINTAKSISA !!
             // [struct] . [funkciq] ()
    p.chetene();
    system("pause");    // neprofesionalnoto, no neobhodimo za proverki predi izpulnenie "sistemna pauza"
 }
