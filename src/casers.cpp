#include <random>

using std::string;

string CaSeRAndOMizEr(string text)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 1);

	for (size_t i = 0; i < text.length(); i++)
	{
		char &c = text[i];

		if (dist6(rng) == 1)
		{
			if (islower(c))
				c = toupper(c);
		}
		else
		{
			if (isupper(c))
				c = tolower(c);
		}
	}

	return text;
}

string cAsEaLtErNaToR(string text)
{
	for (size_t i = 1; i < text.length(); i++)
	{
		char &c = text[i];
		char &c_prev = text[i - 1];

		if (!isalpha(c))
			continue;
		if (islower(c_prev))
			c = toupper(c);
		else if (isupper(c_prev))
			c = tolower(c);
	}

	return text;
}
