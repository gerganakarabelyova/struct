#include<iostream>
using namespace std;

struct school
{
   int students;
   int girls;
   int boys;
};

int main()
{
   school pmg;
   pmg.students = 100;
   pmg.girls = 50;
   pmg.boys = 50;
   
   cout << "Students: " << pmg.students << endl;
   cout << "Girls: " << pmg.girls << endl;
   cout << "Boys: " << pmg.boys << endl;
   system("pause");
   return 0;
}

