// Convertor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int meniu()
{
	int optiune;

	while (true)
	{
		cout << "Alegeti unitatea de masura: \n";
		cout << "1. Lungime\n";
		cout << "2. Masa\n";
		cout << "3. Volum\n";
		cout << "4. Arie\n";
		cout << "5. Timp\n";
		cout << "6. Temperatura\n";
		cout << "7. Viteza\n";
		cout << "8. Energie\n";
		cout << "9. Presiune\n";
		cout << "10. Densitate\n";
		cout << "11. Consum combustibil\n";

		cin >> optiune;
		if ((optiune <= 0) | (optiune > 11))
			cout << "Va rog introduceti o optiune valida\n";
		else 	
			break;
	}
	
	return optiune;
}

int subMeniu(int optiune)
{
	int submultiplu;

	if (optiune == 1)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Milimetru\n";
			cout << "2. Centimetru\n";
			cout << "3. Decimetru\n";
			cout << "4. Metru\n";
			cout << "5. Decametru\n";
			cout << "6. Hectometru\n";
			cout << "7. Kilometru\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 2)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Miligram\n";
			cout << "2. Centigram\n";
			cout << "3. Decigram\n";
			cout << "4. Gram\n";
			cout << "5. Decagram\n";
			cout << "6. Hectogram\n";
			cout << "7. Kilogram\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 3)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Mililitru\n";
			cout << "2. Centilitru\n";
			cout << "3. Decilitru\n";
			cout << "4. Litru\n";
			cout << "5. Decalitru\n";
			cout << "6. Hectolitru\n";
			cout << "7. Kilolitru\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 4)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 5)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Secunda\n";
			cout << "2. Minut\n";
			cout << "3. Ora\n";
			cout << "4. Zi\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 4))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 6)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Celsius\n";
			cout << "2. Kelvin\n";
			cout << "3. Fahrenheit\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 3))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 7)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. M/s\n";
			cout << "2. Km/h\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 2))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 8)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Milijoule\n";
			cout << "2. Joule\n";
			cout << "3. Megajoule\n";
			cout << "4. Gigajoule\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 4))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 9)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Bar\n";
			cout << "2. Psi\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 10)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 11)
	{
		while (true)
		{
			cout << "Alegeti subunitatea: \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> submultiplu;

			if ((submultiplu < 0) | (submultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	return submultiplu;
}

int output(int optiune)
{
	int oSubmultiplu;

	if (optiune == 1)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Milimetru\n";
			cout << "2. Centimetru\n";
			cout << "3. Decimetru\n";
			cout << "4. Metru\n";
			cout << "5. Decametru\n";
			cout << "6. Hectometru\n";
			cout << "7. Kilometru\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 2)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Miligram\n";
			cout << "2. Centigram\n";
			cout << "3. Decigram\n";
			cout << "4. Gram\n";
			cout << "5. Decagram\n";
			cout << "6. Hectogram\n";
			cout << "7. Kilogram\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 3)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Mililitru\n";
			cout << "2. Centilitru\n";
			cout << "3. Decilitru\n";
			cout << "4. Litru\n";
			cout << "5. Decalitru\n";
			cout << "6. Hectolitru\n";
			cout << "7. Kilolitru\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 4)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 5)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Secunda\n";
			cout << "2. Minut\n";
			cout << "3. Ora\n";
			cout << "4. Zi\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 4))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 6)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Celsius\n";
			cout << "2. Kelvin\n";
			cout << "3. Fahrenheit\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 3))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 7)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. M/s\n";
			cout << "2. Km/h\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 2))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 8)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Milijoule\n";
			cout << "2. Joule\n";
			cout << "3. Megajoule\n";
			cout << "4. Gigajoule\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 4))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 9)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Bar\n";
			cout << "2. Psi\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 10)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}

	else if (optiune == 11)
	{
		while (true)
		{
			cout << "Alegeti subunitatea in care vreti sa faceti conversia : \n";
			cout << "1. Milimetru patrat\n";
			cout << "2. Centimetru patrat\n";
			cout << "3. Decimetru patrat\n";
			cout << "4. Metru patrat\n";
			cout << "5. Decametru patrat\n";
			cout << "6. Hectar\n";
			cout << "7. Kilometru patrat\n";

			cin >> oSubmultiplu;

			if ((oSubmultiplu < 0) | (oSubmultiplu > 8))
				cout << "Va rog introduceti o optiune valida\n";
			else
				break;
		}
	}


	return oSubmultiplu;
}

double lungime(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:
	{
			  if (oSubmultiplu == 1) return valoare;
			  else if (oSubmultiplu == 2) return valoare / 10;
			  else if (oSubmultiplu == 3) return valoare / 100;
			  else if (oSubmultiplu == 4) return valoare / 1000;
			  else if (oSubmultiplu == 5) return valoare / 10000;
			  else if (oSubmultiplu == 6) return valoare / 100000;
			  else if (oSubmultiplu == 7) return valoare / 1000000;
			  break;
	}
	case 2:
	{
			  if (oSubmultiplu == 1) return valoare * 10;
			  else if (oSubmultiplu == 2) return valoare;
			  else if (oSubmultiplu == 3) return valoare / 10;
			  else if (oSubmultiplu == 4) return valoare / 100;
			  else if (oSubmultiplu == 5) return valoare / 1000;
			  else if (oSubmultiplu == 6) return valoare / 10000;
			  else if (oSubmultiplu == 7) return valoare / 100000;
			  break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare * 100;
			  else if (oSubmultiplu == 2) return valoare * 10;
			  else if (oSubmultiplu == 3) return valoare;
			  else if (oSubmultiplu == 4) return valoare / 10;
			  else if (oSubmultiplu == 5) return valoare / 100;
			  else if (oSubmultiplu == 6) return valoare / 1000;
			  else if (oSubmultiplu == 7) return valoare / 10000;
			  break;
	}
	case 4:
	{
			  if (oSubmultiplu == 1) return valoare * 1000;
			  else if (oSubmultiplu == 2) return valoare * 100;
			  else if (oSubmultiplu == 3) return valoare * 10;
			  else if (oSubmultiplu == 4) return valoare;
			  else if (oSubmultiplu == 5) return valoare / 10;
			  else if (oSubmultiplu == 6) return valoare / 100;
			  else if (oSubmultiplu == 7) return valoare / 1000;
			  break;
	}
	case 5:
	{
			  if (oSubmultiplu == 1) return valoare * 10000;
			  else if (oSubmultiplu == 2) return valoare * 1000;
			  else if (oSubmultiplu == 3) return valoare * 100;
			  else if (oSubmultiplu == 4) return valoare * 10;
			  else if (oSubmultiplu == 5) return valoare;
			  else if (oSubmultiplu == 6) return valoare / 10;
			  else if (oSubmultiplu == 7) return valoare / 100;
			  break;
	}
	case 6:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 10000;
			  else if (oSubmultiplu == 3) return valoare * 1000;
			  else if (oSubmultiplu == 4) return valoare * 100;
			  else if (oSubmultiplu == 5) return valoare * 10;
			  else if (oSubmultiplu == 6) return valoare;
			  else if (oSubmultiplu == 7) return valoare / 10;
			  break;
	}
	case 7:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 100000;
			  else if (oSubmultiplu == 3) return valoare * 10000;
			  else if (oSubmultiplu == 4) return valoare * 1000;
			  else if (oSubmultiplu == 5) return valoare * 100;
			  else if (oSubmultiplu == 6) return valoare * 10;
			  else if (oSubmultiplu == 7) return valoare;
			  break;
	}
	}
}

double masa(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:
	{
			  if (oSubmultiplu == 1) return valoare;
			  else if (oSubmultiplu == 2) return valoare / 10;
			  else if (oSubmultiplu == 3) return valoare / 100;
			  else if (oSubmultiplu == 4) return valoare / 1000;
			  else if (oSubmultiplu == 5) return valoare / 10000;
			  else if (oSubmultiplu == 6) return valoare / 100000;
			  else if (oSubmultiplu == 7) return valoare / 1000000;
			  break;
	}
	case 2:
	{
			  if (oSubmultiplu == 1) return valoare * 10;
			  else if (oSubmultiplu == 2) return valoare;
			  else if (oSubmultiplu == 3) return valoare / 10;
			  else if (oSubmultiplu == 4) return valoare / 100;
			  else if (oSubmultiplu == 5) return valoare / 1000;
			  else if (oSubmultiplu == 6) return valoare / 10000;
			  else if (oSubmultiplu == 7) return valoare / 100000;
			  break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare * 100;
			  else if (oSubmultiplu == 2) return valoare * 10;
			  else if (oSubmultiplu == 3) return valoare;
			  else if (oSubmultiplu == 4) return valoare / 10;
			  else if (oSubmultiplu == 5) return valoare / 100;
			  else if (oSubmultiplu == 6) return valoare / 1000;
			  else if (oSubmultiplu == 7) return valoare / 10000;
			  break;
	}
	case 4:
	{
			  if (oSubmultiplu == 1) return valoare * 1000;
			  else if (oSubmultiplu == 2) return valoare * 100;
			  else if (oSubmultiplu == 3) return valoare * 10;
			  else if (oSubmultiplu == 4) return valoare;
			  else if (oSubmultiplu == 5) return valoare / 10;
			  else if (oSubmultiplu == 6) return valoare / 100;
			  else if (oSubmultiplu == 7) return valoare / 1000;
			  break;
	}
	case 5:
	{
			  if (oSubmultiplu == 1) return valoare * 10000;
			  else if (oSubmultiplu == 2) return valoare * 1000;
			  else if (oSubmultiplu == 3) return valoare * 100;
			  else if (oSubmultiplu == 4) return valoare * 10;
			  else if (oSubmultiplu == 5) return valoare;
			  else if (oSubmultiplu == 6) return valoare / 10;
			  else if (oSubmultiplu == 7) return valoare / 100;
			  break;
	}
	case 6:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 10000;
			  else if (oSubmultiplu == 3) return valoare * 1000;
			  else if (oSubmultiplu == 4) return valoare * 100;
			  else if (oSubmultiplu == 5) return valoare * 10;
			  else if (oSubmultiplu == 6) return valoare;
			  else if (oSubmultiplu == 7) return valoare / 10;
			  break;
	}
	case 7:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 100000;
			  else if (oSubmultiplu == 3) return valoare * 10000;
			  else if (oSubmultiplu == 4) return valoare * 1000;
			  else if (oSubmultiplu == 5) return valoare * 100;
			  else if (oSubmultiplu == 6) return valoare * 10;
			  else if (oSubmultiplu == 7) return valoare;
			  break;
	}
	}
}

