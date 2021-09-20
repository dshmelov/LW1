#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define HEADER ("Лабораторная работа №1\nВыполнили: Шмелёв Д.В., Пантюшов Е.И.\n")
#define n 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf(HEADER);
	srand(time(NULL));
	//Задание 1
	/*int arr[n] = {0,1,2,3,4,5,6,7,8,9};
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Разница между максимальным и минимальным элементов массива равна %d\n", max - min);*/
	//Задание 2
	/*int arr[n];
	printf("Массив, составленный из рандомных чисел:");
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		printf(" %d ", arr[i]);
	}*/
	//Задание 3
	/*int size = 0;
	printf("Введите размерность массива: ");
	scanf("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	printf("Заполните массив:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d элемент: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Полученный массив:");
	for (int i = 0; i < size; i++)
	{
		printf(" %d ", arr[i]);
	}
	free(arr);*/
	//Задание 4
	/*int arr[n][n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
			printf(" %-3d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("Сумма %d-ой строки равна %d\n", i + 1, sum);
		sum = 0;
	}*/
	getch();
	return 0;
}


