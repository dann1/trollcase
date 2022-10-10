#include <iostream>
#include "casers.h"

using std::string;

#define puts(x) std::cout << x << std::endl;
#define help() puts("usage: trollcase <text_to_troll> --random/--alternate/--interactive https://github.com/dann1/trollcase");

int main(int argc, char const *argv[])
{
	string text;
	string mode;
	string uinput;

	string modes[3] = { "--random", "--alternate", "--interactive" };

	switch (argc)
	{
	case 1:
		help();
		return 1;

		break;
	case 2:
		text = argv[1];

		if (text.compare("--help") == 0 || text.compare("-h") == 0)
		{
			help();
		}
		else
		{
			puts(CaSeRAndOMizEr(text));
		}

		break;
	default:
		text = argv[1];
		mode = argv[2];

		if (modes[0].compare(mode) == 0)
		{
			puts(CaSeRAndOMizEr(text));
		}
		else if (modes[1].compare(mode) == 0)
		{
			puts(cAsEaLtErNaToR(text));
		}
		else if (modes[2].compare(mode) == 0)
		{
			puts("Type text to be trolled with randomized casing");
			std::cin >> uinput;

			puts(CaSeRAndOMizEr(uinput));

			std::cin.ignore(1);
			std::getchar();
		}
		else
		{
			puts("Mode not valid");
			help();
			return 1;
		}

		break;
	}
}