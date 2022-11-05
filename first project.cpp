#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 90;//size=5;

void generateRandom(int arr[]) //sub generateRandon(val arr())
{
	srand(time(0));//srand(time(0))

	for (int i = 0; i < SIZE; i++)
	{
		int gen = 1 + rand() % SIZE;
			bool found = false;
			for (int  j= 0; j < i; j++)
			{

				if (gen==arr[j])
				{
					found = true;
					break;
				}

			}
			if (found)
			{
				i = i - 1;

			}
			else
				arr[i] = gen;
	}

	


}//end sub
void sort(int arr[]){

	int temp = 5;
	int p = SIZE - 1;
	for (int i = 0; i < SIZE; i++)
	{
		for (int i = 0; i < p; i++)
		{
			if (arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

void display(int arr[]) {

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<<"\t" ;
	}

}
int main() {

	int arr[SIZE];
	generateRandom(arr);
	sort(arr);
	display(arr);
	system("pause");
	return 0;

}


