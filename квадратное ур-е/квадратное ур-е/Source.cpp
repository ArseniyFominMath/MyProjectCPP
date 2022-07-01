#include<iostream>
int main()
{
	char simvol;
	while (1>0)
	{
		double x1, x2, D, a, b, c;
		std::cout << "a= ";
		std::cin >> a;
		std::cout << "b= ";
		std::cin >> b;
		std::cout << "c= ";
		std::cin >> c;
		D = b * b - 4 * a * c;
		if (D > 0)
		{
			D = sqrt(D);
			x1 = (-b - D) / (2 * a);
			x2 = (-b + D) / (2 * a);
			std::cout << "x1= " << x1 << "\n";
			std::cout << "x2= " << x2 << "\n";
			goto abc;
		}
		if (D == 0)
		{
			D = sqrt(D);
			x1 = (-b - D) / (2 * a);
			std::cout << "x= " << x1<<"\n";
			goto abc;
		}
		if (D < 0)
		{
			D = sqrt(-D);
			x1 = -b / (2 * a);
			x2 = D / (2 * a);
			if(x2<0)
			{
				std::cout << "x1= " << x1 << "-" << -x2 << "*i" << "\n";
				std::cout << "x2= " << x1 << "+" << -x2 << "*i" << "\n";
			}
			else
			{
				std::cout << "x1= " << x1 << "+" << x2 << "*i" << "\n";
				std::cout << "x2= " << x1 << "-" << x2 << "*i" << "\n";
			}
			goto abc;
		}

	 abc:
	
		std::cout << "\nto continue press (c), or any key to get out of the program ";
		std::cin >> simvol;
		if (simvol != 'c') { std::cout << "Thanks for attention! The program was stopped by the user.\n";return(0); }
	}
}