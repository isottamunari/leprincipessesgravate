#include<iostream>
#include<cstdlib>

using namespace std;

class Record{
	private:
		string nome;
		int montepremi;
		int aiuti_usati;
	public:
		Record(string n, int m, int a);
		void inserisci_dati();
};