double volum(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:
	{
			  if (oSubmultiplu == 1) return valoare;
			  else if (oSubmultiplu == 2) return valoare / 10;
			  else if (oSubmultiplu == 3) return valoare / 100;
			  else if (oSubmultiplu == 4) return valoare / 1000;
			  else if (oSubmultiplu == 5) return valoare / 10000;
			  else if (oSubmultiplu == 6) return valoare / 100000;
			  else if (oSubmultiplu == 7) return valoare / 1000000;
			  break;
	}
	case 2:
	{
			  if (oSubmultiplu == 1) return valoare * 10;
			  else if (oSubmultiplu == 2) return valoare;
			  else if (oSubmultiplu == 3) return valoare / 10;
			  else if (oSubmultiplu == 4) return valoare / 100;
			  else if (oSubmultiplu == 5) return valoare / 1000;
			  else if (oSubmultiplu == 6) return valoare / 10000;
			  else if (oSubmultiplu == 7) return valoare / 100000;
			  break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare * 100;
			  else if (oSubmultiplu == 2) return valoare * 10;
			  else if (oSubmultiplu == 3) return valoare;
			  else if (oSubmultiplu == 4) return valoare / 10;
			  else if (oSubmultiplu == 5) return valoare / 100;
			  else if (oSubmultiplu == 6) return valoare / 1000;
			  else if (oSubmultiplu == 7) return valoare / 10000;
			  break;
	}
	case 4:
	{
			  if (oSubmultiplu == 1) return valoare * 1000;
			  else if (oSubmultiplu == 2) return valoare * 100;
			  else if (oSubmultiplu == 3) return valoare * 10;
			  else if (oSubmultiplu == 4) return valoare;
			  else if (oSubmultiplu == 5) return valoare / 10;
			  else if (oSubmultiplu == 6) return valoare / 100;
			  else if (oSubmultiplu == 7) return valoare / 1000;
			  break;
	}
	case 5:
	{
			  if (oSubmultiplu == 1) return valoare * 10000;
			  else if (oSubmultiplu == 2) return valoare * 1000;
			  else if (oSubmultiplu == 3) return valoare * 100;
			  else if (oSubmultiplu == 4) return valoare * 10;
			  else if (oSubmultiplu == 5) return valoare;
			  else if (oSubmultiplu == 6) return valoare / 10;
			  else if (oSubmultiplu == 7) return valoare / 100;
			  break;
	}
	case 6:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 10000;
			  else if (oSubmultiplu == 3) return valoare * 1000;
			  else if (oSubmultiplu == 4) return valoare * 100;
			  else if (oSubmultiplu == 5) return valoare * 10;
			  else if (oSubmultiplu == 6) return valoare;
			  else if (oSubmultiplu == 7) return valoare / 10;
			  break;
	}
	case 7:
	{
			  if (oSubmultiplu == 1) return valoare * 1000000;
			  else if (oSubmultiplu == 2) return valoare * 100000;
			  else if (oSubmultiplu == 3) return valoare * 10000;
			  else if (oSubmultiplu == 4) return valoare * 1000;
			  else if (oSubmultiplu == 5) return valoare * 100;
			  else if (oSubmultiplu == 6) return valoare * 10;
			  else if (oSubmultiplu == 7) return valoare;
			  break;
	}
	}

}

