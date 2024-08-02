#include <iostream>
#include <vector>

using namespace std;

#include "String.h";
using namespace String;




int main()
{


	// Print First Letter Of Each Word

	PrintFirstLetterOfEachWord(ReadString());

	//Upeer First Letter Of Each Word

	string S1 = ReadString();

	cout << "\n String after Conversion : \n";
	S1 = UpeerFirstLetterOfEachWord(S1);
	cout << S1 << endl;

	//Lower First Letter Of Each Word

	string S2 = ReadString();

	cout << "\n String after Conversion : \n";
	S2 = LowerFirstLetterOfEachWord(S2);
	cout << S2 << endl;

	//Upper and Lower String

	string S3 = ReadString();

	cout << "\n String after Upper : \n";
	S3 = UpperAllString(S3);
	cout << S3 << endl;

	cout << "\n String after Lower : \n";
	S3 = LowerAllString(S3);
	cout << S3 << endl;

	//Invert LetterCase

	char Ch1 = ReadChar();

	cout << "\n Char after inverting case : \n";
	Ch1 = InvertLetterCase(Ch1);
	cout << Ch1 << endl;

	//Invert All String LetterCase

	string S4 = ReadString();

	cout << "\n String after Invert All String Letter Case : \n";
	S4 = InvertAllStringLetterCase(S4);
	cout << S4 << endl;

	//Count Capital Letters,Count Small Letters,Count Letters

	string S5 = ReadString();

	cout << "\nString Length = " << S5.length();
	cout << "\nCapital Letters Count = " << CountCapitalLetters(S5);
	cout << "\nSmall Letters Count = " << CountSmallLetters(S5);

	cout << "\n\nMethod \n";

	cout << "\nString Length = " << CountLetters(S5);
	cout << "\nCapital Letters Count = " << CountLetters(S5, enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count = " << CountLetters(S5, enWhatToCount::SmallLetters);


	//Count Letter

	string S6 = ReadString();
	char Ch2 = ReadChar();

	cout << "\nLetter \'" << Ch2 << "\' count = " << CountLetter(S6, Ch2) << endl;

	//Count Letter,Invert Letter Case

	string S6 = ReadString();
	char Ch3 = ReadChar();

	cout << "\nLetter \'" << Ch3 << "\' count = " << CountLetter(S6, Ch3);

	cout << "\nLetter \'" << Ch3 << "\'";
	cout << "or \'" << InvertLetterCase(Ch3) << "\' ";
	cout << " Count = " << CountLetter(S6, Ch3, false);

	//Is Vowel?

	char Ch4 = ReadChar();

	if (IsVowel(Ch4))
		cout << "\nYes Letter \'" << Ch4 << "\' is Vowel";
	else
		cout << "\nNo Letter \'" << Ch4 << "\' is NOT Vowel";

	//Count Vowels

	string S7 = ReadString();

	cout << "\nNumber of vowels is: " << CountVowels(S7);

	//Print Vowels 

	string S8 = ReadString();

	PrintVowels(S8);

	//Print Each WOrd In String

	PrintEachWordInString(ReadString());

	//Count Words

	string S9 = ReadString();
	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S9);

	//Split String

	vector <string> vString;
	vString = SplitString(ReadString(), " ");
	cout << "Tokens = " << vString.size() << endl;
	for (string& s : vString)
	{
		cout << s << endl;
	}

	//Trim Functions

	string S10 = "     Mohammed Abu-Hadhoud     ";

	cout << "\nString      = " << S10;
	cout << "\n\nTrim Left   = " << TrimLeft(S10);
	cout << "\nTrim Right  = " << TrimRight(S10);
	cout << "\nTrim        = " << Trim(S10);

	//Join String

	vector<string> vString2 = { "Mohammed","Faid","Ali","Maher" };
	cout << "\nVector after join: \n";
	cout << Join(vString2, "###");

	//Join String

	string arrString[] = { "Mohammed","Faid","Ali","Maher" };
	cout << "\n\nArray after join: \n";
	cout << Join(arrString, 4, "***");

	// Problem Reverse Words In String

	string S11 = ReadString();
	cout << "\n\nString after reversing words:";
	cout << "\n" << ReverseWordsInString(S11);

	//Replace Word In String Using BuiltIn Function 

	string S12 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\nOrigial String\n" << S12;
	cout << "\n\nString After Replace:";
	cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S12, StringToReplace, ReplaceTo);

	//Replace Word In String Using Split Function

	string S13 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";

	cout << "\Original  String\n" << S13;

	cout << "\n\nReplace with Match Case :";
	cout << "\n" << ReplaceWordInStringUsingSplit(S13, StringToReplace, ReplaceTo);

	cout << "\n\nReplace with don't Match Case :";
	cout << "\n" << ReplaceWordInStringUsingSplit(S13, StringToReplace, ReplaceTo, false);

	//Remove Punctuation 

	string S14 = "Welcome to Jordan , Jordan is a nice country ; it's amazing"; 

	cout << "\Original  String\n" << S14;
	cout << "\n\nPunctuations Removed : \n" << RemovePunctuationsFromString(S14);

	system("pause > 0");
	return 0;
}

