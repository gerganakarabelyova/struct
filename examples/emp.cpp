// emp.cpp 
// ���������� �� employee ��� ��������� 
// ���� ��������� �� ��� ����������� � ���������� 
#include <iostream.h> 
#include <conio.h>                  // �� getche() 
struct emp  // ����������� emp
{ 
  char name[20]; 
  int n;               // ������������ � �����������
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
   emp e1;  // ������ �1 �� ��� emp
   char ch; 
   e1.n = 0; 
   cout << "   Enter name: "; 
   do 
   { 
     ch = getche();             // �� �� ������� �� 1 char �������� 
     e1.name[e1.n] = ch;        // ��������� � �name�
     ++e1.n; 
   } while (ch != '\r');        // ���� ��� �� ������� �nter 
   cout << "\n   Enter serial number: "; 
   cin >> e1.serial_number; 
   cout << endl << "Employee data" << endl; 
   cout << "   Name = "; 
   for (int j = 0; j < e1.n; ++j)   // �������� �� 1 
      cout << e1.name[j];           // �������� 
   cout << "\n   Serial number = " << e1.serial_number << endl; 
   system("pause");
}  //end main
