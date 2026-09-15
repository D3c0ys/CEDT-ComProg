// 05_String_31  05_String_★★★_Baconian
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

const std::vector<std::pair<std::string, char>> pass = {
	{"UUUU",'0'}, 
	{"UUUL",'1'},
	{"UULU",'2'},
	{"UULL",'3'},
	{"ULUU",'4'},
	{"ULUL",'5'},
	{"ULLU",'6'},
	{"ULLL",'7'},
	{"LUUU",'8'},
	{"LUUL",'9'},
	{"LULU",'-'},
	{"LULL",','}};

char infStr(std::string s, int pos)
{
	return (s[pos%s.size()]);
}

std::string encode (std::string decoy, std::string text)
{
	std::vector<std::pair<std::string, char>>::const_iterator itr;
	std::string ULtext = "";
	std::string cipher;
	itr = pass.begin();
	// Maps from text into UL text
	for(size_t i = 0; i < text.size();i++) // Loop each byte
	{
		itr = pass.begin();
		while(itr != pass.end()) // Loop check table
		{
			if( (*itr).second == text[i] )
				ULtext = ULtext + (*itr).first; // Concat matched UL string into ULtext 
			itr++;
		}
	}

	//Turns UL text into decoy string format
	int i = 0;
	int j = 0;
	while(ULtext[i])
	{
		if (isalpha(infStr(decoy,j)))
		{
			cipher.push_back((ULtext[i]=='L')?infStr(decoy,j)|0x20:infStr(decoy,j)&~0x20);
			i++;
			j++;
		}
		else
		{
			cipher.push_back(infStr(decoy,j));
			j++;
		}
	}

	return cipher;
}

std::string decode (std::string cipher)
{
	std::string::iterator itr;
	std::string mapPass;
	std::string text;

	int count = 0;
	itr = cipher.begin();

	// Convert from alphabets to U and L
	while(itr != cipher.end())
	{
		if (isalpha(*itr))
		{	
			mapPass.push_back((*itr >> 5  & 1)?'L':'U'); // If *itr is lowercase push L, otherwise U
			count++;
		}
		itr++;
	}

	std::vector<std::pair<std::string, char>>::const_iterator itr2;
	itr2 = pass.begin();
	
	// Maps from U L text into decoded text
	for(size_t i = 0; i < mapPass.size();i+=4) // Loop each 4bytes
	{
		itr2 = pass.begin();
		while(itr2 != pass.end()) // Loop check table
		{
			if( (*itr2).first == mapPass.substr(i,4) )
				text.push_back((*itr2).second); // Push the decoded char into text
			itr2++;
		}
	}
	return text;
}

int main() {
	
	std::string decoy;
	std::getline(std::cin,decoy);

	while(1)
	{
		std::string text;
		std::getline(std::cin,text);

		if (text[0] == 'E' )
		{
			text = text.erase(0,2);
			std::cout << encode(decoy, text) << std::endl;
		}
		else if (text[0] == 'D')
		{
			text = text.erase(0,2);
			std::cout << decode(text) << std::endl;
		}
		else if (text.find(EOF) == std::string::npos)
			break;
	}
}
