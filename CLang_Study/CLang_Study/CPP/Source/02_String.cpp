#include "stdafx.h"
#include "02_String.h"

void String()
{
	// ���ڿ� �ʱ�ȭ �� ����
	{
		string str;
		str = "Hello World!";

		cout << str << endl;

		cout << "str ���ڿ��� ���� : " << str.length() << endl;
		cout << "str[0]�� ���� : " << str[0] << endll;
	}

	// ���ڿ� ����
	{
		string str1 = "������";
		string str2 = "ȭ����";

		str1 = str2;

		cout << str1 << endll;
	}

	// ���ڿ� ����
	{
		string monday = "������";
		string like = " ����";

		//���� ����
		string LikeMonday = monday + like;
		cout << LikeMonday << endl;

		// �߰� ����
		monday += like;
		cout << monday << endll;
	}

	// ���ڿ� �Է�
	{
		//string name;
		//cout << "�̸� �Է� : ";
		//getline(cin, name);
		//
		//cout << "�̸� : " << name << endll;
	}

	// String �޼ҵ��
	{
		// length() / size()
		{
			string str1;
			string str2 = "C++";
			string str3 = "������";

			cout << "���ڿ� str1 �� ũ�� : " << str1.length() << endl;
			cout << "���ڿ� str2 �� ũ�� : " << str2.size() << endl;
			cout << "���ڿ� str3 �� ũ�� : " << str3.size() << endll;
		}

		//append();
		{
			//�ϳ��� ���ڿ��� ���� �ٸ� ���ڿ��� �߰��ϴ� �޼ҵ�
			string str1, str2, str3;

			// �߰��� ���ڿ��� �� ���� �߰�
			str1.append("C++");

			// �߰��� ���ڿ��� ���� ��ġ���� ������ŭ �� ���� �߰�
			str2.append("I want go home", 2, 4);

			// �߰��� ���ڸ� ������ŭ �� ���� �߰�
			str3.append(10, 'P');

			cout << str1 << endl;
			cout << str2 << endl;
			cout << str3 << endll;
		}

		// find();
		{
			string str = "But, I'm way less sad";

			// �ε��� 0���� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ
			cout << str.find("way") << endl;
			
			// �ε��� 0���� ���ڸ� ã��, �� ���� ��ġ�� ��ȯ
			cout << str.find('s') << endl;

			//str.find("string", 20) -> ���� ��ġ(20)���� ã�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ
			//ã�� ������ �� string::size_type�� string::npos��� ����� ��ȯ
			if (str.find("less", 20) != string::npos)
				cout << "FIND!" << endll;
			else
				cout << "NOT FIND!" << endll;
		}

		// compare()
		{
			// �� ���ڿ� ���� ������ ���ϴ� �޼���
			string str1 = "BANG";
			string str2 = "Drama";

			if (str1.compare(str2) == 0)
				cout << str1 << " == " << str2 << endll;
			else if (str1.compare(str2) < 0)
				cout << str1 << "�� " << str2 << "���� ���� ���� ������ ��" << endll;
			else
				cout << str1 << "�� " << str2 << "���� ���� ���� ������ ��" << endll;
		}

		// replace()
		{
			// Ư�� ���ڿ��� ã�Ƽ� �ٸ� ���ڿ��� ��ü�ϴ� �޼ҵ�
			string str1 = "Screw it, there's a big cloud looking";
			string str2 = "cloud";
			string str3 = "A";

			string::size_type index = str1.find(str2);
			if (index != string::npos)
				str1.replace(index, str2.length(), str3);

			cout << str1 << endll;
		}
	}
}