#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString (char *&x,int b){
	x = new char [b+1] ;
	int c = 65;
	for (int i = 0 ; i < b ; i++ ){
		x[i] = c+i;
	}
	x[b] = 0;

}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
