// strustak.cpp 
#include <iostream.h> 
#include <conio.h>      // �� getche() 
using namespace std;
struct stackette               // ����������� ��
{ 
   int arr[20];                
   int top;                    // ������� �� �������� �� ����� 
}; 
class Stack                    // ����
{ 
   private: 
      stackette st;            // ���������� ���������� 
   public: 
      void init()              // �������������� �� ������ 
      { 
         st.top = -1; 
      } 
      void push(int var)       // ������� �� ������� � ����� 
      { 
         st.arr[++st.top] = var; 
      } 
      int pop()                // ������ �� ������� �� ����� 
      { 
         return st.arr[st.top--]; 
      } 
};  // ����� Stack 
int main() 
{ 
   Stack s1;                   // ��������� �� ����� �� ��� ���� 
   s1.init();                  // �������������� �� ������ 
   s1.push(11);                // ������� 3 �������� � ����� 
   s1.push(12); 
   s1.push(13); 
   cout << s1.pop() << endl;  // ��������� �� 3 ������ �� ����� 
   cout << s1.pop() << endl; 
   cout << s1.pop() << endl; 
   // �������
   getch(); 
}  //end main 

