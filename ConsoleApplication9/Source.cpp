#include<stdio.h>
#include<stdlib.h>
#include<locale.h>





void main()
{
	setlocale(LC_ALL, "RUS");

	int n=0, m=0, k=0, l=0, p=0, s=0;
	start:

	printf("�������� �� �������, �������� ������� n: 1 - ��; 0 - ���."
		"�� ������ ����� ���������������� ����������?\n");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("�� ������?\n");
		scanf("%d", &m);


		if (m == 1)
		{
			printf("�� ������ ����������?\n");
			scanf("%d", &k);

			if (k == 1)
				
			{
			start1:

				printf("���� �����?\n");
				scanf("%d", &l);

				if (l == 1)
				{
					printf("������ ������ ��������?\n");
					scanf("%d", &p);
					if (p == 1)
					{
						printf("������ �������� ������� �����?\n");
						scanf("%d", &s);
						if (s == 1)
						{
							printf("�����\n");
						}
						else
						{
							printf("������ � ���� ��� ����� �������� � �������, ���� ���� �� ����� �������?\n");
							scanf("%d", &p);
							if (p == 1)
							{
								printf("�������\n");
							}
							else
							{
								printf("��������\n");
							}
						}

					}
					else if (l==0)
					{
						printf("� ����?\n");
						scanf("%d", &m);
							

						if (m == 1)
						{
							printf("��������\n");
						}
						else
						{
							printf("� ��� ���� �������� �����?\n");
							scanf("%d", &k);

								if (k == 1)
								{
									printf("�����\n");
								}
								else
								{
									printf("�����\n");
								}

						}
					}
					else
					{
						printf("�������\n");

					}


		
				}
				else
				{
					printf("�� ��������� ������\n");
					scanf("%d", &l);
					if (l == 1)
					{
						printf("����������\n");
					}
					else
					{
						printf("�����\n");
					}
				}

			}
			else
			{
				printf("������ ���������� �� 8 ����� � ����?\n");
				scanf("%d", &m);

				if (m == 1)
				{
					printf("������ ����� �����?\n");
					scanf("%d", &l);

					if (p == 1)
					{
						printf("������\n");
					}
					else
					{
						printf("�������\n");
					}

				}
				else
				{
					printf("���� ������?\n");
					scanf("%d", &n);
					if (n == 1)
					{
						printf("����\n");
					}
					else
					{
						printf("����\n");
					}
				}

			}
		}

		else
		{
			printf("�� ������ ������?\n");
			scanf("%d", &m);

			if (m == 1)
			{
				printf("�������� � ������\n");

			}
			else
			{
				printf("������ ����������?\n");
				scanf("%d", &k);
				if (k == 1)
				{
					goto start1;
				}

			}

		}

	}

	else
	{
		printf("������ ����������� � ���������?\n");
		scanf("%d", &m);
		if (m == 1)
		{
			printf("������ ��������?\n");
			scanf("%d", &k);

			if (k == 1)
			{
				printf("������ ������?\n");
				scanf("%d", &l);

				if (l == 1)
				{
					
					printf("������\n");

				}
				else
				{
					printf("����������\n");
				}

			}



		}
		else
		{
			printf("������ ����������� � �������?\n");
			scanf("%d", &l);

			if (l == 1)
			{
				printf("�� ������?\n");
				scanf("%d", &n);
				if (n == 1)
				{
					printf("������� �����\n");

				}

			}
			else
			{
				printf("�������\n");
			}

		}



		

	}









goto start;








}