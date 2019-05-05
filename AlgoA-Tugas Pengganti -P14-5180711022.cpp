#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

main(){

    struct mhs{
    char nb[20];
    int hb,jb;

    };
    mhs ta[10];
    mhs temp;

system("color a");
char mem;
float dis,ku,disc,hs,tu,tot1,tot2=0;
string id,idn,nm;
int du,jml;
string nama[10];
nama[0]="Bayu";
nama[1]="Irvan";
nama[2]="Susiati";
nama[3]="Diana";
nama[4]="Roni";

cout<<"apakah Anda member atau non : ";cin>>mem;
system("cls");
if(mem=='y'||mem=='Y')
{
    cout<<"inputkan No identitas : ";cin>>idn;


 if(idn=="A001"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[0]<<endl;
}
else if(idn=="A002"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[1]<<endl;
}
else if(idn=="A003"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[2]<<endl;
}
else if(idn=="A007"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[3]<<endl;
}
else if(idn=="A008"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[4]<<endl;
}

}

else if(mem=='t'||mem=='T')
{
    cout<<"Masukkan Nama : ";cin>>nama[0];
    cout<<"No Identitas  : ";cin>>idn;
    cout<<endl;
}

cout<<"Berapa Jumlah Barang : ";cin>>jml;cout<<endl;
for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>ta[i].nb;
    cout<<"Masukkan Jumlah barang : ";cin>>ta[i].jb;
    cout<<"masukkan Harga Barang  : ";cin>>ta[i].hb;
    cout<<endl;

tot1=ta[i].jb*ta[i].hb;
tot2=tot2+tot1;
}
for(int a=0;a<jml;a++){
    for(int j=0;j<(jml-1);j++){
        if(ta[j].hb>ta[j+1].hb)
        {
          temp.hb=ta[j].hb;
          ta[j].hb=ta[j+1].hb;
          ta[j+1].hb=temp.hb;

        strcpy(temp.nb,ta[j].nb);
        strcpy(ta[j].nb,ta[j+1].nb);
        strcpy(ta[j+1].nb,temp.nb);

        temp.jb=ta[j].jb;
        ta[j].jb=ta[j+1].jb;
        ta[j+1].jb=temp.jb;

        }

    }
}
cout<<"Harga Setelah urut\n";
for(int i=0;i<jml;i++){
    cout<<"Nama Barang   : "<<ta[i].nb<<endl;
    cout<<"Harga         : "<<ta[i].hb<<endl;
    cout<<"Jumlah Barang : "<<ta[i].jb<<endl<<endl;

}


cout<<"Total Harga : "<<tot2<<endl;
if(mem=='y'||mem=='Y'){
    dis=5/(float)100;
  disc=tot2*dis;
  hs=tot2-disc;

    cout<<"Diskon Anda Adalah : "<<disc<<endl;
    cout<<"Total Yang Harus Dibayar :"<<hs<<endl;
cout<<"Masukkan Uang : ";cin>>ku;
cout<<"kembalian     : "<<ku-hs;

}

else if(mem=='t'||mem=='T'){
    cout<<"Anda tidak Dapat Discon "<<endl;
    cout<<"Masukkan Uang : ";cin>>ku;
    cout<<"kembalian     : "<<ku-tot2;
}

}
