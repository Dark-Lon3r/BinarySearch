#include <iostream>
using namespace std;


int BinarySearch(int& user_inp) {
	int numbers[101];

	//Инициализация массива от 0 до 100
	for (int i = 0; i < 101; i++)
	{
		numbers[i] = i;
	}

	int low = 0; //Минимальный символ массива
	int high = 100; //Максимальный размер массива


	while (low <= high)
	{
		int mid = (low + high) / 2;
		int guess = numbers[mid];

		if (guess == user_inp) {
			cout << "\nНайдено: " << mid;
			return 0;
		}

		else
		{
			if (guess > user_inp)
			{
				high = mid - 1;
			}

			else
			{
				if (guess < user_inp) {
					low = mid + 1;
				}
			}

		}

	}

	cout << "\nЧисло не найдено!";
	return 0;
}


void UserInput() {
	int user_inp;

	cout << "\nКакое число найти от 0 до 100: ";
	cin >> user_inp;

	BinarySearch(user_inp);
}


int main() {
	setlocale(LC_ALL, "Ru");

	UserInput();

}