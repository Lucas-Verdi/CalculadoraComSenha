#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float Num1, Num2;
	char Opera��o;
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
			std::cout << "Digite o primeiro n�mero: ";
			std::cin >> Num1;
			std::cout << "Digite o segundo n�mero: ";
			std::cin >> Num2;
			std::cout << "\n****Opera��es****" << std::endl;
			std::cout << "+ Para adi��o" << std::endl;
			std::cout << "- Para subtra��o" << std::endl;
			std::cout << "* Para multiplica��o" << std::endl;
			std::cout << "/ Para divis�o" << std::endl;
			std::cout << "*****************" << std::endl;
			std::cout << "\nEscolha uma opera��o a ser realizada: ";
			std::cin >> Opera��o;

			switch (Opera��o)
			{
			case '+': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 + Num2) << std::endl;
				break;

			case '-': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 - Num2) << std::endl;
				break;

			case '*': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 * Num2) << std::endl;
				break;

			case '/': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 / Num2) << std::endl;
				break;

			default: std::cout << "\nNenhuma op��o v�lida selecionada" << std::endl;
				break;
			}
			std::cout << "\nDeseja calcular novamente? Digite S para sim e N para n�o: ";
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
			std::cout << "Digite o primeiro n�mero: ";
			std::cin >> Num1;
			std::cout << "Digite o segundo n�mero: ";
			std::cin >> Num2;
			std::cout << "\n****Opera��es****" << std::endl;
			std::cout << "+ Para adi��o" << std::endl;
			std::cout << "- Para subtra��o" << std::endl;
			std::cout << "* Para multiplica��o" << std::endl;
			std::cout << "/ Para divis�o" << std::endl;
			std::cout << "*****************" << std::endl;
			std::cout << "\nEscolha uma opera��o a ser realizada: ";
			std::cin >> Opera��o;

			switch (Opera��o)
			{
			case '+': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 + Num2) << std::endl;
				break;

			case '-': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 - Num2) << std::endl;
				break;

			case '*': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 * Num2) << std::endl;
				break;

			case '/': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 / Num2) << std::endl;
				break;

			default: std::cout << "\nNenhuma op��o v�lida selecionada" << std::endl;
				break;
			}
			std::cout << "\nDeseja calcular novamente? Digite S para sim e N para n�o: ";
			std::cin >> Resposta2;
			std::cout << "\n";
		} while (Resposta2 == 'S' || Resposta2 == 's');
	}
	return 0;
}