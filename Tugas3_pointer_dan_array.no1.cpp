#include<iostream>
using namespace std;

void tukar(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int p=5;
	int q=6;
	cout<<"Sebelum Penukaran : "<<endl;
	cout<<"Nilai A : "<<p<<endl;
	cout<<"Nilai B : "<<q<<endl;
	tukar(&p,&q);
	cout<<"Setelah Penutukar : "<<endl;
	cout<<"Nilai A : "<<p<<endl;
	cout<<"Nilai B : "<<q;
	
	return 0;
}
