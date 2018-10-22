#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char data[100];
	//以写模式打开文件
	ofstream outfile;
	outfile.open("afile.txt");
	cout << "writing to the file" << endl;
	cout << "Enter your name:";
	cin.getline(data, 100);
	//向文件写入用户输入的数据
	outfile << data << endl;
	cout << "enter your age:" << endl;
	cin >> data;
	cin.ignore();
	//再次向文件输入数据
	outfile << data << endl;
	//关闭打开的文件
	outfile.close();

	ifstream infile;
	infile.open("afile.txt");
	cout << "reading from the file" << endl;

	infile >> data;
	cout << data << endl;
	//再次从文件读取数据，并显示他
	infile >> data;
	cout << data << endl;
	//
	infile.close();
	return 0;
}