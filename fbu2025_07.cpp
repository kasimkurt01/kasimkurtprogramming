#include<iostream>
#include<cmath>
using namespace std;

double fnk(double x){
	return exp(x)*log(x)-pow(x,2);
}

double IntKbul(double a, double b){
	double dx,x1,x2,x;
	dx=abs(b-a);
	x1=a;x2=b;
	
	while (dx>1e-5){
		if(fnk(x1)*fnk(x2)<0){
			x=(x1+x2)/2;
			if(fnk(x1)*fnk(x)<0)
				x2=x;
				else 
				if(fnk(x2)*fnk(x)<0)
				x1=x;
			}
			else {
				cout << "\nKok Yok\n ";
				return -99999;
			}
			dx=abs(x2-x1);
	}
	return x;
}

int main(){
	double a=1, b=10;
	cout << "Denkelemin Koko :" <<  IntKbul(a,b) << endl;
}
