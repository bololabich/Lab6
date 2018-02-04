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
cout<<"Wybierz opcję: 1 - dodawanie; 2 - odejmowanie; 3 - mnożenie; 4 - dzielenie"<<endl;
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
		break;
		}
	
	case 2:
		{
		cout<<"a - b = "<<odejmowanie(a, b);
		break;	
		}	
	
	case 3:
		{
		cout<<"a * b = "<<mnorzenie(a, b);	
		break;
		}
		
	case 4:
		{
		if(b!=0)
			{	
			cout<<"a / b = "<<dzielenie(a, b);	
			}
		else
			{
			cout<<"Nie można dzielić przez 0"<<endl;	
			}	
		break;
		}	
	
	case default:
		{
		cout<<"Zły wybór opcji!!!"<<endl;
		cout<<"Chcesz powtórzyć program? 1 - tak; 2 - nie"<<endl;
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
