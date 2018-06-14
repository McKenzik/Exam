#include<stdio.h>
#include<stdlib.h>
#include<locale.h>





void main()
{
	setlocale(LC_ALL, "RUS");

	int n=0, m=0, k=0, l=0, p=0, s=0;
	start:

	printf("Ответьте на вопросы, варианты ответов n: 1 - да; 0 - нет."
		"Вы хотите стать профессиональным музыкантом?\n");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("Вы богаты?\n");
		scanf("%d", &m);


		if (m == 1)
		{
			printf("Вы любите отрываться?\n");
			scanf("%d", &k);

			if (k == 1)
				
			{
			start1:

				printf("Пиво пьёте?\n");
				scanf("%d", &l);

				if (l == 1)
				{
					printf("Хотите играть классику?\n");
					scanf("%d", &p);
					if (p == 1)
					{
						printf("Готовы работать круглые сутки?\n");
						scanf("%d", &s);
						if (s == 1)
						{
							printf("Гобой\n");
						}
						else
						{
							printf("Готовы к тому что будут проблемы с работой, даже если вы круто играете?\n");
							scanf("%d", &p);
							if (p == 1)
							{
								printf("Кларнет\n");
							}
							else
							{
								printf("Валторна\n");
							}
						}

					}
					else if (l==0)
					{
						printf("а джаз?\n");
						scanf("%d", &m);
							

						if (m == 1)
						{
							printf("саксофон\n");
						}
						else
						{
							printf("У вас есть немецкие корни?\n");
							scanf("%d", &k);

								if (k == 1)
								{
									printf("труба\n");
								}
								else
								{
									printf("дудук\n");
								}

						}
					}
					else
					{
						printf("тромбон\n");

					}


		
				}
				else
				{
					printf("Вы страстная натура\n");
					scanf("%d", &l);
					if (l == 1)
					{
						printf("виолончель\n");
					}
					else
					{
						printf("Домра\n");
					}
				}

			}
			else
			{
				printf("Готовы заниматься по 8 часов в день?\n");
				scanf("%d", &m);

				if (m == 1)
				{
					printf("Хотите учить детей?\n");
					scanf("%d", &l);

					if (p == 1)
					{
						printf("Флейта\n");
					}
					else
					{
						printf("скрипка\n");
					}

				}
				else
				{
					printf("Ноты знаете?\n");
					scanf("%d", &n);
					if (n == 1)
					{
						printf("арфа\n");
					}
					else
					{
						printf("Альт\n");
					}
				}

			}
		}

		else
		{
			printf("Вы любите деньги?\n");
			scanf("%d", &m);

			if (m == 1)
			{
				printf("Забудьте о музыке\n");

			}
			else
			{
				printf("Любите отрываться?\n");
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
		printf("Хотите встречаться с девушками?\n");
		scanf("%d", &m);
		if (m == 1)
		{
			printf("любите глупышек?\n");
			scanf("%d", &k);

			if (k == 1)
			{
				printf("Любите выпить?\n");
				scanf("%d", &l);

				if (l == 1)
				{
					
					printf("Гитара\n");

				}
				else
				{
					printf("Фортепьяно\n");
				}

			}



		}
		else
		{
			printf("хотите встречаться с парнями?\n");
			scanf("%d", &l);

			if (l == 1)
			{
				printf("Вы парень?\n");
				scanf("%d", &n);
				if (n == 1)
				{
					printf("Оперный певец\n");

				}

			}
			else
			{
				printf("Ударные\n");
			}

		}



		

	}









goto start;








}