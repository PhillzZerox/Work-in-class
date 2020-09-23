#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Displaymenu();
float Area(float radius);
float Area(float weight, float height);
float Area(double based, double high);

int main()
{
	char choose;
	bool flag = true;
	do{
		Displaymenu();
		cin >> choose;
		if(choose == '1')
			{
				float radius;
				cout << "\nEnter radius : ";
				cin >> radius;
				cout << " Area of Circle = " << fixed;
				cout << setprecision(2) << Area(radius) << endl;
			}
		else if(choose == '2')
			{
				float weight, height;
				cout << "\nEnter weight and height : ";
				cin >> weight >> height;
				cout << " Area of Rectangle = " << fixed;
				cout << setprecision(2) << Area(weight,height) << endl;
			}
		else if(choose == '3')
			{
				float based, high;
				cout << "\nEnter weight and height : ";
				cin >> based >> high;
				cout << " Area of Triangle = " << fixed;
				cout << setprecision(2) << Area(based,high) << endl;
			}
		else if(choose == '4') flag = false ;
		else 
			{
				cout << "\nYour choose out of range is ";
				cout << "Not process. \n";
			}
	
	}while(flag);

	cout << "\n . . . Exit Program . . .\n";

	system("pause");
	return 0;
}
void Displaymenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << "	1. Circle" << endl;
	cout << "	2. Rectangle" << endl;
	cout << "	3. Triangle" << endl;
	cout << "	4. Exit" << endl;
	cout << " Enter your choose number : ";
}


float Area(float radius)
{
	return(3.14159F * radius * radius);
}


float Area(float weight, float height)
{
	return(weight * height);

}


float Area(double based, double high)
{
	return(0.5 * based * high);
}