#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char data[100];
	//��дģʽ���ļ�
	ofstream outfile;
	outfile.open("afile.txt");
	cout << "writing to the file" << endl;
	cout << "Enter your name:";
	cin.getline(data, 100);
	//���ļ�д���û����������
	outfile << data << endl;
	cout << "enter your age:" << endl;
	cin >> data;
	cin.ignore();
	//�ٴ����ļ���������
	outfile << data << endl;
	//�رմ򿪵��ļ�
	outfile.close();

	ifstream infile;
	infile.open("afile.txt");
	cout << "reading from the file" << endl;

	infile >> data;
	cout << data << endl;
	//�ٴδ��ļ���ȡ���ݣ�����ʾ��
	infile >> data;
	cout << data << endl;
	//
	infile.close();
	return 0;
}