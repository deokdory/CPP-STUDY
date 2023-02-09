#include "stdafx.h"
#include "02_String.h"

void String()
{
	// 문자열 초기화 및 접근
	{
		string str;
		str = "Hello World!";

		cout << str << endl;

		cout << "str 문자열의 길이 : " << str.length() << endl;
		cout << "str[0]의 문자 : " << str[0] << endll;
	}

	// 문자열 대입
	{
		string str1 = "월요일";
		string str2 = "화요일";

		str1 = str2;

		cout << str1 << endll;
	}

	// 문자열 결합
	{
		string monday = "월요일";
		string like = " 조아";

		//결합 연산
		string LikeMonday = monday + like;
		cout << LikeMonday << endl;

		// 추가 연산
		monday += like;
		cout << monday << endll;
	}

	// 문자열 입력
	{
		//string name;
		//cout << "이름 입력 : ";
		//getline(cin, name);
		//
		//cout << "이름 : " << name << endll;
	}

	// String 메소드들
	{
		// length() / size()
		{
			string str1;
			string str2 = "C++";
			string str3 = "시플플";

			cout << "문자열 str1 의 크기 : " << str1.length() << endl;
			cout << "문자열 str2 의 크기 : " << str2.size() << endl;
			cout << "문자열 str3 의 크기 : " << str3.size() << endll;
		}

		//append();
		{
			//하나의 문자열의 끝에 다른 문자열을 추가하는 메소드
			string str1, str2, str3;

			// 추가할 문자열을 맨 끝에 추가
			str1.append("C++");

			// 추가할 문자열의 시작 위치부터 개수만큼 맨 끝에 추가
			str2.append("I want go home", 2, 4);

			// 추가할 문자를 개수만큼 맨 끝에 추가
			str3.append(10, 'P');

			cout << str1 << endl;
			cout << str2 << endl;
			cout << str3 << endll;
		}

		// find();
		{
			string str = "But, I'm way less sad";

			// 인덱스 0부터 문자열을 찾아, 그 시작 위치를 반환
			cout << str.find("way") << endl;
			
			// 인덱스 0부터 문자를 찾아, 그 시작 위치를 반환
			cout << str.find('s') << endl;

			//str.find("string", 20) -> 시작 위치(20)부터 찾을 문자열을 찾아, 그 시작 위치를 반환
			//찾지 못했을 때 string::size_type의 string::npos라는 상수를 반환
			if (str.find("less", 20) != string::npos)
				cout << "FIND!" << endll;
			else
				cout << "NOT FIND!" << endll;
		}

		// compare()
		{
			// 두 문자열 간의 내용을 비교하는 메서드
			string str1 = "BANG";
			string str2 = "Drama";

			if (str1.compare(str2) == 0)
				cout << str1 << " == " << str2 << endll;
			else if (str1.compare(str2) < 0)
				cout << str1 << "이 " << str2 << "보다 사전 편찬 순으로 앞" << endll;
			else
				cout << str1 << "이 " << str2 << "보다 사전 편찬 순으로 뒤" << endll;
		}

		// replace()
		{
			// 특정 문자열을 찾아서 다른 문자열로 대체하는 메소드
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