
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	int a[4],k;
	
	do{
		cout<<"Digite a1: ";cin>>a[0];
	}while(a[0]%2==0);
	do{
		cout<<"digite k: ";cin>>k;
	}while(k%2==0);
	
	
	for(int i=1;i<=3;i++){
		a[i]=pow(4,k)*a[i-1]+(pow(4,k)-1)/3;
	}
	
	cout<<endl<<endl;
	
	cout<<"-";
	for(int i=0;i<4;i++){
		int dec=0,aux=3*a[i]+1;
		
		while(aux>0){
			aux=aux/10;
			dec++;
		}
		if(i!=0)
		    for(int j=1;j<2*k;j++){
		    	for(int b=1;b<=dec+1;b++){
		    		cout<<" ";
				}
		        if(j==2*k-1)cout<<"-";
				else cout<<" ";
			}
		    	    
		for(int a=1;a<=dec+1;a++){
			cout<<"-";
		}   
		cout<<"-";    
	}
	cout<<endl;
	cout<<"|";
	for(int i=0;i<4;i++){
		int dec=0,aux=3*a[i]+1;
		
		while(aux>0){
			aux=aux/10;
			dec++;
		}
		if(i!=0)
		    for(int j=1;j<2*k;j++){
			    cout<<left<<setw(dec+1)<<"";
				if(j==2*k-1)cout<<"|";
				else cout<<" ";
		    }
		
		cout<<left<<setw(dec+1)<<a[i]<<"|"; 
	}
	cout<<endl;
	cout<<"-";
	for(int i=0;i<4;i++){
		int dec=0,aux=3*a[i]+1;
		
		while(aux>0){
			aux=aux/10;
			dec++;
		}
		if(i!=0)
		    for(int j=1;j<2*k;j++){
		    	for(int b=1;b<=dec+1;b++){
		    		cout<<"-";
				}
		        cout<<"-";    
			}
		    	    
		for(int a=1;a<=dec+1;a++){
			cout<<"-";
		}   
		cout<<"-";    
	}
	cout<<endl;
	cout<<"|";
	int p_num=3*a[0]+1;
	for(int i=0;i<4;i++){
		int dec=0,aux=3*a[i]+1;
		
		while(aux>0){
			aux=aux/10;
			dec++;
		}
		if(i!=0)
		    for(int j=1;j<2*k;j++){
			    cout<<left<<setw(dec+1)<<p_num<<"|";
			    p_num=2*p_num;
		    }
		
		cout<<left<<setw(dec+1)<<p_num<<"|"; 
		p_num=2*p_num;
	}
	cout<<endl;
	cout<<"-";
	for(int i=0;i<4;i++){
		int dec=0,aux=3*a[i]+1;
		
		while(aux>0){
			aux=aux/10;
			dec++;
		}
		if(i!=0)
		    for(int j=1;j<2*k;j++){
		    	for(int b=1;b<=dec+1;b++){
		    		cout<<"-";
				}
		        cout<<"-";    
			}
		    	    
		for(int a=1;a<=dec+1;a++){
			cout<<"-";
		}   
		cout<<"-";    
	}
	cout<<endl<<endl;
	
	return 0;
}

