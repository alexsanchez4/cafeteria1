# include <iostream>
# include <conio.h>
#include<string>

using namespace std;

int main (){
	
	//declaraciones e inicializacion;
	string nom ;
	int numero , bot = 0;
	int contador=0, mesa=0 ;
	
	cout<<"Bienbenido a la cafeteria xyz"<<endl;
	cout<<"ingrese Cero (0) para solicitar ingreso"<<endl;
	cin>> bot;
	
	// proceso;
	if (numero == bot){
		cout<<"ingrse su nombre: "<<endl;
		cin>>nom;
		contador = mesa+1;
	    cout<<"su mesa es: "<<contador<<endl;
	    
	    cout<<"ingrse su nombre: "<<endl;
		cin>>nom;
		contador = mesa+2;
	    cout<<"su mesa es: "<<contador<<endl;
	
		}
	else{
		cout<<"sin reservas:"<<endl;
	}	

     


	
	return 0;
}

