#include <iostream>
#include <list>
using namespace std;

int main ()
{
	list<int> pilha; // declarar lista
	int x;
	
	// Inserindo dados na pilha
	pilha.push_front(1);
	pilha.push_front(2);
	pilha.push_front(3);
	pilha.push_front(4);
	
	// Removendo e mostrando elementos da pilha
	x = *pilha.begin();
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();
	cout << x << endl;
	pilha.pop_front();
	
	return 0;
}