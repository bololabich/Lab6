#include <iostream>
#include <cstdlib>
#include "dodawanie.cpp"
#include "odejmowanie.cpp"
#include "mnozenie.cpp"
#include "dzielenie.cpp"
#include <math.h>

using namespace std;
double a, b;
int wybor;

int main()
{
cout<<"LAborka 6 - kalkulator"<<endl;
cout<<"Wybierz opcj�: 1 - dodawanie; 2 - odejmowanie; 3 - mno�enie; 4 - dzielenie"<<endl;
cin>>wybor;	
cout<<"Podaj a: "; 	
cin>>a;
cout<<endl<<"Podaj b: ";	
cin>>b;

switch(wybor)
	{
	case 1:
		{
			
		}
	
	case 2:
		{
			
		}	
	
	case 3:
		{
			
		}
		
	case 4:
		{
			
		}	
	
	case default:
		{
		cout<<"Z�y wyb�r opcji!!!"<<endl;	
		}		
	}
cout<<"Koniec programu";	
	
system("PAUSE");
return 0;	
}
