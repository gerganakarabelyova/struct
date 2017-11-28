// emp.cpp 
// изграждане на employee със структура 
// тази структура ще има конструктор и деструктор 
#include <iostream.h> 
#include <conio.h>                  // за getche() 
struct emp  // структурата emp
{ 
  char name[20]; 
  int n;               // променливите в структурата
  unsigned long serial_number; 
  emp()      // constructor 
  { 
    cout << "I am the constructor" << endl; 
  } 
  ~emp()     // destructor 
  { 
    cout << "I am the destructor" << endl; 
  } 
}; 
int main() 
{ 
   emp e1;  // обекта е1 от тип emp
   char ch; 
   e1.n = 0; 
   cout << "   Enter name: "; 
   do 
   { 
     ch = getche();             // да се въвежда по 1 char наведнъж 
     e1.name[e1.n] = ch;        // запазване в “name”
     ++e1.n; 
   } while (ch != '\r');        // КРАЙ ако се натисне еnter 
   cout << "\n   Enter serial number: "; 
   cin >> e1.serial_number; 
   cout << endl << "Employee data" << endl; 
   cout << "   Name = "; 
   for (int j = 0; j < e1.n; ++j)   // показвай по 1 
      cout << e1.name[j];           // наведнъж 
   cout << "\n   Serial number = " << e1.serial_number << endl; 
   system("pause");
}  //end main
