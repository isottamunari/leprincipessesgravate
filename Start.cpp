#include<iostream>
#include<cstdlib>
#include<fstream>	
#include "Start.h"

using namespace std;

Start :: Start(){
	
}

void Start :: mostra_domanda(){
	ofstream out;
	out.open("domande.rtf");
	out.close();
}

void Start :: inserisci_risposta(string r){
	
}
