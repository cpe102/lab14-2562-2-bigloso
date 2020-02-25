#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &i,int &j, int &k, int &l);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &i,int &j, int &k, int &l){
	int x[4] = {i,j,k,l} ;
	for(int q=0;q<10;q++){
	int a = rand()%4;
	int b = rand()%4;

	int as =0 ;
	as=x[a] ;
	x[a] = x[b] ;
	x[b] = as ;
	}
	i=x[0];
	j=x[1];
	k=x[2];
	l=x[3];
}