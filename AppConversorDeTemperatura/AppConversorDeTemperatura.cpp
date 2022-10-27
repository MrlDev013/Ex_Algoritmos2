#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>


void controle();
void celsiusControle();
void fahreinheitControle();
void kelvinControle();

int main() {
	setlocale(LC_ALL, "Portuguese");
	controle();
}

void controle() {
	int item;

	do {
		printf("Olá, seja bem vindo ao programa de conversão de temperaturas!\n");
		printf("Para iniciar, tecle:\n");
		printf("1-Para converter de Celsius\n2-Para converter de Fahrenheit\n3-Para converter de Kelvin\n");
		printf("Sua escolha: ");
		scanf_s("%d", &item);

		switch (item) {
		case 1:
			celsiusControle();
			break;
		case 2:
			fahreinheitControle();
			break;
		case 3:
			kelvinControle();
			break;
		case 4:
			system("cls");
			printf("Saindo...");
			Sleep(1000);
			exit(1);
			break;
		}
	} while (item != 4);

}

void celsiusControle() {
	system("cls");

	float tempC , tempF , tempK;

	printf("Digite a temperatura em Celsius: ");
	scanf_s("%f", &tempC);

		tempF = (tempC * 1.8) + 32;

		tempK = tempC + 273.15;

		printf("A temperatura %.2f C foi convertida:\nEm Fahreinheit: %.2f F\nEm Kelvin: %.2f K" , tempC , tempF , tempK);

		Sleep(5000);

		system("cls");
}

void fahreinheitControle(){
	system("cls");

	float tempC, tempF, tempK;

	printf("Digite a temperatura em Fahreinheit: ");
	scanf_s("%f", &tempF);

	tempC = (tempF - 32) / 1.8;

	tempK = tempC + 273.15;

	printf("A temperatura %.2f F foi convertida:\nEm Celsius: %.2f C\nEm Kelvin: %.2f K", tempF, tempC, tempK);

	Sleep(5000);

	system("cls");
}

void kelvinControle() {
	system("cls");

	float tempC, tempF, tempK;

	printf("Digite a temperatura em Kelvin: ");
	scanf_s("%f", &tempK);

	tempC = tempK - 273.15;

	tempF = (tempK - 273.15) * 1.8 + 32;

	printf("A temperatura %.2f K foi convertida:\nEm Celsius: %.2f C\nEm Fahrenheit: %.2f F", tempK, tempC, tempF);

	Sleep(5000);

	system("cls");
}
