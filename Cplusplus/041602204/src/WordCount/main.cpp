#include<iostream>
#include<fstream>
#include<string>
#include"CountChar.h"
#include"CountLines.h"
#include"init.h"
//#include"WordFrequency.h"
using namespace std;
int main(int argc, char **argv)
{
	int temp = init(argc, argv);
	if (temp == -1) {                               //˵��cmd����������� 
		cout << "Sorry, something errors happened!" << endl;
		return 0;
	}
	//�����ļ��������㡣  Ҳ����Ҫ�Ŀ������
	int chars_cnt = CountChar(argv[1]);
	//int words_cnt = CountWords(argv[1]);
	int lines_cnt = CountLines(argv[1]);
	//? ? ? top10 = WordsTop10(argv[1]);
	//
	//��������
	cout << "characters:" << chars_cnt << endl;
	//cout << "words:" << words_cnt << endl;
	cout << "lines:" << lines_cnt << endl;

	return 0;

}