double arie(double valoare, int submultiplu, int oSubmultiplu)
{
	{
		switch (submultiplu)
		{
		case 1:
		{
				  if (oSubmultiplu == 1) return valoare;
				  else if (oSubmultiplu == 2) return valoare / pow(10,2);
				  else if (oSubmultiplu == 3) return valoare / pow(10, 4);
				  else if (oSubmultiplu == 4) return valoare / pow(10, 6);
				  else if (oSubmultiplu == 5) return valoare / pow(10, 8);
				  else if (oSubmultiplu == 6) return valoare / pow(10, 10);
				  else if (oSubmultiplu == 7) return valoare / pow(10, 12);
				  break;
		}
		case 2:
		{
				  if (oSubmultiplu == 1) return valoare * 100;
				  else if (oSubmultiplu == 2) return valoare;
				  else if (oSubmultiplu == 3) return valoare / 100;
				  else if (oSubmultiplu == 4) return valoare / pow(10, 4);
				  else if (oSubmultiplu == 5) return valoare / pow(10, 6);
				  else if (oSubmultiplu == 6) return valoare / pow(10, 8);
				  else if (oSubmultiplu == 7) return valoare / pow(10, 10);
				  break;
		}
		case 3:
		{
				  if (oSubmultiplu == 1) return valoare * pow(10, 4);
				  else if (oSubmultiplu == 2) return valoare * 100;
				  else if (oSubmultiplu == 3) return valoare;
				  else if (oSubmultiplu == 4) return valoare / pow(10, 2);
				  else if (oSubmultiplu == 5) return valoare / pow(10, 4);
				  else if (oSubmultiplu == 6) return valoare / pow(10, 6);
				  else if (oSubmultiplu == 7) return valoare / pow(10, 8);
				  break;
		}
		case 4:
		{
				  if (oSubmultiplu == 1) return valoare * pow(10, 6);
				  else if (oSubmultiplu == 2) return valoare * pow(10, 4);
				  else if (oSubmultiplu == 3) return valoare * pow(10, 2);
				  else if (oSubmultiplu == 4) return valoare;
				  else if (oSubmultiplu == 5) return valoare / pow(10, 2);
				  else if (oSubmultiplu == 6) return valoare / pow(10, 4);
				  else if (oSubmultiplu == 7) return valoare / pow(10, 6);
				  break;
		}
		case 5:
		{
				  if (oSubmultiplu == 1) return valoare * pow(10, 8);
				  else if (oSubmultiplu == 2) return valoare * pow(10, 6);
				  else if (oSubmultiplu == 3) return valoare * pow(10, 4);
				  else if (oSubmultiplu == 4) return valoare * pow(10, 2);
				  else if (oSubmultiplu == 5) return valoare;
				  else if (oSubmultiplu == 6) return valoare / pow(10, 2);
				  else if (oSubmultiplu == 7) return valoare / pow(10, 4);
				  break;
		}
		case 6:
		{
				  if (oSubmultiplu == 1) return valoare * pow(10, 10);
				  else if (oSubmultiplu == 2) return valoare * pow(10, 8);
				  else if (oSubmultiplu == 3) return valoare * pow(10, 6);
				  else if (oSubmultiplu == 4) return valoare * pow(10, 4);
				  else if (oSubmultiplu == 5) return valoare * pow(10, 2);
				  else if (oSubmultiplu == 6) return valoare;
				  else if (oSubmultiplu == 7) return valoare / pow(10, 2);
				  break;
		}
		case 7:
		{
				  if (oSubmultiplu == 1) return valoare * 1000000;
				  else if (oSubmultiplu == 2) return valoare * 100000;
				  else if (oSubmultiplu == 3) return valoare * 10000;
				  else if (oSubmultiplu == 4) return valoare * 1000;
				  else if (oSubmultiplu == 5) return valoare * 100;
				  else if (oSubmultiplu == 6) return valoare * 10;
				  else if (oSubmultiplu == 7) return valoare;
				  break;
		}
		}
	}
}

