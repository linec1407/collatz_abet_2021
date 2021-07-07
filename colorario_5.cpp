//Colorario 5

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
 
int main(){
	
	ofstream cout2;
	
	cout2.open("colorario_5_output.txt");
	
	int num;
	
	cout<<"Digite hasta que numero hallar:";cin>>num;
	cout << "Output en colorario_5_output.txt" << endl << endl;
	
	for(int n=1;n<=num;n++){
		int aux_n,pico,u=0,v,k,t=0;
		
		aux_n=n;
		pico=n;
		
		while(aux_n!=1){
			if(aux_n%2==0){
				aux_n=aux_n/2;
			}
			else{
				aux_n=3*aux_n+1;
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
		
		cout2<<left<<setw(10)<<"numero"<<left<<setw(10)<<"pico"<<left<<setw(10)<<"u"<<left<<setw(10)<<"v";
		
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
					cout2<<left<<setw(10)<<"k"<<left<<setw(10)<<"t";
					aux_n=1;
				}
			}
		}
		else aux_n=0;
		cout2<<endl;
		
		cout2<<left<<setw(10)<<n<<left<<setw(10)<<pico;
		if(u!=0)cout2<<left<<setw(10)<<u;
		else cout2<<left<<setw(10)<<"--";
		cout2<<left<<setw(10)<<v;
		if(aux_n==1) cout2<<left<<setw(10)<<k<<left<<setw(10)<<t;
		cout2<<endl<<endl;
		
	}
	return 0;
}
