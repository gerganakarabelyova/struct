#include<iostream>
using namespace std;

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

      int pop()              // remove an item from the stack 
      { 
         return st[top--]; 
      } 
}; 
