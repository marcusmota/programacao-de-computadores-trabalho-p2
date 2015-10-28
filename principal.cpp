#include <iostream>
using namespace std;

struct aluno
{
	long aluno;
	char livro[30];
	char dtEmp[10];
	int atraso;
	float multa;
};

int main (void){

	int numDev;
	char dtDev[10] ;
	float totalMultas;

	aluno * p = new aluno[numDev];
	
    cout << "Qual o número de devoluções para hoje? ";
    cin >> numDev;
    
    cout << "Qual a data de devolução? ";
    cin >> dtDev;

    

    for(int i=0;i<numDev;i++)
    {
    	for(int j=0;j<30;j++)
    	{
    		cout << "-";
    	}
    	cout << endl;
    	cout << "Aluno       : ";
    	cin >> p[i].aluno; 
    	cout << "Livro       : ";
    	cin >> p[i].livro; 
    	cout << "Empréstimo  : ";
    	cin >> p[i].dtEmp;
    	cout << "Atraso      : ";
    	cin >> p[i].atraso; 
    	cout << "Multa       : ";
    	cin >> p[i].multa;
    	totalMultas = totalMultas + p[i].multa; 
    }

    for(int j=0;j<30;j++)
	{
		cout << "-";
	}

	cout << endl << endl << "Resumo do dia "	<< dtDev[0] << dtDev[1] << " de " 
										<< dtDev[3] << dtDev[4] << " de " 
										<< dtDev[6] << dtDev[7] << dtDev[8] << dtDev[9] << endl;

	for(int i=0;i<numDev;i++)
    {
    	cout << endl;
    	cout << p[i].aluno << " " << p[i].livro << " " << p[i].dtEmp << " -> " << p[i].multa;
    }

    cout << endl << endl;
	cout << "Total em multas: " << totalMultas <<  endl << endl;

	for(int j=0;j<30;j++)
	{
		cout << "-";
	}

	cout << endl;
    return (0);
} 	