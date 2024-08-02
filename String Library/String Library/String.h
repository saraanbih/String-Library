#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace String
{
	string ReadString()
	{
		string Word;

		cout << "Please,Enter Your String?\n";
		getline(cin, Word);

		return Word;
	}

	string UpperAllString(string S3)
	{

		for (int i = 0; i < S3.length(); i++)
		{
			S3[i] = toupper(S3[i]);
		}
		return S3;
	}

	string LowerAllString(string S3)
	{

		for (int i = 0; i < S3.length(); i++)
		{
			S3[i] = tolower(S3[i]);
		}
		return S3;
	}

	string UpeerFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}

			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}

	string LowerFirstLetterOfEachWord(string S2)
	{
		bool isFirstLetter = true;

		for (int i = 0; i < S2.length(); i++)
		{
			if (S2[i] != ' ' && isFirstLetter)
			{
				S2[i] = tolower(S2[i]);
			}

			isFirstLetter = (S2[i] == ' ' ? true : false);
		}
		return S2;
	}
	
	void PrintFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;

		cout << "\n First letters of this string : \n";

			for (int i = 0; i < S1.length(); i++)
			{
				if (S1[i] != ' ' && isFirstLetter)
				{
					cout << S1[i] << endl;
				}

				isFirstLetter = (S1[i] == ' ' ? true : false);
			}
	}

	char ReadChar()
	{
		char Character;

		cout << "Please,Enter a Character?\n";
		cin >> Character;

		return Character;
	}

	char InvertChar(char Character)
	{
		cout << "Char after inverting Case:\n";

		return islower(Character) ? toupper(Character) : tolower(Character);
	}

	char InvertLetterCase(char Char1)
	{
		//  اذإ ناك  فرحلا اريغص false اذإ ناك فرحلا اريبك  لإو true عجرت isupper(Char1) 
		return isupper(Char1) ? tolower(Char1) : toupper(Char1);
	}

	string InvertAllStringLetterCase(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}
		return S1;
	}

	short CountCapitalLetters(string S1)
	{
		short Counter = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
				Counter++;

		}
		return Counter;
	}

	short CountSmallLetters(string S1)
	{
		short Counter = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			//  اذإ ناك  فرحلا اريغص false اذإ ناك فرحلا اريبك  لإو true عجرت islower(Char1) 

			if (islower(S1[i]))
				Counter++;

		}
		return Counter;
	}


	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

	short CountLetters(string Str, enWhatToCount WhatToCount = enWhatToCount::All)
	{   
		if (WhatToCount == enWhatToCount::All)
		{
			return Str.length();
		}

		short Counter = 0;

		for (int i = 0; i < Str.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(Str[i]))
				Counter++;

			if (WhatToCount == enWhatToCount::SmallLetters && islower(Str[i]))
				Counter++;

		}
		return Counter;

	}
	
	short CountLetter(string S6, char Letter, bool MatchCase = true)
	{
		short Counter = 0;

		for (short i = 0; i <= S6.length(); i++)
		{
			if (MatchCase)
			{
				if (S6[i] == Letter)
					Counter++;
			}
			else
			{
				
				if (tolower(S6[i]) == tolower(Letter))
					Counter++;
			}
		}
		return Counter;
	}

	short CountLetter(string Str, char Letter, bool MatchCase = true)
	{
		short Counter = 0;

		for (short i = 0; i <= Str.length(); i++)
		{
			if (MatchCase)
			{
				if (Str[i] == Letter)
					Counter++;
			}
			else
			{

				if (tolower(Str[i]) == tolower(Letter))
					Counter++;

			}
		}

		return Counter;
	}

	bool IsVowel(char Ch)
	{
		Ch = tolower(Ch);

		return ((Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'));

	}

	short CountVowels(string Str)
	{
		short Counter = 0;

		for (short i = 0; i < Str.length(); i++)
		{
			if (IsVowel(Str[i]))
			{
				Counter++;
			}
		}
		return Counter;
	}
	
	void PrintVowels(string Str)
	{
		cout << "\nVowels in string are : ";

		for (short i = 0; i < Str.length(); i++)
		{
			if (IsVowel(Str[i]))
			{
				cout << Str[i] << "   ";
			}
		}
	}

	void PrintEachWordInString(string Str)
	{
		string delim = " "; // Delimiter  
		short pos = 0;
		string sWord; 

		cout << "\nYour string words are : \n\n";

		while ((pos = Str.find(delim)) != std::string::npos)
		{
			
			sWord = Str.substr(0, pos);

			if (sWord != "")
			{
				cout << sWord << endl;
			}
			
			Str.erase(0, pos + delim.length());
		}

		if (Str != "")
		{
			cout << Str << endl;
		}
	}

	short CountWords(string Str)
	{
		string delim = " "; // Delimiter  
		short Count = 0;
		short pos = 0;
		string sWord; // define a string variable 

		// use fine() function to get the position of the delimiters
		while ((pos = Str.find(delim)) != std::string::npos)
		{
			
			sWord = Str.substr(0, pos);

			if (sWord != "")
			{
				Count++;
			}
			
			// erase() until positon and move to next word 
			Str.erase(0, pos + delim.length());
		}

		if (Str != "")
		{
			// it print last word of the string 
			Count++;
		}
		return Count;
	}

	vector <string> SplitString(string Str, string Delim)
	{
		vector <string> vString;

		short pos = 0;
		string sWord; // define a string variable 

		// use fine() function to get the position of the delimiters
		while ((pos = Str.find(Delim)) != std::string::npos)
		{
			
			sWord = Str.substr(0, pos);

			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			
			// erase() until positon and move to next word 
			Str.erase(0, pos + Delim.length());
		}

		//  ةعابط  ةملكلا  ةريخلأا نم  صنلا 
		if (Str != "")
		{
			// it print last word of the string 
			vString.push_back(Str);

		}
		return vString;

	}

	string TrimLeft(string Str)
	{
		for (short i = 0; i < Str.length(); i++)
		{
			if (Str[i] != ' ')
			{
				return  Str.substr(i,
					Str.length() - i);

			}
		}
		return "";

	}

	string TrimRight(string Str)
	{
		for (short i = Str.length() - 1; i >= 0; i--)
		{
			if (Str[i] != ' ')
			{
				return  Str.substr(0, i + 1);

			}
		}
		return "";

	}

	string Trim(string Str)
	{
		return TrimLeft(TrimRight(Str));

	}

	string Join(vector<string> Word, string Delmit)
	{
		string str = "";

		for (string& s : Word)
		{
			str = str + s + Delmit;
		}
		return str.substr(0, str.length() - Delmit.length());
	}

	string Join(string Word[], int length, string Delmit)
	{
		string str = "";

		for (int i = 0; i < length; i++)
		{
			str = str + Word[i] + Delmit;
		}

		return str.substr(0, str.length() - Delmit.length());
	}
	
	string ReverseWordsInString(string Str)
	{
		vector<string> vString;
		string S2 = "";

		vString = SplitString(Str, " ");

		// declare iterator 
		vector<string>::iterator iter = vString.end();

		// Pointer  مادختساب Vector رورملا ىلع  رصانع  
		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}

		S2 = S2.substr(0, S2.length() - 1); //remove last space. 

		return S2;
	}

	string ReplaceWordInStringUsingBuiltInFunction(string Str, string StringToReplace, string sRepalceTo)
	{
		//Find The Word You Want To Replace
		short pos = Str.find(StringToReplace);

		//Is The Word Equal Empty String?
		while (pos != std::string::npos)
		{
			
		   Str = Str.replace(pos,StringToReplace.length(), sRepalceTo);

			pos = Str.find(StringToReplace);
			    
		}

		return Str;
	}

	string LowerAllString(string Str)
	{

		for (int i = 0; i < Str.length(); i++)
		{
			Str[i] = tolower(Str[i]);
		}
		return Str;
	}

	string ReplaceWordInStringUsingSplit(string Str, string StringToReplace, string sRepalceTo, bool MatchCase = true)
	{
		vector <string> vString = SplitString(Str, " ");

		for (string& s : vString)
		{
			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = sRepalceTo;
				}
			}
			else
			{
				if (LowerAllString(s) == LowerAllString(StringToReplace))
				{
					s = sRepalceTo;
				}
			}
		}
		return Join(vString, " ");
	}


	string RemovePunctuationsFromString(string Str)
	{
		string S2 = "";

		for (short i = 0; i < Str.length(); i++)
		{
			if (!ispunct(Str[i]))
			{
				S2 += Str[i];
			}
		}

		return S2;
	}

	string Reverse(string Word)
	{
		cout << "String after reversing:\n";

		string S1 = "";

		vector<string> Vword;
		Vword = SplitString(Word, " ");

		vector<string>::iterator word = Vword.end();

		while (word != Vword.begin())
		{
			--word;

			S1 += *word + " ";
		}
		S1 = S1.substr(0, S1.length() - 1);

		return S1;
	}

	string RepalceWords(string Word, string ReplaceIt, string ReplaceTo)
	{
		string Rep;
		short pos = Word.find(ReplaceIt);

		while (pos != std::string::npos)
		{
			Rep = Word.replace(pos, ReplaceIt.length(), ReplaceTo);
			pos = Word.find(ReplaceIt);
		}

		return Rep;
	}

	string  LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}
	string MatchCase(string Word, string ReplaceIt, string ToReplace, bool MatchCase = true)
	{

		vector<string> Vreplace = SplitString(Word, " ");
		for (string& S : Vreplace)
		{
			if (S == ToReplace)
			{
				S = ToReplace;
			}
			else
			{
				if (LowerAllString(S) == LowerAllString(ToReplace))
				{
					S = ToReplace;
				}
			}
		}
		return Join(Vreplace, " ");
	}

	string RemovePuncutations(string Word)
	{
		string Sword = "";

		for (int i = 0; i < Word.length(); i++)
		{
			if (ispunct(Word[i]))
			{
				continue;
			}
			Sword += Word[i];
		}
		return Sword;
	}

	
	

}

