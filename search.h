/*������� search ��������� ����� ���� int � ������� �� ����� ���������� ��� ����� ��� ����� �������
�������� n-����� �����,���������� ����� �����.*/
void search(int n)
{
	FILE *file;
	file = fopen("C:/Users/User/source/repos/Project167/Debug/filename.txt", "r");
	if(file==NULL)
	{
		perror("������ �������� �����");
		exit(1);
	}
	int i = 0;
	while (fscanf(file, "%s%d%d", rivers[i].name, &(rivers[i].length), &(rivers[i].depth)) != EOF) {
		i++;
	}
	printf("%-10s %5d %10d\n", rivers[n - 1].name, rivers[n - 1].length, rivers[n - 1].depth);
	fclose(file);
	scanf("%*[^\n]"); scanf("%*c"); /*������� ������ */
}
