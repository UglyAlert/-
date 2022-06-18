#include <iostream>
#include <conio.h>
#include <typeinfo>
using namespace std;
int main()
{
	 setlocale(LC_ALL,"russian");
	 int count;
	 void* a = &cin;
	 cout << "Введите число по адресу " << a << endl;
	 *(reinterpret_cast <istream*> (a)) >> count;
	 cout << "Вы ввели число " << count;
	 getchar();
	 return 0;
}