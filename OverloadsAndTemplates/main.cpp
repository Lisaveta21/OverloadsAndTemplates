#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void Fillrand(int  arr[], const int n);
void Fillrand(double  arr[], const int n);
void Fillrand(float  b[], const int n);
void Fillrand(int  arr[ROWS][COLS], const int rows, const int cols);
void Fillrand(float  arr[ROWS][COLS], const int rows, const int cols);
void Fillrand(char krr[ROWS][COLS], const int rows, const int cols);
void Fillrand(char k[], const int n);

void Print(int  arr[], const int n);
void Print(double arr[], const int n);
void Print(float  b[], const int n);
void Print(int arr[ROWS][COLS], const int rows, const int cols);
void Print(float arr[ROWS][COLS], const int rows, const int cols);
void Print(char krr[ROWS][COLS], const int rows, const int cols);
void Print(char k[], const int n);

int sum(int arr[], const int n);
float sum(float  b[], const int n);
double sum(double arr[], const int n);
int sum(int arr[ROWS][COLS], const int rows, const int cols);
int sum(char krr[ROWS][COLS], const int rows, const int cols);
int sum(char k[], const int n);
float sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double avg(int arr[], const int n);
double avg(float  b[], const int n);
double avg(int arr[ROWS][COLS], const int rows, const int cols);
double avg(float arr[ROWS][COLS], const int rows, const int cols);
double avg(char krr[ROWS][COLS], const int rows, const int cols);
double avg(char k[], const int n);


int minValue(int arr[], const int n);
int minValue(float  b[], const int n);
int minValue(int arr[ROWS][COLS], const int rows, const int cols);
int minValue(float arr[ROWS][COLS], const int rows, const int cols);
int minValue(char krr[ROWS][COLS], const int rows, const int cols);
int minValue(char k[], const int n);

int maxValue(int arr[], const int n);
int maxValue(int arr[ROWS][COLS], const int rows, const int cols);
int maxValue(float arr[ROWS][COLS], const int rows, const int cols);
int maxValue(float  b[], const int n);
int maxValue(char krr[ROWS][COLS], const int rows, const int cols);
int maxValue(char k[], const int n);

void shiftleft(int arr[], const int n, int number_of_shifts);
void shiftright(int arr[], const int n, int number_of_shifts);
void sort(int arr[], const int n);


void main()
{

	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];


	Fillrand(arr, n);
	Print(arr, n);

	cout << "Сумма" << sum(arr, n) << endl;
	cout << "Среднее арифметическое" << avg(arr, n) << endl;
	cout << "Минимум" << minValue(arr, n) << endl;
	cout << "Максимум " << maxValue(arr, n) << endl;
	/*sort(arr, n);*/
	/*Print(arr, n);*/
	/*int number_of_shifts;
	cout << "количество сдвигов "; cin >> number_of_shifts;
	shiftleft(arr, n, number_of_shifts);
	shiftright(arr, n, number_of_shifts);
	Print(arr, n);*/
	const int SIZE = 8;
	int brr[SIZE];
	Fillrand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	Fillrand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	const int rows = 3;
	const int cols = 4;
	int krr[rows][cols];
	Fillrand(krr, rows, cols);
	Print(krr, rows, cols);
	cout << "Сумма элементов: " << sum(krr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое" << avg(krr, ROWS, COLS) << endl;
	cout << "Минимум" << minValue(krr, ROWS, COLS) << endl;

	
	int i_arr_3[ROWS][COLS];
	cout << "Сумма элементов: " << sum(i_arr_3, ROWS, COLS) << endl;
	cout << "Среднее арифметическое" << avg(i_arr_3, ROWS, COLS) << endl;
	cout << "Минимум" << minValue(i_arr_3, ROWS, COLS) << endl;
	cout << "Минимум" << maxValue(i_arr_3, ROWS, COLS) << endl;

	int k[SIZE];
	Fillrand(k, SIZE);
	Print(k, SIZE);
	cout << "Сумма" << sum(k, n) << endl;
	cout << "Среднее арифметическое" << avg(k, n) << endl;
	cout << "Минимум" << minValue(k, n) << endl;
	cout << "Максимум " << maxValue(k, n) << endl;

	/*double d_arr_2[ROWS][COLS];
	Fillrand(d_arr_2, ROWS, COLS);
	Print (d_arr_2, ROWS, COLS);*/

	int i_arr_2[ROWS][COLS];
	Fillrand(i_arr_2, rows, cols);
	Print(i_arr_2, rows, cols);
	cout << "Сумма элементов: " << sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое" << avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимум" << minValue(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимум " << maxValue(i_arr_2, ROWS, COLS) << endl;

	int i_arr[SIZE];
	Fillrand(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма" << sum(i_arr, n) << endl;
	cout << "Среднее арифметическое" << avg(i_arr, n) << endl;
	cout << "Минимум" << minValue(i_arr, n) << endl;
	cout << "Максимум " << maxValue(i_arr, n) << endl;
}

void Fillrand(int  arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}
void Fillrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 100;
	}

}
void Fillrand(float b[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = rand() % 100;
		b[i] /= 100;
	}

}
void Fillrand(int  arr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}
}
void Fillrand(float  arr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}
}
void Fillrand(char krr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			krr[i][j] = rand() % 100;

		}
	}
}
void Fillrand(char k[], const int n)
{
	for (int i = 0; i < COLS; i++)
	{
		k[i] = rand() % 100;
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float b[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << "\t";
	}
	cout << endl;
}
void Print(float  arr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}

}
void Print(int arr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}

}
void Print(char krr[ROWS][COLS], const int rows, const int cols)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << krr[i][j] << "\t";

		}
		cout << endl;
	}

}
void Print(char k[], const int n)
{
	for (int i = 0; i < COLS; i++)

	{
		cout << k[i] << "\t";

	}
	cout << endl;


}

int sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

	}
	return sum;
}
float sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

	}
	return sum;
}
int sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < COLS; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int sum(int   arr[ROWS][COLS], const int rows, const int cols)
{
	float sum = 0;
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int sum(char arr[ROWS][COLS], const int rows, const int cols)
{
	int sum = 0;
	for (int i = 0; i < COLS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
float sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}



double avg(int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(float b[], const int n)
{
	return (double)sum(b, n) / n;
}
double avg(int  arr[ROWS][COLS], const int rows, const int cols)
{
	return (double)sum(arr, ROWS, COLS) / ROWS / COLS;
}
double avg(float   arr[ROWS][COLS], const int rows, const int cols)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS*COLS);
}
double avg(float   krr[ROWS][COLS], const int rows, const int cols)
{
	return (double)sum(krr, ROWS, COLS) / COLS/ROWS;
}
double avg(char k[], const int n)
{
	return (double)sum(k, n) / n;
}

int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int minValue(int  arr[ROWS][COLS], const int rows, const int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[ROWS][COLS];

		}
		return min;
	}
}
int minValue(float b[], const int n)
{
	int min = b[0];
	for (int i = 0; i < n; i++)
	{
		if (b[i] < min) min = b[i];
	}
	return min;
}
int minValue(float  arr[ROWS][COLS], const int rows, const int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[ROWS][COLS];

		}
		return min;
	}
}
int minValue(char krr[ROWS][COLS], const int rows, const int cols)
{
	int min = krr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (krr[i][j] < min) min = krr[ROWS][COLS];

		}
		return min;
	}
}
int minValue(char k[], const int n)
{
	int min = k[0];
	for (int i = 0; i < n; i++)
	{
		if (k[i] < min) min = k[i];
	}
	return min;
}

int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int maxValue(int  arr[ROWS][COLS], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < max) max = arr[ROWS][COLS];

		}
		return max;
	}
}
int maxValue(float b[], const int n)
{
	int max = b[0];
	for (int i = 0; i < n; i++)
	{
		if (b[i] > max) max = b[i];
	}
	return max;
}
int maxValue(float  arr[ROWS][COLS], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < max) max = arr[ROWS][COLS];

		}
		return max;
	}
}
int maxValue(char krr[ROWS][COLS], const int rows, const int cols)
{
	int max = krr[0][0];
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (krr[i][j] < max) max = krr[ROWS][COLS];

		}
		return max;
	}
}
int maxValue(char k[], const int n)
{
	int max = k[0];
	for (int i = 0; i > n; i++)
	{
		if (k[i] > max) max = k[i];
	}
	return max;
}

void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	
	{
		for (int j = 0; i < ROWS *COLS; j++)
	
		{
		/*	for (int k = 0; k < ROWS; k++)
	

			{
				for (int l = k==i? j+1:0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}*/
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
	}
}

void shiftleft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
	void shiftright(int arr[], const int n, int number_of_shifts)
	{
		shiftleft(arr, n, n - number_of_shifts);
	
	}

	void sort(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
					arr[j] = buffer;
				}
			}
		}
	}


