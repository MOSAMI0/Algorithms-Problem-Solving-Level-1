#include<iostream> //#10
#include<string>

using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter your Mark 1 ? " << endl;
	cin >> Mark1;

	cout << "Please enter your Mark 2 ? " << endl;
	cin >> Mark2;

	cout << "Please enter your Mark 3 ? " << endl;
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(float Average)
{
	cout << "\n The Average of marks is:  " << Average << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}