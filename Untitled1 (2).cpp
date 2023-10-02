#include <bits\stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int> A , int n=100);
int ContarMultiplosDeDos(vector <int> vec);
void MostrarVector(vector<int> A);

int main()
{
	vector<int> A;
    int Contador;
    int N;
	cout<<"Ingrese cantidad de elementos del vector"<<endl;
	cin>>N;
	A=GenerarVector(A ,N);
	Contador= ContarMultiplosDeDos(A);
	
	MostrarVector(A);
	
	cout<<"los multiplos de 2 son:"<<Contador<<endl;
	return 0;
}

vector<int>GenerarVector(vector<int> A , int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%100;
		
	A.push_back (e);
	}
	return A;
}

int ContarMultiplosDeDos(vector <int> vec)
{
	int i;
	int Contador=0;
	for(i=0; i<vec.size(); i++)
	{
		if(vec[i]%2==0)
		{
			
			Contador++;
		}
		
	}
	return Contador;
}

void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<"/";
	}
		cout<<endl;
}

