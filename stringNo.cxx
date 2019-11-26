// Cumple la fucion que muestre solo una letra sin repetir. Las letra todas
// que se usaron. Falta ordenar el programa, emprolijar o mejorarlo.
// Esta fue la forma en que me salio.
//
//


#include<iostream>
#include<string>
using namespace std;


string cadena;
int repite;
int norepite;
int len;


int main()
{

// getline(cin, my_string, '\n'); Ejemplo
// int len = my_string1.length(); // or .size();

cout << "Ingrese frase o cadena de letras: ";
getline(cin, cadena, '\n');
int len = cadena.length();
repite=0;
norepite=0;

//  01234567891123
//  palabraspaltas

//  re - 0,0
//  nr - 1,3
//   i - 1,2
//   j - 2,3
//   l - 1,2
//   k - 1,2


int j=1;
int k=0;
int i2=0;

cout << "RE     NR       i       j       l       k       len" << endl;

do
	{
		for (int l=0; l<=len; l++)
		{
		repite=0;
		norepite=0;
		
			for (int i=0; i<j; i++)
			{
			if (cadena[j] == cadena[i])
				{repite++; i2=i; }
				else
				{norepite++; i2=i; }
			}
			j++;
			k++;
			
			if (repite==0)
				{ cout << cadena[k];}
				else
				{ cout << endl;}
				
			//cout << "RE       NR       i       j       l       k       len" << endl;
			//cout << repite << "       " << norepite  << "       " << i2 << "       " << j << "       " << l << "       " << k << "       " << len << endl;
		}
		
	} while (k<=len);
	
return(0);


}
