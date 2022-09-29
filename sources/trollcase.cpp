#include <iostream>
#include <random>
// #include <typeinfo>

using namespace std;

string CaSeRAndOMizEr(string text_troll);
string cAsEaLtErNaToR(string text_troll);
void puts(string text_trolled);
void helptrollcase();

int main(int argc, char const *argv[])
{
	// TODO: Improve CLI arguments to be order free

	string text_input = argv[1];
	string mode = argv[2];

	switch (argc)
	{
	case 1:
		helptrollcase();
		return 1;
		break;

	case 2:
		puts(CaSeRAndOMizEr(text_input));
		return 0;
		break;

	default:
		string m0 = "--random";
		string m1 = "--alternate";

		if (m0.compare(mode) == 0)
		{
			puts(CaSeRAndOMizEr(text_input));
		}
		else if (m1.compare(mode) == 0)
		{
			puts(cAsEaLtErNaToR(text_input));
		}
		else
		{
			printf("Mode not specified");
			return 1;
		}

		break;
	}
	return 0;
}

string CaSeRAndOMizEr(string text)
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist6(0, 1);

	for (size_t i = 0; i < text.length(); i++)
	{
		if (dist6(rng) == 1)
		{
			if (islower(text[i]))
			{
				text[i] = toupper(text[i]);
			}
		}
		else
		{
			if (isupper(text[i]))
			{
				text[i] = tolower(text[i]);
			}
		}
	}

	return text;
}

// TODO: Improve by checking the previous string case
string cAsEaLtErNaToR(string text)
{
	for (size_t i = 0; i < text.length(); i++)
	{

		if (!isalpha(text[i]))
		{
			continue;
		}

		if (i % 2 == 0)
		{
			if (isupper(text[i]))
			{
				text[i] = tolower(text[i]);
			}
		}
		else
		{
			if (islower(text[i]))
			{
				text[i] = toupper(text[i]);
			}
		}
	}

	return text;
}

void puts(string text)
{
	cout << text << endl;
}

void helptrollcase()
{
	printf("usage: trollcase <text_to_troll> --random/--alternate");
}