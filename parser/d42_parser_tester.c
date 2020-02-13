#include "d42_parser.h"

int d42_parser_tester()
{
	
}

int d42_parser_user()
{
	struct s_d42_parser parser;
	d42_parser_init(&parser);
	parser.parse();
}

int main()
{
	d42_parser_user();
}
