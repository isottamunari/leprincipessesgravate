#include<iostream>
#include<cstdlib>
#include "Start.h"
#include "AggiungiDomanda.h"
#include "Record.h"
using namespace std;

int main(){
	
	system("COLOR F1");
	cout<<"CHI VUOL ESSERE MILIONARIO?"<<endl;
	cout<<endl;
	cout<<"Questo e' il menu', cosa vuoi fare?"<<endl<<endl;
	cout<<"START"<<endl;
	cout<<"AGGIUNGI DOMANDA"<<endl;
	cout<<"RECORD"<<endl;
	cout<<"CREDITI"<<endl;
	cout<<"ESCI"<<endl;
	
	string n;
	int m,a;
	string scelta;
	getline(cin,scelta);
	cout<<endl;
	if(scelta=="start" || scelta=="START")
	Start s();
	else
	{
		if(scelta=="AGGIUNGI DOMANDA" || scelta=="aggiungi domanda")
		AggiungiDomanda a();
		else
		{
			if(scelta=="RECORD" || scelta=="record")
			Record r(n,m,a);
			else
			{
				if(scelta=="crediti" || scelta=="CREDITI")
				{
					cout<<endl;
					cout<<"BRAHIMI PAMELA"<<endl;
					cout<<"CORRADI SOPHIA"<<endl;
					cout<<"MUNARI ISOTTA"<<endl;
					cout<<"ZALLA FLAVIO"<<endl;
				}
				else
				{
					if(scelta=="esci" || scelta=="ESCI")
					return 0;
				}
			}
		}
	}
	
	
	return 0;
}