double timp(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:{
			   if (oSubmultiplu == 1) return valoare;
			   else if (oSubmultiplu == 2) return valoare / 60;
			   else if (oSubmultiplu == 3) return valoare / 3600;
			   else if (oSubmultiplu == 4) return valoare / 86400;
			   break;
	}
	case 2:{
			   if (oSubmultiplu == 1) return valoare * 60;
			   else if (oSubmultiplu == 2) return valoare;
			   else if (oSubmultiplu == 3) return valoare / 60;
			   else if (oSubmultiplu == 4) return valoare / 1440;
			   break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare * 3600;
			  else if (oSubmultiplu == 2) return valoare * 60;
			  else if (oSubmultiplu == 3) return valoare;
			  else if (oSubmultiplu == 4) return valoare / 24;
			  break;
	}
	case 4:
	{
			  if (oSubmultiplu == 1) return valoare * 86400;
			  else if (oSubmultiplu == 2) return valoare * 1440;
			  else if (oSubmultiplu == 3) return valoare * 24;
			  else if (oSubmultiplu == 4) return valoare;
	}
	}
}

double temperatura(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:
	{
			  if (oSubmultiplu == 1) return valoare;
			  else if (oSubmultiplu == 2) return valoare * 274.15;
			  else if (oSubmultiplu == 3) return valoare * 33.8;
			  break;
	}
	case 2:
	{
			  if (oSubmultiplu == 1) return valoare / 274.15;
			  else if (oSubmultiplu == 2) return valoare;
			  else if (oSubmultiplu == 3) return valoare * (-457.87);
			  break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare / 33.8;
			  else if (oSubmultiplu == 2) return valoare * 255.92;
			  else if (oSubmultiplu == 3) return valoare;
			  break;
	}
	}
}

