#include <iostream>
using namespace std;

// ���� �� ������ ���������� ����� ������ 1, �� �������� ���������� ������

// nikak ne poluchaetcya sortirovky cdelat s voskresenya s kodom cidela?  pro dvumernue massivi: net sortirovki/ 


const int STROK = 5;
const int STOL = 5;

//void Massivchik(int arr2[STROK], const int n);
void Massiv (int arr1[STROK][STOL], const int n, const int m);
void MassivSort(int arr1[STROK][STOL], const int n, const int m);
void MassivSum (int arr1[STROK][STOL], const int n, const int m);
void MassivAVG (int arr1[STROK][STOL], const int n, const int m);
void MassivMax(int arr1[STROK][STOL], const int n, const int m);
void MassivMin(int arr1[STROK][STOL], const int n, const int m);

void PrintMassiv(int arr1[STROK][STOL], const int n, const int m);
void PrintSort(int arr1[STROK][STOL], const int n, const int m);


void Massiv(double arr1[STROK][STOL], const int n, const int m);
void MassivSort(double arr1[STROK][STOL], const int n, const int m);
void MassivSum(double arr1[STROK][STOL], const int n, const int m);
void MassivAVG(double arr1[STROK][STOL], const int n, const int m);
void MassivMax(double arr1[STROK][STOL], const int n, const int m);
void MassivMin(double arr1[STROK][STOL], const int n, const int m);

void PrintMassiv(double arr1[STROK][STOL], const int n, const int m);
void PrintSort(double arr1[STROK][STOL], const int n, const int m);


void Massiv(char arr1[STROK][STOL], const int n, const int m);
void MassivSort(char arr1[STROK][STOL], const int n, const int m);
void MassivSum(char arr1[STROK][STOL], const int n, const int m);
void MassivAVG(char arr1[STROK][STOL], const int n, const int m);
void MassivMax(char arr1[STROK][STOL], const int n, const int m);
void MassivMin(char arr1[STROK][STOL], const int n, const int m);

void PrintMassiv(char arr1[STROK][STOL], const int n, const int m);
void PrintSort(char arr1[STROK][STOL], const int n, const int m);




void main()
{
	setlocale(LC_ALL, "Russian");
	
	int arr1[STROK][STOL];
	double arr2[STROK][STOL];
	char arr3[STROK][STOL];
	
	const int n = STROK; const int m = STOL;

	cout << "\t ������ ���� INT" << "\n";
	Massiv(arr1, STROK, STOL); cout << "\n\n";
	PrintMassiv(arr1, STROK, STOL); cout << "\n\n";

	cout << "\t C�������� ����� � ������� ���� INT " << " "; cout << "\n";
	MassivSort(arr1, STROK, STOL); cout << "\n";
	

	cout << "\t ����� ����� � ������� ���� INT " << " "; 
	MassivSum(arr1, STROK, STOL); cout << "\n";
	

	cout << "\t ������� �������� � ������� ���� INT " << " ";
	MassivAVG(arr1, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� ������� ���� INT " << " ";
	MassivMax(arr1, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  ������� ���� INT " << " ";
	MassivMin(arr1, STROK, STOL);  cout << "\n";

	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

	cout << "\t ������ ���� DOUBLE" << "\n";
	Massiv(arr2, STROK, STOL); cout << "\n\n";
	PrintMassiv(arr2, STROK, STOL); cout << "\n\n";

	cout << "\t C�������� ����� � ������� " << " "; cout << "\n";
	MassivSort(arr2, STROK, STOL); cout << "\n";


	cout << "\t ����� ����� � ������� " << " ";
	MassivSum(arr2, STROK, STOL); cout << "\n";


	cout << "\t ������� �������� � ������� " << " ";
	MassivAVG(arr2, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� �������  " << " ";
	MassivMax(arr2, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  �������  " << " ";
	MassivMin(arr2, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	

	cout << "\t ������ ���� CHAR" << "\n";
	Massiv(arr3, STROK, STOL); cout << "\n\n";
	PrintMassiv(arr3, STROK, STOL); cout << "\n\n";

	cout << "\t C�������� ����� � ������� " << " "; cout << "\n";
	MassivSort(arr3, STROK, STOL); cout << "\n";


	cout << "\t ����� ����� � ������� ����" << " ";
	MassivSum(arr3, STROK, STOL); cout << "\n";


	cout << "\t ������� �������� � ������� " << " ";
	MassivAVG(arr3, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� �������  " << " ";
	MassivMax(arr3, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  �������  " << " ";
	MassivMin(arr3, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

}



void Massiv(int arr1[STROK][STOL], const int n, const int m)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
		 arr1[i][j] = rand() % 100;
		           
		} 
	
	} 
	
}

void MassivSort(int arr1[STROK][STOL], const int n, const int m)
{
	
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
				int sort = 0;		
				if (arr1[i][j] > arr1[i][j])
				{   
					sort = arr1[i][j];
					
					arr1[i][j] = sort; 
					
				} 
				
		 cout << arr1[i][j] << endl;
			
		} 
  
	} 
	 
} 

void MassivSum(int arr1[STROK][STOL], const int n, const int m)
{
	
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			summ += arr1[i][j];
		}
	} 
	cout << summ; cout << endl;
	
}

void MassivAVG(int arr1[STROK][STOL], const int n, const int m)
{

	int summ = 0;
	int avg = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			summ += arr1[i][j];
		}
	}
	avg = summ / (STROK * STOL);
	cout << avg; cout << endl;
}

