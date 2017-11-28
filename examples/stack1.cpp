// stack1.cpp 
// class models a stack 

#include <iostream.h> 
#include <conio.h>            // for getche() 

class Stack                   // a stack holds up to 20 ints 
{ 
   private: 
      int st[20];             // integers are stored in array 
      int top;                // index of last item pushed 

   public: 
      void init()             // initialize index 
      { 
         top = -1; 
      } 

      void push(int var)      // place an item on the stack 
      { 
         st[++top] = var; 
      } 

      int pop()               // remove an item from the stack 
      { 
         return st[top--]; 
      } 
}; 

int main() 
{ 
   Stack s1;                  // create a stack object 

   s1.init();                 // initialize it 
   s1.push(11);               // push 3 items onto stack 
   s1.push(12); 
   s1.push(13); 

   cout << s1.pop() << endl;   // pop 3 items and display them 
   cout << s1.pop() << endl; 
   cout << s1.pop() << endl; 

   // stop the flow on the monitor 
   getch(); 

}  //end main