double viteza(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:
	{
			  if (oSubmultiplu == 1) return valoare;
			  else if (oSubmultiplu == 2) return valoare * 3.6;
			  break;
	}
	case 2:
	{
			  if (oSubmultiplu == 1) return valoare / 3.6;
			  else if (oSubmultiplu == 2) return valoare;
			  break;
	}
	}
}

double energie(double valoare, int submultiplu, int oSubmultiplu)
{
	switch (submultiplu)
	{
	case 1:{
			   if (oSubmultiplu == 1) return valoare;
			   else if (oSubmultiplu == 2) return valoare / 10;
			   else if (oSubmultiplu == 3) return valoare / 100;
			   else if (oSubmultiplu == 4) return valoare / 1000;
			   break;
	}
	case 2:{
			   if (oSubmultiplu == 1) return valoare * 10;
			   else if (oSubmultiplu == 2) return valoare;
			   else if (oSubmultiplu == 3) return valoare / 10;
			   else if (oSubmultiplu == 4) return valoare / 100;
			   break;
	}
	case 3:
	{
			  if (oSubmultiplu == 1) return valoare * 100;
			  else if (oSubmultiplu == 2) return valoare * 10;
			  else if (oSubmultiplu == 3) return valoare;
			  else if (oSubmultiplu == 4) return valoare / 10;
			  break;
	}
	case 4:
	{
			  if (oSubmultiplu == 1) return valoare * 1000;
			  else if (oSubmultiplu == 2) return valoare * 100;
			  else if (oSubmultiplu == 3) return valoare * 10;
			  else if (oSubmultiplu == 4) return valoare;
	}
	}
}
double presiune(double valoare, int submultiplu, int oSubmultiplu)
{
	{
		switch (submultiplu)
		{
		case 1:
		{
				  if (oSubmultiplu == 1) return valoare;
				  else if (oSubmultiplu == 2) return valoare * 14.5;
				  break;
		}
		case 2:
		{
				  if (oSubmultiplu == 1) return valoare / 14.5;
				  else if (oSubmultiplu == 2) return valoare;
				  break;
		}
		}
	}
}