void MassivMax(int arr1[STROK][STOL], const int n, const int m)
{
int max = arr1[0][0];
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
			if (arr1[i][j] > max)
				max = arr1[i][j];
		}
		
		
	}
	cout << max << endl;
}

void MassivMin(int arr1[STROK][STOL], const int n, const int m)
{
	int min1= arr1[0][0];
	for (int i = 0; i <n; i++)
	{   
		
		for (int j = i; j < m;  j++)
		{      
				if (arr1[i][j] < min1) min1 = arr1[i][j];
		}
       
	} 
	cout << min1 << endl;
}



void PrintMassiv(int arr1[STROK][STOL], const int n, const int m)
{
	
	for (int i = 0; i < n; i++)

	{ 
		for (int j = 0; j < m; j++)
		{ 

		cout << arr1[i][j] << " \t";
		
		}
		cout << endl;
	}
	
	
	
}

void PrintSort(int arr1[STROK][STOL], const int n, const int m)

{
	int i, j, k;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			for (int k = j; k < m; k++)
			{
				 cout << arr1[i][k] << "\t";

			}
		}
       cout << endl;
	}
	
}


void PrintAVG(int arr1[STROK][STOL], const int n, const int m)
{

	int summ = 0;
	int avg = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << avg;
		}
	}
	
	 cout << endl;
}

/*void MassivSort(int arr1[STROK][STOL], const int n, const int m)
{
	int i, j, k;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < m - 1; k++)
			{
				if (arr1[i][j] > arr1[i][k])
				{
					int sort = 0;
					sort = arr1[i][j];
					arr1[i][j] = arr1[i][k];
					arr1[i][k] = sort;

				}

			}
		}

	}

}*/
//====================================================================//
void Massiv(double arr2[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr2[i][j] = rand() % 100;
			arr2[i][j]/=10;
		}

	}

}

void MassivSort(double arr2[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			double sort = 0;
			if (arr2[i][j] > arr2[i][j])
			{
				sort = arr2[i][j];

				arr2[i][j] = sort;

			}

			cout << arr2[i][j] << endl;

		}

	}

}

void MassivSum(double arr2[STROK][STOL], const int n, const int m)
{

	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			summ += arr2[i][j];
		}
	}
	cout << summ; cout << endl;

}

void MassivAVG(double arr2[STROK][STOL], const int n, const int m)
{

	double summ = 0;
	double avg = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			summ += arr2[i][j];
		}
	}
	avg = summ / (STROK * STOL);
	cout << avg; cout << endl;
}

void MassivMax(double arr2[STROK][STOL], const int n, const int m)
{
	double max = arr2[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if (arr2[i][j] > max)
				max = arr2[i][j];
		}


	}
	cout << max << endl;
}

void MassivMin(double arr2[STROK][STOL], const int n, const int m)
{
	double min1 = arr2[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < m; j++)
		{
			if (arr2[i][j] < min1) min1 = arr2[i][j];
		}

	}
	cout << min1 << endl;
}



void PrintMassiv(double arr2[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)

	{
		for (int j = 0; j < m; j++)
		{

			cout << arr2[i][j] << " \t";

		}
		cout << endl;
	}



}

void PrintSort(double arr2[STROK][STOL], const int n, const int m)

{
	int i, j, k;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			for (int k = j; k < m; k++)
			{
				cout << arr2[i][k] << "\t";

			}
		}
		cout << endl;
	}

}


void PrintAVG(double arr2[STROK][STOL], const int n, const int m)
{

	double summ = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << avg;
		}
	}

	cout << endl;
}

//============================================================================//


void Massiv(char arr3[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = rand() % 256;

		}

	}

}

void MassivSort(char arr3[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			char sort = 0;
			if (arr3[i][j] > arr3[i][j])
			{
				sort = arr3[i][j];

				arr3[i][j] = sort;

			}

			cout << arr3[i][j] << endl;

		}

	}

}

void MassivSum(char arr3[STROK][STOL], const int n, const int m)
{

	char summ = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			summ += arr3[i][j];
		}
	}
	cout << summ; cout << endl;

}

void MassivAVG(char arr3[STROK][STOL], const int n, const int m)
{

	char summ = 0;
	char avg = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			summ += arr3[i][j];
		}
	}
	avg = summ / (STROK * STOL);
	cout << avg; cout << endl;
}

void MassivMax(char arr3[STROK][STOL], const int n, const int m)
{
	char max = arr3[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if (arr3[i][j] > max)
				max = arr3[i][j];
		}


	}
	cout << max << endl;
}

void MassivMin(char arr3[STROK][STOL], const int n, const int m)
{
	char min1 = arr3[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < m; j++)
		{
			if (arr3[i][j] < min1) min1 = arr3[i][j];
		}

	}
	cout << min1 << endl;
}



void PrintMassiv(char arr3[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)

	{
		for (int j = 0; j < m; j++)
		{

			cout << arr3[i][j] << " \t";

		}
		cout << endl;
	}



}

void PrintSort(char arr3[STROK][STOL], const int n, const int m)

{
	char i, j, k;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			for (int k = j; k < m; k++)
			{
				cout << arr3[i][k] << "\t";

			}
		}
		cout << endl;
	}

}


void PrintAVG(char arr3[STROK][STOL], const int n, const int m)
{

	char summ = 0;
	char avg = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << avg;
		}
	}

	cout << endl;
}
