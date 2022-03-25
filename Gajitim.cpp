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
void gajideveloper::proses(){
	gaji1=22000000;
	gaji2=28000000;
	bonus1=(0.06*22000000)+gaji1;
	bonus2=(0.06*28000000)+gaji2;
	bonusA=0.06*22000000;
	bonusB=0.06*28000000;
	
	
}
void gajideveloper::tampil(){
	if (bulan <= 5){
		cout<<"Gaji tim 1 adalah : "<<bonus1<<" (Bonus 6%)"<<endl;;
		cout<<"Gaji tim 2 adalah : "<<bonus2<<" (Bonus 6%)";
	}
	else{
		cout<<"Gaji tim 1 adalah : "<<gaji1<<endl;
		cout<<"Gaji tim 2 adalah : "<<gaji2;
	}
}
void gajideveloper::struk(){
	cout<<"\n\n<<Slip Gaji>>>"<<endl;
	cout<<"Nama       : Tim Fitur Login"<<endl;
	cout<<"Jabatan    : Developer"<<endl;
	cout<<"Gaji Pokok : "<<gaji1<<endl;
	cout<<"Bonus      : "<<bonusA<<endl;
	cout<<"Gaji Setelah Bonus : "<<bonus1;
	
	cout<<"\n\n<<Slip Gaji>>>"<<endl;
	cout<<"Nama       : Tim Fitur Login"<<endl;
	cout<<"Jabatan    : Developer"<<endl;
	cout<<"Gaji Pokok : "<<gaji2<<endl;
	cout<<"Bonus      : "<<bonusB<<endl;
	cout<<"Gaji Setelah Bonus : "<<bonus2;
	
}

main(){
	gajideveloper x;
	x.input();
	x.proses();
	x.tampil();
	x.struk();
}
