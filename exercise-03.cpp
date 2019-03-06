/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi : Program ini menghitung gaji pegawai,ratrata,tertinggi,terendah,dan mengurutkan
 				daftar pegawai berdasarkan NIP secara ascending
 * Tahun    : 2019
 */
#include <iostream>  
#include <windows.h>
#include <string.h>

using namespace std;  
  
struct data{  
    char NIP[14];  
    char nama[50];
    int gol;  
    int gaji;  
};  
  
data pegawai[100];   
   
void inputPegawai (data pegawai [], int &n);
void sortingNIP (data pegawai[], int &n); 
void cetakDaftar(data pegawai [], int &n);
void cariGaji (data pegawai [], int &n);
void rataGaji(data pegawai[], int &n);  
void gajiTerendah(data pegawai[], int &n); 
void gajiTertinggi(data pegawai [],int &n);    

int main(){
	int n;
	cout << "-----------------------------------"<<endl;
	cout << "\t  SELAMAT DATANG\n\t\tDI "<<endl;
    cout << "\tPROGRAM DATA PEGAWAI" << endl;
    cout << "-----------------------------------"<<endl;
    cout << "Berikut merupakan aturan gaji pegawai:"<<endl<<endl;
	cout << "Golongan	   Gaji"<<endl;	
	cout << "   1		2.000.000"<<endl;
	cout << "   2		3.000.000"<<endl;
	cout << "   3		5.000.000"<<endl;
	cout << "   4		8.000.000"<<endl<<endl;
	cout<<"Masukkan jumlah pegawai : ";  
    cin>>n;
    cout << "-----------------------------------"<<endl;
    inputPegawai(pegawai,n);
	system("cls");  
	cout << "-----------------------------------"<<endl;
	cout<<"Daftar pegawai berdasarkan NIP secara ascending\n\n"; 
	Sleep(1500);
	sortingNIP(pegawai,n);  
	cetakDaftar(pegawai, n); 
	cout << "-----------------------------------"<<endl;
	cout<<"\tDAFTAR GAJI PEGAWAI\n\n"; 
	Sleep(1000);
	cariGaji (pegawai, n);
    rataGaji(pegawai,n);
    gajiTerendah(pegawai,n);  
	gajiTertinggi(pegawai,n);     
}  
   

void inputPegawai(data pegawai[],int &n){  
    for (int i=0; i<n;i++){  
        cout<<"\nMasukkan Data pegawai ke-"<<i+1<<endl;
        cout<<"Masukkan Nama Pegawai      : "; 
        cin.ignore();
		cin.getline(pegawai[i].nama,50); 
        cout<<"Masukkan NIP Pegawai       : ";cin>>pegawai[i].NIP;
        do{  
            cout<<"Masukkan golongan Pegawai(1-4) : ";cin>>pegawai[i].gol;  
        }  
            while(pegawai[i].gol>4 || pegawai[i].gol<1);  
          
        cout<<endl;  
    }  
}  

void cariGaji (data pegawai[], int &n){ 
	int gaji=0; 
    for (int i=0; i<n; i++){  
        if (pegawai[i].gol==1){  
            pegawai[i].gaji=2000000;  
        }  
        else if (pegawai [i].gol==2){  
            pegawai[i].gaji=3000000;  
        }  
        else if (pegawai [i].gol==3){  
            pegawai[i].gaji=5000000;  
        }  
        else if (pegawai [i].gol==4){  
            pegawai [i].gaji=8000000;  
        }
	cout<<"Nama : "<<pegawai[i].nama<<endl;
	cout<<"Golongan : "<<pegawai[i].gol<<endl;
	cout<<"Gaji : "<<pegawai[i].gaji<<endl<<endl;
    }
	  
}  

void sortingNIP(data pegawai[], int &n){
	int index;  
	data temp;
    for(int i=0; i<n; i++){
		for(int j=i; j<n-1; j++){
			index=strcmp(pegawai[i].NIP, pegawai[j+1].NIP);
			if(index>0){
				temp=pegawai[i];
				pegawai[i]=pegawai[j+1];
				pegawai[j+1]=temp;
			}
		}  
    }  
}  

void cetakDaftar(data pegawai [], int &n){
	 for (int i=0; i<n;i++){  
        cout<<"\Data pegawai ke-"<<i+1<<endl;  
        cout<<"Nama Pegawai      : ";cout<<pegawai[i].nama<<endl;  
        cout<<"NIP Pegawai       : ";cout<<pegawai[i].NIP<<endl;  
        cout<<"golongan Pegawai(1-4) : ";cout<<pegawai[i].gol<<endl<<endl;  
        }  
}
  
void rataGaji (data pegawai [], int &n){
	int rataRata; 
    int gajiTotal=0;  
    for (int i=0 ; i<n ; i++){  
        gajiTotal+=pegawai[i].gaji;  
    }  
    rataRata=gajiTotal/n;  
    cout<<"Rata-rata gaji karyawan      	: Rp."<<rataRata<<endl<<endl;  
} 
    
void gajiTerendah(data pegawai[], int &n){  
        cout<<"Pegawai dengan gaji terendah	:\n";  
        for (int i=0;i <n ; i++){  
            if (pegawai[i].gol==pegawai[0].gol){  
                cout<<" "<<pegawai[i].nama<<",";  
            }  
        }  
        cout<<"\b dengan gaji Rp."<<pegawai[0].gaji<<",-\n\n";
    }  

void gajiTertinggi(data pegawai[], int &n){  
        cout<<"Pegawai dengan gaji tertinggi	:\n";  
        for (int i=0;i <n ; i++){  
            if (pegawai[i].gol==pegawai[n-1].gol){  
                cout<<" "<<pegawai[i].nama<<",";  
            }  
        }  
        cout<<"\b dengan gaji Rp."<<pegawai[n-1].gaji<<",-\n"; 
    }  



    

