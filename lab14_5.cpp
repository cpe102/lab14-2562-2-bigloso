#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *i,int *j, int *k, int *l){
	int x[] = {*i,*j,*k,*l};
	for (int i=0;i<10;i++){
		int s = rand()%4;
		int w = rand()%4;
		int temp = x[s];
		x[s] = x[w];
		x[w] = temp;
	}
	*i=x[0];	
	*j=x[1];	
	*k=x[2];	
	*l=x[3];	
}