#include <iostream>
#include <cstdlib>
#include "dodawanie.cpp"
#include "odejmowanie.cpp"
#include "mnozenie.cpp"
#include "dzielenie.cpp"
#include <math.h>

using namespace std;
double a, b;
int wybor, d;

int main()
{
cout<<"LAborka 6 - kalkulator"<<endl;
cout<<"Wybierz opcj�: 1 - dodawanie; 2 - odejmowanie; 3 - mno�enie; 4 - dzielenie"<<endl;
cin>>wybor;

back:
	
cout<<"Podaj a: "; 	
cin>>a;
cout<<endl<<"Podaj b: ";	
cin>>b;

switch(wybor)
	{
	case 1:
		{
		cout<<"a + b = "<<dodawanie(a, b);	
		}
	
	case 2:
		{
		cout<<"a - b = "<<odejmowanie(a, b);	
		}	
	
	case 3:
		{
		cout<<"a * b = "<<mnozenie(a, b);	
		}
		
	case 4:
		{
		cout<<"a / b = "<<dzielenie(a, b);	
		}	
	
	case default:
		{
		cout<<"Z�y wyb�r opcji!!!"<<endl;
		cout<<"Chcesz powt�rzy� program? 1 - tak; 2 - nie"<<endl;
		cin>>d;
		if(d==1)
			{
			go to back;	
			}	
		}		
	}
cout<<"Koniec programu";	
	
system("PAUSE");
return 0;	
}
