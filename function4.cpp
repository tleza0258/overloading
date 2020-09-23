#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu ();
float Area(const float Radius);
float Area(const float Length,const float with);
float Area(const float base,float height);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		if(Choice == '1')
		{
			float Radius;
			cout << "\nEnter radius :";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2')
		{
			float Length , Width;
			cout << "Enter Length and Width :";
			cin >> Length >> Width;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Width) << endl;
		}
		else if (Choice == '3')
		{
			float Base,Height;
			cout << "Enter Base and Height : ";
			cin >> Base,Height;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(Base,Height) << endl;
		}
		else if (Choice == '4') Flag = false;
		else
		{
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
		}
	}while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	return(0);
}
float Area (const float Radius)
{
	return(3.10159F * Radius * Radius);
}
float Area (const float Length, const float Width)
{
	return(Length * Width);
}
float Area (const float Base,const float Height)
{
	return(0.5 * Base * Height);
}
void DisplayMenu()
{
	cout << endl;
	cout << "Program Calculate Area " << endl;
	cout << " 1. Circle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle" << endl;
	cout << " 4. Exit" << endl;
	cout << "Enter your choose number :";
}
	