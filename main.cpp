#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int codigo= 0; 
	double aumento= 0, salarioatual= 0;
	
	cout<<"Digite um codigo: ";
	cin>> codigo;
	cout<<"digite o salario atual ";
	cin>>salarioatual;
	switch (codigo){
		
		case 1:
			cout<<"1 - Escriturario \n";
			aumento= (salarioatual * 50)/100;
			cout<<"O salario com aumento de 50% e de R$: "<<aumento+salarioatual<< " reais";
			break;
			
		case 2:
			cout<<"2 - Secretario \n";
			aumento= (salarioatual * 35)/100;
			cout<<"O salario com aumento de 35% e de R$: "<<aumento+salarioatual<< " reais";
			break;
			
		case 3:
			cout<<"3 - Caixa \n";
			aumento= (salarioatual * 20)/100;
			cout<<"O salario com aumento de 20% e de R$: "<<aumento+salarioatual<< " reais";
			break;
			
		case 4:
			cout<<"4 - Gerente \n";
			aumento= (salarioatual * 10)/100;
			cout<<"O salario com aumento de 10% e de R$: "<<aumento+salarioatual<< " reais";
			break;
			
		case 5:
			cout<<"5 - Diretor \n";
			cout<<"Nao tem aumento \n";
			cout<<"O salario do diretor mantera o mesmo R$: "<<salarioatual<< " reais";
			break;
			
			
			
		
		 
			
			
			
		}
	
	
	return 0;
}
