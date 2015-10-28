/*
 *
 *   Criado por Marcus Mota
 *   Email: marcushcsm@gmail.com
 *
 *
 */


#include <iostream>
using namespace std;

void pontilhada(char caracter, int length)
{
    for(int j=0;j<length;j++)
    {
        cout << caracter;
    }
};

struct dataModelo
{
    int dia;
    int mes;
    int ano;
};

struct aluno
{
	long aluno;
	char livro[30];
	dataModelo dtEmp;
	int atraso;
	float multa;
};

float totalMulta(aluno *p, int numDev)
{
	float total =0;
	for(int i=0;i<numDev;i++)
	{
		total = total + p[i].multa;
	}
	return total;
}



int main (void){

	int numDev;
    const float multaPorDia = 0.80;

	aluno * p = new aluno[numDev];

    cout << "Qual o número de devoluções para hoje? ";
    cin >> numDev;

    dataModelo dtDev;

    cout << "Qual a data de devolução? ";

    cin >> dtDev.dia;
    cin >> dtDev.mes;
    cin >> dtDev.ano;



    for(int i=0;i<numDev;i++)
    {
    	pontilhada('-',30);
    	cout << endl;
    	cout << "Aluno       : ";
    	cin >> p[i].aluno;
    	cout << "Livro       : ";
    	cin >> p[i].livro;
    	cout << "Empréstimo  : ";
    	cin >> p[i].dtEmp.dia;
        cin >> p[i].dtEmp.mes;
        cin >> p[i].dtEmp.ano;
    	cout << "Atraso      : ";
    	cin >> p[i].atraso;
    	cout << "Multa       : ";
    	cin >> p[i].multa;
    }

    pontilhada('-',50);

	cout << endl << endl << "Resumo do dia "    << dtDev.dia << " de "
												<< dtDev.mes << " de "
												<< dtDev.ano << endl;

	for(int i=0;i<numDev;i++)
    {
    	cout << endl;
    	cout << p[i].aluno << " " << p[i].livro << " " << p[i].dtEmp.dia << "/" << p[i].dtEmp.mes << "/" << p[i].dtEmp.ano << " -> " << p[i].multa;
    }

    cout << endl << endl;
	cout << "Total em multas: " << totalMulta(p, numDev) <<  endl << endl;

	pontilhada('-',50);


    return (0);
}
