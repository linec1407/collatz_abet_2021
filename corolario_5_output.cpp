//Colorario 5

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;
 
ofstream file; 
 
int main(){
	
	long long int num;
	
	file.open("corolario5_output.txt");
	
	do{
		cout<<"Digite hasta que numero hallar: ";cin>>num;	
	}while(num<=0);
	
	if(num%2==0){
		num=num-1;
	}
	cout << "Output en colorario5_output.txt" << endl << endl;
	file<<left<<setw(10)<<"numero"<<left<<setw(10)<<"pico"<<left<<setw(10)<<"Omega"<<left<<setw(10)<<"u"<<left<<setw(10)<<"v"<<left<<setw(10)<<"k"<<left<<setw(10)<<"t";
	for(long long int n=num; n>=1; n=n-2){
		long long int aux_n,pico,u=0,v,k,t=0, contador=0;
		
		aux_n=n;
		pico=n;
		
		while(aux_n!=1){
			if(aux_n%2==0){
				aux_n=aux_n/2;
				contador++;
			}
			else{
				aux_n=3*aux_n+1;
				contador++;
			}
			
			if(pico<aux_n){
				pico=aux_n;
			}
		}
		if(pico!=n) u=(pico-1)/3;
		
		aux_n=pico;
		
		while(aux_n%2==0){
			aux_n=aux_n/2;
		}
		v=aux_n;
		/*
		cout<<left<<setw(10)<<"numero"<<left<<setw(10)<<"pico"<<left<<setw(10)<<"u"<<left<<setw(10)<<"v"<<endl;
		cout<<left<<setw(10)<<n<<left<<setw(10)<<pico;
		if(u!=0)cout<<left<<setw(10)<<u;
		else cout<<left<<setw(10)<<"--";
		cout<<left<<setw(10)<<v<<endl<<endl;*/
		
		if(u!=0){
			aux_n=v-2;
			if(aux_n>0 and aux_n%3==0){
				aux_n=aux_n/3;
				
				if(aux_n%2==1){
					k=aux_n;
					aux_n=pico;
					while(aux_n%2==0){
						aux_n=aux_n/2;
						t++;
					}
					t=(t-1)/2;
					//cout<<left<<setw(10)<<"k"<<left<<setw(10)<<"t";
					aux_n=1;
				}
			}
		}
		else aux_n=0;
		file<<endl;
		
		file<<left<<setw(10)<<n<<left<<setw(10)<<pico<<left<<setw(10)<<contador;
		if(u!=0)file<<left<<setw(10)<<u;
		else file<<left<<setw(10)<<"--";
		file<<left<<setw(10)<<v;
		if(aux_n==1) file<<left<<setw(10)<<k<<left<<setw(10)<<t;
		file<<endl;
	}
	return 0;
}
