#include <iostream>

using namespace std;

template <class Type>
class Element
{
	public:
		Type Data;
		Element* Next;
};

template <class Type>
class Queue
{
	private:
		Element<Type> *First;
		Element<Type> *Last;
	public:		
		Queue()
		{
			First = NULL;
			Last = NULL;
		}		
		~Queue()
		{
			while (IsEmpty()==false) Pop();
		}		
		bool IsEmpty()
		{
			if (First==NULL)
				return true;
			else
				return false;
		}		
		void Push(Type d)
		{
			Element<Type> *tmp = new Element<Type>;
			tmp->Data = d;
			tmp->Next = NULL;		
			if (IsEmpty())
			{
				First = tmp;
				Last = tmp;
			}			
			else
			{
				Last->Next = tmp;
				Last = tmp;
			}
		}		
		bool Pop(Type &d)
		{
			if (IsEmpty()) return false;
			d = First->Data;
			Element<Type> *tmp = First;
			First = First->Next;
			delete tmp;
			return true;
		}		
		Type Pop()
		{
			Type d;
			if (IsEmpty()) return d;
			d = First->Data;
			Element<Type> *tmp = First;
			First = First->Next;
			delete tmp;
			return d;
		}
};

int main()
{
	Queue<int> a;
	a.Pop();
	a.Push(1);
	a.Push(2);
	a.Push(3);
	while (a.IsEmpty()==false)
	cout<<a.Pop()<<" ";
	cout<<endl;
	system("pause");
}
