#include<iostream>
using namespace std;
//CREADO Tapuyo Añapa Nina Maury
int main() 
{
	float t,a;
	cout<<"inserte su primer numero que desea comparar:   ";
	cin>> t;
	cout<<"inserte su  segundo numero que desesa comparar:  ";
	cin>> a;
	if(t==a)
	{
		cout<<" primer numero es mayor:  ";
	}
	
	else if(t>a)
	{
		cout<<"son iguales:  ";
	}
	else if(t<a)
	{  
		cout<<" segundo nuemro es mayor:  ";
	}
	return(0);
}
