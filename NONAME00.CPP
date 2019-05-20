#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main(){
char code,lagi,nama[20];
float nilai,nm,nf,na,tm,tf,tt,jml=0;
int i=1;
atas:
cout<<"Menghitung Nilai Akhir dan Konversi Mahasiswa\n";
cout<<"Nama Mahasiswa: "; cin>>nama;
do
{cout<<"Masukkan Nilai Tugas" <<i<<" = "; cin>>nilai;
jml=jml+nilai;
i++;}
while(i<=5);
cout<<"Nilai Mid Mahasiswa: "; cin>>nm;
cout<<"Nilai Final Mahasiswa: "; cin>>nf;
tt=0.3*(jml/5);
tm=0.3*nm;
tf=0.4*nf;
na=tt+tm+tf;
if ((na>=80)&&(na<=100))
code='A';
else if((na>70)&&(na<=79))
code='B';
else if((na>60)&&(na<=69))
code='C';
else if((na>50)&&(na<=59))
code='D';
else if(na<=50)
code='E';
cout<<endl;
cout<<endl;
cout<<"Menghitung Nilai Akhir dan Konversi Mahasiswa\n";
cout<<"Nama Mahasiswa 	  	  : "<<nama<<endl;
cout<<"Total Nilai Tugas  	  : "<<tt<<endl;
cout<<"Total Nilai Mid	  	  : "<<tm<<endl;
cout<<"Total Nilai Final  	  : "<<tf<<endl;
cout<<"Nilai Akhir Mahasiswa : "<<na<<endl;
cout<<"Grade Mahasiswa		  : "<<code<<endl;
cout<<"Input lagi ? [Y/T]";
lagi=getch();
clrscr();
if(lagi=='Y'||lagi=='y')goto atas;
getch();
}
