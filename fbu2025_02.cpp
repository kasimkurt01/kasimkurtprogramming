#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double const PI=3.141593;
int main(){
	double h=1.0;
	double x=PI/4;
	double gt,ilt,simt,tt;
	setlocale(LC_ALL,"TURKISH");
	tt=cos(x);
	ilt=(sin(x+h)-sin(x))/h; //ileri t�rev
	gt=(sin(x)-sin(x-h))/h; //geri t�rev
	simt=(sin(x+h)-sin(x-h))/(2*h); //simetrik t�rev
	cout << setw(15)<<"h de�eri"
	<<setw(15)<<"ileri turev" 
	<<setw(15)<<"geri turev"
	<<setw(15)<<"simetrik turev"
	<< setw(15)<<"Tam T�rev "<<setw(15)<<"Hata\n";
	
	cout <<  setw(15)<<h 
	<< setw(15) <<ilt
	<< setw(15) <<gt
	<< setw(15) <<simt 
	<<setw(15)<< tt
	<< setw(15)<< tt-simt<< "\n";
	 
	 while (h>1e-10){
	 	h=h/10;
	 	ilt=(sin(x+h)-sin(x))/h; //ileri t�rev
		gt=(sin(x)-sin(x-h))/h; //geri t�rev
		simt=(sin(x+h)-sin(x-h))/(2*h); //simetrik t�rev
	 	cout <<  setw(15)<<h 
		<< setw(15) <<ilt
		<< setw(15) <<gt
		<< setw(15) <<simt 
		<<setw(15) << tt
		<< setw(15)<< tt-simt<< "\n";
	 	
	 }
	
}
