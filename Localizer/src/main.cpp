#include "main.h"
#include "LocalizationService.h"

int main(char argc, char **argv)
{
	LocalizationService lService;

	while (true)
	{
		Sleep(10);
	}
	//// 1. Parse a JSON string into DOM.
	//const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
	//Document d;
	//d.Parse(json);

	//// 2. Modify it by DOM.
	//Value& s = d["stars"];
	//s.SetInt(s.GetInt() + 1);

	//// 3. Stringify the DOM
	//StringBuffer buffer;
	//Writer<StringBuffer> writer(buffer);
	//d.Accept(writer);

	//// Output {"project":"rapidjson","stars":11}
	//std::cout << buffer.GetString() << std::endl;
}