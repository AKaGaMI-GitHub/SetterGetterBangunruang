#include <iostream>
#include <string>
using namespace std;

class bangundatar{
	private:
		float panjang;
		float lebar;
		
	public:
		void setpanjang(float p){
			panjang = p;
		}
		float getpanjang(){
			return panjang;
		}
		void setlebar(float l){
			lebar = l;
		}
		float getlebar(){
			return lebar;
		}
		float luas(){
			return panjang*lebar;
		}
};

int main (){
	bangundatar bd;
	float panjang,lebar,luas;
	
	cout<<"Program Bangun Datar Setter Getter"<<endl;;
	cout<<"Masukan Panjang : ";cin>>panjang;
	cout<<"Masukan Lebar : ";cin>>lebar;
	bd.setpanjang(panjang);
	bd.setlebar(lebar);
	luas=bd.luas();
	cout<<"Luas Bangun Datar Adalah : "<<luas;
}

