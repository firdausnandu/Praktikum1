#include<iostream>
#include<conio.h>
using namespace std;
class gajideveloper{
	public:
	void input();
	void proses();
	void tampil();
	void struk();
	
	private:
	    long int gaji1,gaji2,bonus,bonus1,bonus2,bonusA,bonusB;
		int bulan;
};

void gajideveloper::input(){
	cout<<"Selesai Berapa Bulan : ";cin>>bulan;
	cout<<endl;
}