double alegere(int optiune, double valoare, int submultiplu, int oSubmultiplu)
{
	switch (optiune)
	{
	case 1: {return lungime(valoare, submultiplu, oSubmultiplu); break; }
	case 2: {return masa(valoare, submultiplu, oSubmultiplu); break; }
	case 3: {return volum(valoare, submultiplu, oSubmultiplu); break; }
	case 4: {return arie(valoare, submultiplu, oSubmultiplu); break; }
	case 5: {return timp(valoare, submultiplu, oSubmultiplu); break; }
	case 6: {return temperatura(valoare, submultiplu, oSubmultiplu); break; }
	case 7: {return viteza(valoare, submultiplu, oSubmultiplu); break; }
	case 8: {return energie(valoare, submultiplu, oSubmultiplu); break; }
	case 9: {return presiune(valoare, submultiplu, oSubmultiplu); break; }
	}
}
	/*
	

	case 10: {densitate(valoare, submultiplu, oSubmultiplu); break; }
	case 11: {consumCombustibil(valoare, submultiplu, oSubmultiplu); break; }
}
}*/


/*

void densitate(int valoare);
void consumCombustibil(int valoare);*/

	

int _tmain(int argc, _TCHAR* argv[])
{
	int optiune, submultiplu, oSubmultiplu;
	double valoare, a;
	optiune = meniu();
	submultiplu = subMeniu(optiune);
	oSubmultiplu = output(optiune);
	cout << "Introduceti valoarea: ";
	cin >> valoare;
	a = alegere(optiune, valoare, submultiplu, oSubmultiplu);
	cout << a <<"\n";

	return 0;
}

