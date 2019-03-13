/*Nama Program		: Exercise-01
Nama				: Gede Bagus Darmagita
NPM					: 140810180068
Tanggal Buat		: 13-03-2019
Deskripsi 			: exercise-01
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) {
 	cout<<"Input Panjang: ";
 	cin>>s->panjang;
 	cout<<"Input Lebar: ";
 	cin>>s->lebar;
}
float keliling(segiempat s) { 
	float keliling;
	keliling = (2*s.lebar) + (2*s.panjang);
	return keliling;
}
float luas(segiempat s) { 
	float luas;
	luas = (s.lebar*s.panjang);
	return luas;
}
// panjang diagonal segiempat
float diagonal(segiempat s) { 
	float diagonal;
	int x = 2;
	diagonal = sqrt(pow(s.lebar,2) + pow(s.panjang,x));
	return diagonal;
}
void print(segiempat s) { 
	cout<<"Keliling: "<<keliling(s)<<endl;
	cout<<"Luas: "<<luas(s)<<endl;
	cout<<"Diagonal: "<<diagonal(s)<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}

