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
		cout << "str[0]�� ����     : " << str[0] << endll;
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

		// ���տ���
		string LikeMonday = monday + like;
		cout << LikeMonday << endl;

		// �߰�����
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
	
	// string �޼ҵ��
	{
		// length() / size()
		{
			string str1;
			string str2 = "C++";
			string str3 = "������";

			cout << "���ڿ� str1�� ���� : " << str1.length() << endl;
			cout << "���ڿ� str1�� ũ�� : " << str2.size() << endl;
			cout << "���ڿ� str1�� ũ�� : " << str3.size() << endll;
		}

		// append()
		{
			// �ϳ��� ���ڿ��� ���� �ٸ� ���ڿ��� �߰��ϴ� �޼ҵ�
			string str1, str2, str3;

			str1.append("C++");
			// �߰��� ���ڿ��� �� ���� �߰�
			str2.append("I want go home", 2, 4);
			// �߰��� ���ڿ��� ���� ��ġ���� ������ŭ �� ���� �߰�
			str3.append(10, 'P');
			// �߰��� ���ڸ� ������ŭ �� ���� �߰�

			cout << str1 << endl;
			cout << str2 << endl;
			cout << str3 << endll;
		}

		// find()
		{
			string str = "But, I'm way less sad";

			cout << str.find("way") << endl;
			// �ε��� 0���� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ
			cout << str.find('s') << endl;
			// �ε��� 0���� ���ڸ� ã��, �� ���� ��ġ�� ��ȯ

			if (str.find("less", 10) != string::npos)
			// ���� ��ġ���� ã�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ
			// ���ڿ��� ã�� ���ϸ� string::size_type�� string::npos��� ����� ��ȯ
				cout << "FIND!" << endll;
			else
				cout << "NOT FIND!" << endll;
		}

		// compare()
		{
			// �� ���ڿ� ���� ������ ���ϴ� �޼���
			string str1 = "Drama";
			string str2 = "BANG";

			if (str1.compare(str2) == 0)
				cout << str1 << " == " << str2;
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
			string str3 = "crowd";

			string::size_type index = str1.find(str2);
			if (index != string::npos)
				str1.replace(index, str2.length(), str3);

			cout << str1 << endll;
		}
	}

	return;
}