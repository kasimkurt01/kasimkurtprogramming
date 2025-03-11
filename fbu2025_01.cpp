#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double const PI=3.141593;
int main(){
	double h=1.0;
	double x=PI/4;
	double t,tt;
	setlocale(LC_ALL,"TURKISH");
	tt=cos(x);
	
	t=(sin(x+h)-sin(x))/h; //ileri t�rev
	cout << setw(15)<<"h de�eri"<<setw(15)<<"turev" 
	<< setw(15)<<"Tam T�rev "<<setw(15)<<"Hata\n";
	
	cout <<  setw(15)<<h << setw(15) <<t << 
	 setw(15)<< tt<< setw(15)<< tt-t<< "\n";
	 
	 while (h>1e-10){
	 	h=h/10;
	 	t=(sin(x+h)-sin(x))/h;
	 	cout <<  setw(15)<<h << setw(15) <<t << 
	 setw(15)<< tt<< setw(15)<< tt-t<< "\n";
	 	
	 }
	
}
