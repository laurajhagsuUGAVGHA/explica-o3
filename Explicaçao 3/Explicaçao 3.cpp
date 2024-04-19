#include <locale>
#include <iostream>
using namespace std;


/*int main() {
	int num = 5;
	switch (num)
	{
	case 1:
		cout << "E o numero 1";
		break;
	case 2:
		cout << "E o numero 2";
		break;
	default:
		cout << "Outro numero";
		break;
	}
}*/
/*
char letra;
cout << "Digite uma letra: ";
cin >> letra;
switch (letra)
{
case 'a':
	cout << "É a letra a";
	break;
case 'e':
	cout << "É a letra e";
	break;
case 'j':
	cout << "É a letra j";
	break;
default:
	cout << "É outra letra";
	break;
}
*/

//QUARTA LISTA 
//PRIMEIRO EXERCICIO 
/*


    int main() {
        int dia;

        cout << "Digite um numero de 1 a 7: ";
        cin >> dia;

        switch (dia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-Feira" << endl;
            break;
        case 3:
            cout << "Terca-Feira" << endl;
            break;
        case 4:
            cout << "Quarta-Feira" << endl;
            break;
        case 5:
            cout << "Quinta-Feira" << endl;
            break;
        case 6:
            cout << "Sexta-Feira" << endl;
            break;
        case 7:
            cout << "Sabado" << endl;
            break;
        default:
            cout << "Dia invalido" << endl;
            break;
        }

        return 0;
    }*/

//SEGUNDO EXERCICIO 

int main() {
    double num1, num2;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Escolha a operacao matematica (+, -, * ou /): ";
    cin >> operacao;

    switch (operacao) {
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << "Resultado: " << num1 / num2 << endl;
        else
            cout << "Erro! Divisao por zero." << endl;
        break;
    default:
        cout << "Operacao invalida." << endl;
        break;
    }

    return 0;
}