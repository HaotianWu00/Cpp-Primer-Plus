#include <iostream>
#include <cmath>

using namespace std;

void PrintFirst()
{
	cout << "Three blind mice" << endl;
}

void PrintSecond()
{
	cout << "See how they run" << endl;
}


int main() 
{
	//2.1 ����c++
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Come up and c++ me some time.";
	cout << endl;
	printf("asdadadada\n");
	cout << "You won't regret it" << endl;
	char a[100] = "Wo shi ni die.";
	cout << a << endl;

	//2.2 c++���
	int carrots = 25;
	cout << "I have " << carrots << " carrots" << endl;

	//2.3 ����c++���
	int carrot;
	cout << "How many carrots do you have: " << endl;
	cin >> carrot;
	cout << "You have " << carrot << " carrots" << endl;
	cout << "You have "
		<< carrot
		<< " carrots."
		<< endl;
	cout << sqrt(6.25);

	//2.7 �����ϰ
	//1.
	cout << "�����������" << endl << "��ַ��ʯ��ׯ�С�" << endl;

	//2.
	int length;
	cout << "Please enter: ";
	cin >> length;
	cout << length << " long = " << length * 220 << " ��" << endl;

	//3.
	PrintFirst();
	PrintFirst();
	PrintSecond();
	PrintSecond();
	
	//4.
	int age;
	cout << "Enter your age: " << endl;
	cin >> age;
	cout << "You age in mounths is " << age * 12 << "." << endl;

	//5.




	return 0;
}
