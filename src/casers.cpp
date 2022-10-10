#include <random>

using std::string;

string CaSeRAndOMizEr(string text)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 1);

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

string cAsEaLtErNaToR(string text)
{
	for (size_t i = 1; i < text.length(); i++)
	{
		if (!isalpha(text[i]))
		{
			continue;
		}

		if (islower(text[i - 1]))
		{
			text[i] = toupper(text[i]);
		}
		else if (isupper(text[i - 1]))
		{
			text[i] = tolower(text[i]);
		}
	}

	return text;
}
