#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,u,d,c,um;
	cout<<"ingrese un numero del 1 al 3000:";
	cin>>n;
	if(n<3001)
	{
	u=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	um=n%10;
	cout<<"unidad:"<<u<<endl;
	cout<<"decena:"<<d<<endl;
	cout<<"centena:"<<c<<endl;
	cout<<"unidad de millar:"<<um<<endl;
	
	/*switch (um){
	case 1:
		cout<<"mil ";
		break;
	case 2:
		cout<<"dos mil ";
		break;
	case 3:
		cout<<"tres mil ";
		break;
	}
	switch (c){
	case 1: 
		if(u==0 && d==0)
			cout<<"cien ";
		else
			cout<<"ciento ";
		break;
	case 2:
		cout<<"doscientos ";
		break;
	case 3:
		cout<<"trescientos ";
		break;
	case 4:
		cout<<"cuatrocientos ";
		break;
	case 5:
		cout<<"quinientos ";
		break;
	case 6:
		cout<<"seiscientos ";
		break;
	case 7:
		cout<<"setecientos ";
		break;
	case 8:
		cout<<"ochocientos ";
		break;
	case 9:
		cout<<"novecientos ";
		break;
	}
	switch (d){
	case 1:switch (u){
		case 0: 
			cout<<"diez ";
			break;
		case 1:  
			cout<<"once ";
			break;
		case 2: 
			cout<<"doce ";
			break;
		case 3: 
			cout<<"trece ";
			break;
		case 4: 
			cout<<"catorce ";
			break;
		case 5: 
			cout<<"quince ";
			break;
		case 6: 
			cout<<"dieciseis ";
			break;
		case 7: 
			cout<<"diecisiete ";
			break;
		case 8: 
			cout<<"dieciocho ";
			break;
		case 9: 
			cout<<"diecinueve ";
			break;
		}
	break;
	case 2: switch (u){
		case 0: 
			cout<<"veinte ";
			break;
		case 1:
			cout<<"veintiuno ";
			break;
		case 2:
			cout<<"veintidos ";
			break;
		case 3:
			cout<<"veintitres ";
			break;
		case 4:
			cout<<"veinticuatro ";
			break;
		case 5:
			cout<<"veinticinco ";
			break;
		case 6:
			cout<<"veintiseis ";
			break;
		case 7:
			cout<<"veintisiete ";
			break;
		case 8:
			cout<<"veintiocho ";
			break;
		case 9:
			cout<<"veintinueve ";
			break;
	}
	break;
	case 3:
		if(u==0)
			cout<<"treinta ";
		else
			cout<<"treinta y ";
	break;
	case 4:
		if(u==0)
			cout<<"cuarenta ";
		else
			cout<<"cuarenta y ";
	break;
	case 5:
		if(u==0)
			cout<<"cincuenta ";
		else
			cout<<"cincuenta y ";
	break;
	case 6:
		if(u==0)
			cout<<"sesenta ";
		else
			cout<<"sesenta y ";
		break;
	case 7:
		if(u==0)
			cout<<"setenta ";
		else
			cout<<"setenta y ";
		break;
	case 8:
		if(u==0)
			cout<<"ochenta ";
		else
			cout<<"ochenta y ";
		break;
	case 9:
		if(u==0)
			cout<<"noventa ";
		else
			cout<<"noventa y ";
		break;
	}
	switch (u){
	case 1:
		if(d>2)
		cout<<"uno";
		break;
	case 2:
		if(d>2)
		cout<<"dos";
		break;
	case 3:
		if(d>2)
		cout<<"tres";
		break;
	case 4:
		if(d>2)
		cout<<"cuatro";
		break;
	case 5:
		if(d>2)
		cout<<"cinco";
		break;
	case 6:
		if(d>2)
		cout<<"seis";
		break;
	case 7:
		if(d>2)
		cout<<"siete";
		break;
	case 8:
		if(d>2)
		cout<<"ocho";
		break;
	case 9:
		if(d>2)
		cout<<"nueve";
		break;
	}
	}
	else 
	   cout<<"numero fuera del rango"<<endl;
	

	
	
	*/
	}
	return 0;
}

