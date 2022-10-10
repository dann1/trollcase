#include <iostream>
#include "casers.h"

using std::string;

#define puts(x) std::cout << x << std::endl;
#define helptrollcase() printf("usage: trollcase <text_to_troll> --random/--alternate");

int main(int argc, char const *argv[])
{
	string text;
	string mode;

	switch (argc)
	{
	case 1:
		helptrollcase();

		return 1;

		break;

	case 2:
		text = argv[1];
		puts(CaSeRAndOMizEr(text));

		return 0;

		break;

	default:
		string m0 = "--random";
		string m1 = "--alternate";

		string h0 = "--help";
		string h1 = "-h";

		text = argv[1];
		mode = argv[2];

		if (m0.compare(mode) == 0)
		{
			puts(CaSeRAndOMizEr(text));
		}
		else if (m1.compare(mode) == 0)
		{
			puts(cAsEaLtErNaToR(text));
		}
		else if (h0.compare(mode) == 0 || h1.compare(mode) == 0)
		{
			helptrollcase()
		}

		else
		{
			printf("Mode not specified");
			return 1;
		}

		break;
	}
}