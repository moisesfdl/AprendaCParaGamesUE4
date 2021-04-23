#include <iostream>

int main()
{
	/*Declarei uma variável do tipo Matriz com 5 linhas
	e 5 colunas
	como o C++ o indice começa com zero as linhas e colunas vão de 0 a 4*/
	int Matriz[5][5];

	//Percorremos a Matriz pelas suas linhas e colunas
	//i vai de 0 até 4 pois quando atingir 5 5< 5 (f) e ai sai do loop
	for (int i = 0; i < 5; i++)
	{
		//For aninhado ou seja, i = 0 j vai de 0 até 4
		for (int j = 0; j < 5; j++)
		{
			//i < j cai no caso do 1
			if (i < j)
			{
				std::cout << " 1 ";
			}
			//i == j cai no caso da diagonal 0,0 1,1 2,2 3,3 e 4,4
			else if (i == j)
			{
				std::cout << " 0 ";
			}
			//i > j cai no caso do -1
			else if (i > j)
			{

				std::cout << "-1 ";
			}
		} //fim for j
		std::cout << "\n";
	} //fim for i
	
	system("PAUSE");
	return 0;
}
int main()
{
	/*Declarei uma variável do tipo Matriz com 5 linhas
	e 5 colunas
	como o C++ o indice começa com zero as linhas e colunas vão de 0 a 4*/
	int Matriz[5][5];
	\v == vertical;
	\h == horizontal;
	//Percorremos a Matriz pelas suas linhas e colunas
	//i vai de 0 até 4 pois quando atingir 5 5< 5 (f) e ai sai do loop
	std::cout << "Matriz" << \v << ": " << std::endl;
	vertical{\v[5]\h[5]};
	std::cout << "Matriz" << \h << ": " << std::endl;
	horizontal{\h[5]\v[5]};
	for (int i = 0; i < 5; i++)
	{
		//For aninhado ou seja, i = 0 j vai de 0 até 
			//i < j cai no caso do 1
			if (i < 0)
			{
				std::cout << " 1 ";
			}
			//i == j cai no caso da diagonal 0,0 1,1 2,2 3,3 e 4,4
			else if (i == 0)
			{
				std::cout << " 0 ";
			}
			//i > j cai no caso do -1
			else if (i > 0)
			{

				std::cout << "-1 ";
			}
		} //fim for j
		std::cout << "\n";
	system("PAUSE");
	return 0;
};
