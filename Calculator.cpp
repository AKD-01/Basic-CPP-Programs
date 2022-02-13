# include <iostream>
using namespace std;
int main()
{
double x, y, result;
int choice;
cout << "ENTER TWO NO. \n";
cin >> x >> y;
cout << "WHICH OPERATION DO YOU WANT TO PERFORM \n";
cout << "ADDITION...1 \n";
cout << "SUBTRACTION...2 \n";
cout << "MULTIPLICATION...3 \n";
cout << "DIVISION...4 \n";
cin >> choice;
if (choice == 1)
{ 
    result = x + y;
}
else if (choice == 2)
{
    result = x - y;
}
else if (choice == 3)
{
    result = x * y;
}
else if (choice == 4)
{
    result = x / y;
}
else
cout << "WRONG CHOICE";
cout << result;
return 0;
}