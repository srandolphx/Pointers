

#include <iostream>


enum colors
{
	black = 1,
	white,
	blue,
	red,
	purple,
	brown,
	green,
	yellow,
	pink,
	orange,
	gray,

};
struct Cars
{
	int year;


	char make[32];


	char model[32];

	colors color;

	int mileage;

};

void print(int val, int* address);
void step1();
void step2();
void step3();
void addMileage(Cars* car, int miles);
void addMileage(Cars car, int miles);
void printCarpointer(Cars* car, int n);
void printCar(Cars car, int n);
colors chooseAcolor();
void rePaint(Cars* car, colors color);
Cars vehicle();

using namespace std;

int main()
{
	step1();

	cout << endl;
	cout << endl;
	cout << endl;

	step2();
	cout << endl;
	cout << endl;
	cout << endl;

	step3();
	cout << endl;
	cout << endl;
	cout << endl;

	system("pause");


}

void print(int val, int * address)
{
	cout << "The value: " << val << endl;
	cout << "addess: " << address << endl;

	
}
void step1()
{
	int memory[15];

	for (int i = 0; i < 15; i++)
	{
		memory[i] = rand() % 1000;
	}
	
}
void step2()
{
	int* memory[15];

	for (int i = 0; i < 15; i++)
	{
		memory[i] = (int*)rand() + 1;

		print((int)memory[i], memory[i]);
	}
}
void step3()
{
	static Cars carList[3];
	bool leave = false;
	int input;
	for (int i = 0; i < 3; i++)
	{
		addMileage(&carList[i], 500);
	}
	for (int i = 0; i < 3; i++)
	{

		printCar(carList[i], i + 1);

	}
	for (int i = 0; i < 3; i++)
	{
		printCarpointer(&carList[i],i + 1);
	}
	for (int i = 0; i < 3; i++)
	{		
		carList[i] = vehicle();
	}
	for (int i = 0; i < 3; i++)
	{
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "car\t" << i + 1 << "\tmake\t" << carList[i].make << endl;
		cout << "car\t" << i + 1 << "\tmodel\t" << carList[i].model << endl;
		cout << "car\t" << i + 1 << "\tyear\t" << carList[i].year << endl;
		cout << "car\t" << i + 1 << "\tcolor\t" << carList[i].color << endl;
		cout << "car\t" << i + 1 << "\tmileage\t" << carList[i].mileage << endl;
	}
	while (!leave)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << " enter 1 to repaint the 1st vehicle  " << endl;
		cout << " enter 2 to repaint the 2nd vehicle  " << endl;
		cout << " enter 3 to repaint the 3rd vehicle  " << endl;
		cout << " enter 0 to exit repaint  " << endl;
		cin >> input;

		if (input == 0)
		{
			leave = true;
		}
		else rePaint(&carList[input - 1], carList[input - 1].color);


	}
	for (int i = 0; i < 3; i++)
	{
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "car\t" << i + 1 <<"\tmake\t"<< carList[i].make << endl;
		cout << "car\t" << i + 1 << "\tmodel\t" <<carList[i].model << endl;
		cout << "car\t" << i + 1 << "\tyear\t"<<carList[i].year << endl;
		cout << "car\t" << i + 1 << "\tcolor\t"<<carList[i].color << endl;
	}

}

Cars vehicle()
{
	Cars car;
	
	cout << endl;
	cout << endl;
	cout << endl;


	cout << "What is the make of the vehicle?";
	cin >> car.make;

	cout << "What is the model of the vehicle?";
	cin >> car.model;

	cout << "What is the year of the vehicle?";
	cin >> car.year;

	cout << "What is the mileage of the vehicle?";
	cin >> car.mileage;

	
	cout << endl;
	cout << endl;
	cout << endl;
	

	
	
	switch (chooseAcolor())
	{
			case black:
				car.color = black;
				break;
			case white:
				car.color = white;
				break;
			case blue:
				car.color = blue;
				break;
			case red:
				car.color = red;
				break;
			case purple:
				car.color = purple;
				break;
			case brown:
				car.color = brown;
				break;
			case green:
				car.color = green;
				break;
			case yellow:
				car.color = yellow;
				break;
			case pink:
				car.color = pink;
				break;
			case orange:
				car.color = orange;
				break;
			case gray:
				car.color = gray;
				break;
			default:
				break;
	}
	return car;
}
colors chooseAcolor()
{

	
	int input;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "black = 1 " << endl;
	cout << "white = 2 " << endl;
	cout << "blue = 3" << endl;
	cout << "red = 4 " << endl;
	cout << "purple = 5 " << endl;
	cout << "brown = 6 " << endl;
	cout << "green = 7 " << endl;
	cout << "yellow = 8" << endl;
	cout << "pink = 9" << endl;
	cout << "gray  = 10" << endl;

	cout << "Enter a number corresponding to the color:";
	cin >> input;

		return (colors)input;
}
void rePaint(Cars* car, colors color)
{
	colors newpaint;

	while (true)
	{
		newpaint = chooseAcolor();

		if (newpaint == color)
		{
			cout << "You picked the same color...try again" << endl;
		}
		else break;
	}
	

	switch (newpaint)
	{
	case black:
		car->color = black;
		break;
	case white:
		car->color = white;
		break;
	case blue:
		car->color = blue;
		break;
	case red:
		car->color = red;
		break;
	case purple:
		car->color = purple;
		break;
	case brown:
		car->color = brown;
		break;
	case green:
		car->color = green;
		break;
	case yellow:
		car->color = yellow;
		break;
	case pink:
		car->color = pink;
		break;
	case orange:
		car->color = orange;
		break;
	case gray:
		car->color = gray;
		break;
	default:
		break;
	}
	
}
void addMileage(Cars* car, int miles)
{
	car->mileage += miles;
}
void addMileage(Cars car, int miles)
{
	car.mileage += miles;
}
string printCar(colors paint)
{
	string mustBe;

		switch (paint)
		{
		case black:
			mustBe = black;
			break;
		case white:
			mustBe = white;
			break;
		case blue:
			mustBe = blue;
			break;
		case red:
			mustBe = red;
			break;
		case purple:
			mustBe = purple;
			break;
		case brown:
			mustBe = brown;
			break;
		case green:
			mustBe = green;
			break;
		case yellow:
			mustBe = yellow;
			break;
		case pink:
			mustBe = pink;
			break;
		case orange:
			mustBe = orange;
			break;
		case gray:
			mustBe = gray;
			break;
		default:
			break;
		}
		return mustBe;
}

void printCar(Cars car, int n)
{
	cout << " Car " << n << " make " << car.make << endl;
	cout << " Car " << n << " model " << car.model << endl;
	cout << " Car " << n << " year " << car.year << endl;
	cout << " Car " << n << " mileage " << car.mileage << endl;
	cout << " Car " << n << " color " << printCar(car.color) << endl;
}
void printCarpointer(Cars* car, int n)
{
	cout << " Car " << n << " make " << car->make << endl;
	cout << " Car " << n << " model " << car->model << endl;
	cout << " Car " << n << " year " << car->year << endl;
	cout << " Car " << n << " mileage " << car->mileage << endl;
	cout << " Car " << n << " color " << printCar(car->color) << endl;
}