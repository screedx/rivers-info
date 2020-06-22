#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include "D:\Anton\Практика 2020\rivers\func.h"
#include "D:\Anton\Практика 2020\rivers\search.h"

int main() {
	setlocale(LC_CTYPE, "rus");
	FILE *file;
	char sym;
	int i = 0;
	int n;
	printf("Введите символ для выбора функции программы:\n"
		"s-поиск;\nl-вывод общей длины рек у которых глубина меньше 50 метров;"
		"\ni-показать список рек\nq-для выхода из программы;\n");
	for (;;) {
		printf("Введите символ:");
		scanf("%c", &sym); while (getchar() != '\n');
		switch (sym)
		{
		case's':printf("Введите номер реки от 1 до 12:");
			scanf("%d", &n);
			if (n < 1 || n>12)
			{
				printf("Неверный номер.");
				scanf("%*[^\n]"); scanf("%*c");
				break;
			}
			printf("Название   Длина    Глубина\n");
			search(n);
			break;
		case'l':
			file = fopen("C:/Users/User/source/repos/Project167/Debug/filename.txt", "r");
			if (file == NULL)
			{
				printf("Ошибка открытия файла");
				exit(1);
			}
			while (fscanf(file, "%s%d%d", rivers[i].name, &(rivers[i].length), &(rivers[i].depth)) != EOF) {
				i++;
			}
			printf("Сумма дистанций рек у которых глубина меньше 50 метров:%d\n", length(rivers));
			fclose(file);
			break;
		case 'i':
			printf("1.Dnipro\n2.Dniester\n3.Danube\n"
				"4.Don\n5.Desna\n6.Psel\n"
				"7.Pripyat\n8.Bug\n9.Tisza\n"
				"10.Teteriv\n11.Vorskla\n12.Seym\n");
			break;
		case'q':printf("Завершение работы программы");
			return 0;
		default:printf("Неверный код операции!\n");
		}
		printf("\n");
	}
}
