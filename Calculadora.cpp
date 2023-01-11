#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float Num1, Num2;
	char Operação;
	std::string Senhadeacesso = "senha";
	std::string Senhadigitada;
	std::string Resposta;
	char Resposta2;

	std::cout << "Digite a senha: ";
	std::cin >> Senhadigitada;

	if (Senhadigitada == Senhadeacesso)
	{
		do
		{
			system("CLS");
			std::cout << "Digite o primeiro número: ";
			std::cin >> Num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> Num2;
			std::cout << "\n****Operações****" << std::endl;
			std::cout << "+ Para adição" << std::endl;
			std::cout << "- Para subtração" << std::endl;
			std::cout << "* Para multiplicação" << std::endl;
			std::cout << "/ Para divisão" << std::endl;
			std::cout << "*****************" << std::endl;
			std::cout << "\nEscolha uma operação a ser realizada: ";
			std::cin >> Operação;

			switch (Operação)
			{
			case '+': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 + Num2) << std::endl;
				break;

			case '-': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 - Num2) << std::endl;
				break;

			case '*': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 * Num2) << std::endl;
				break;

			case '/': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 / Num2) << std::endl;
				break;

			default: std::cout << "\nNenhuma opção válida selecionada" << std::endl;
				break;
			}
			std::cout << "\nDeseja calcular novamente? Digite S para sim e N para não: ";
			std::cin >> Resposta2;
			std::cout << "\n";
		} while (Resposta2 == 'S' || Resposta2 == 's');
	}

	else
	{
		do
		{
			system("CLS");
			std::cout << "Senha incorreta, digite novamente: ";
			std::cin >> Resposta;
		} while (Resposta != Senhadeacesso);
	}
	
	if (Resposta == Senhadeacesso)
	{
		do
		{
			system("CLS");
			std::cout << "Digite o primeiro número: ";
			std::cin >> Num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> Num2;
			std::cout << "\n****Operações****" << std::endl;
			std::cout << "+ Para adição" << std::endl;
			std::cout << "- Para subtração" << std::endl;
			std::cout << "* Para multiplicação" << std::endl;
			std::cout << "/ Para divisão" << std::endl;
			std::cout << "*****************" << std::endl;
			std::cout << "\nEscolha uma operação a ser realizada: ";
			std::cin >> Operação;

			switch (Operação)
			{
			case '+': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 + Num2) << std::endl;
				break;

			case '-': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 - Num2) << std::endl;
				break;

			case '*': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 * Num2) << std::endl;
				break;

			case '/': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 / Num2) << std::endl;
				break;

			default: std::cout << "\nNenhuma opção válida selecionada" << std::endl;
				break;
			}
			std::cout << "\nDeseja calcular novamente? Digite S para sim e N para não: ";
			std::cin >> Resposta2;
			std::cout << "\n";
		} while (Resposta2 == 'S' || Resposta2 == 's');
	}
	return 0;
}