#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include "D:\Anton\�������� 2020\rivers\func.h"
#include "D:\Anton\�������� 2020\rivers\search.h"

int main() {
	setlocale(LC_CTYPE, "rus");
	FILE *file;
	char sym;
	int i = 0;
	int n;
	printf("������� ������ ��� ������ ������� ���������:\n"
		"s-�����;\nl-����� ����� ����� ��� � ������� ������� ������ 50 ������;"
		"\ni-�������� ������ ���\nq-��� ������ �� ���������;\n");
	for (;;) {
		printf("������� ������:");
		scanf("%c", &sym); while (getchar() != '\n');
		switch (sym)
		{
		case's':printf("������� ����� ���� �� 1 �� 12:");
			scanf("%d", &n);
			if (n < 1 || n>12)
			{
				printf("�������� �����.");
				scanf("%*[^\n]"); scanf("%*c");
				break;
			}
			printf("��������   �����    �������\n");
			search(n);
			break;
		case'l':
			file = fopen("C:/Users/User/source/repos/Project167/Debug/filename.txt", "r");
			if (file == NULL)
			{
				printf("������ �������� �����");
				exit(1);
			}
			while (fscanf(file, "%s%d%d", rivers[i].name, &(rivers[i].length), &(rivers[i].depth)) != EOF) {
				i++;
			}
			printf("����� ��������� ��� � ������� ������� ������ 50 ������:%d\n", length(rivers));
			fclose(file);
			break;
		case 'i':
			printf("1.Dnipro\n2.Dniester\n3.Danube\n"
				"4.Don\n5.Desna\n6.Psel\n"
				"7.Pripyat\n8.Bug\n9.Tisza\n"
				"10.Teteriv\n11.Vorskla\n12.Seym\n");
			break;
		case'q':printf("���������� ������ ���������");
			return 0;
		default:printf("�������� ��� ��������!\n");
		}
		printf("\n");
	}
}
