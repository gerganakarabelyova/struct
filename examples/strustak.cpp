// strustak.cpp 
#include <iostream.h> 
#include <conio.h>      // за getche() 
using namespace std;
struct stackette               // структурата ни
{ 
   int arr[20];                
   int top;                    // индекса от началото на стака 
}; 
class Stack                    // клас
{ 
   private: 
      stackette st;            // структурна променлива 
   public: 
      void init()              // инициализиране на индекс 
      { 
         st.top = -1; 
      } 
      void push(int var)       // слагане на елемент в стака 
      { 
         st.arr[++st.top] = var; 
      } 
      int pop()                // чахане на елемент от стака 
      { 
         return st.arr[st.top--]; 
      } 
};  // класа Stack 
int main() 
{ 
   Stack s1;                   // създаване на обект от тип стек 
   s1.init();                  // инициализиране на обекта 
   s1.push(11);                // слагаме 3 елемента в стека 
   s1.push(12); 
   s1.push(13); 
   cout << s1.pop() << endl;  // изкарване на 3 обекта от стека 
   cout << s1.pop() << endl; 
   cout << s1.pop() << endl; 
   // спираме
   getch(); 
}  //end main 

