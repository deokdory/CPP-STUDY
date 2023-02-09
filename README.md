﻿# CPP-STUDY
## 1일차

### 미리 컴파일된 헤더
stdafx / pch (이름은 개발자 마음)   
빌드 프로세스를 높이기 위한 것   
미리 컴파일된 헤더(이하 "이 헤더")는 아래 상황이 벌어질 때 컴파일됩니다.
1. 이 헤더의 파일이 수정될 때
1. 이 헤더가 포함하는 모든 파일이 수정될 때   
>빌드하는 데 상당한 시간이 걸리는 큰 프로젝트일 경우 미리 컴파일된 사용자 지정 파일을 만드는게 좋다.

### 헤더 파일 경로 설정
솔루션 우클릭 -> 속성
1. C/C++ > 미리 컴파일된 헤더 > **미리 컴파일된 헤더** 를 **만들기** 로 변경

1. VC++디렉터리 -> **포함디렉터리** 클릭 후 **편집**
1. 매크로 클릭
1. ProjectDir 검색 후 **$(ProjectDir)** 더블클릭
1. 좌측에서 선택 후 편집
1. _$(ProjectDir)/CPP/Header/_ 입력

> $(ProjectDir) -> 실행 중인 프로젝트 경로를 의미?

### CPP는 미리 컴파일된 헤더 무조건 인클루드 시켜줘야 함
```c
#include <stdafx.h>
#include <project.h> // cpp 프로젝트명
```
>Window 2017 이전 버전은 stdafx.h.   
Windows 2017 이후는 다른 이름, 두 개는 같음


## OOP : 객체지향 프로그래밍
##### Object-Oriented Programming   
- 컴퓨터 프로그램을 명령어의 목록으로 보는 시각에서 벗어남   
- 여러 개의 독립된 단위, 즉 **객체**들의 모임으로 파악하고자 하는 것   
- 각각의 객체들은 메시지를 주고받고 데이터를 처리할 수 있음

### 기본 구성요소   
1. Class
    - 같은 종류의 집단에 속하는 속성과 행위를 정의한 것
    - 객체지향 프로그램의 기본적인 사용자 정의 데이터형
    - 클래스는 다른 클래스 또는 외부 요소와 독립적으로 디자인
1. Object
    - 클래스의 인스턴스
        - 인스턴스 : 실제로 메모리상에 할당된 것
    - 객체는 자신 고유의 속성을 가지며 클래스에서 정의한 행위를 수행
    - 객체의 행위는 클래스에 정의된 행위를 공유함으로써 메모리를 경제적으로 사용
1. Method, Message
    - 클래스로부터 생성된 객체를 사용하는 방법
    - 객체에 명령을 내리는 메시지
    - 메서드는 한 객체의 서브루틴 형태로 객체의 속성을 조작하는데 사용
    - 객체 간의 통신은 메시지를 통해 이루어짐

### 특징
1. 추상화
    - 불필요한 정보는 숨기고 중요한 정보만 표현함으로써 프로그램을 간단히 만드는 것
    - 추상 자료형은 자료형의 자료 표현과 자료형의 연산을 캡슐화한 것으로 접근 제어를 통해서   
    자료형의 정보를 은닉할 수 있음 
        - 추상 자료형 : 자료 추상화를 통해 정희된 자료형 **(class)**   
    - 일반적으로
        - 추상 자료형 : 클래스
        - 추상 자료형의 인스턴스 : 객체
        - 추상 자료형에서 정의된 연산 : 메소드(함수)
        - 메소드의 호출 : 생성자
    라고 함
1. 캡슐화
    - 특정 기능, 변수들을 하나로 묶은 것
1. 정보은닉
1. 상속성
    - 상속은 새로운 클래스가 기존의 클래스의 자료와 연산을 사용할 수 있게 하는 기능
    - 상속을 받는 새로운 클래스
        - 부클래스
        - 파생 클래스
        - 하위 클래스
        - 자식 클래스
    - 상속하는 기존의 클래스
        - 기반 클래스
        - 상위 클래스
        - 부모 클래스
    - 상속을 통해서 기존의 클래스를 상속받은 하위 클래스를 이용해 프로그램의 요구에 맞춰 클래스를 수정할 수 있다.
    - 클래스간의 종속관계를 형성함으로써 객체를 조직화할 수 있다.
1. 다형성
    - 어떤 한 요소에 여러 개념을 넣어 놓는 것
    - 일반적으로 오버라이딩을 의미
        - 오버라이딩 : 같은 명령으로 다른 기능을 수행하는 것?
    - 다형 개념을 통해서 프로그램 안의 객체 간의 관계를 조직적으로 나타낼 수 있다.


### namespace
- 이름이 기억되는 영역
- 이름이 소속된 공간을 의미
- 클래스, 함수, 변수 등은 std 라는 이름 공간에 저장되어 있음
- namespace 내에 있는 정의를 사용하려면 아래와 같이 사용해야 함
    ```c++
    std::cout / std::cin ...
    ```
- namespace에 속한 정의를 간단하게 사용하려면 다음과 같은 명령문을 추가
    ```c++
    using namespace 이름;
    ```

### 범위 지정 연산자( :: )
- C++에서 우선순위가 가장 높은 연산자
- 여러 범위에서 사용된 식별자를 식별하고 구분하는데 사용
- 변수, 함수, 열거체가 올 수 있음
- 범위 지정 연산자를 변수 이름 앞에 붙이면 해당 변수는 전역으로 사용하라는 의미
- 클래스에 이 연산자를 사용하면 네임스페이스 멤버를 식별하거나, 클래스의 정적 멤버를 호출할 수 있다.

### 헤더파일
```c
#pragma once
```
- #include를 같은 헤더 파일에 대해서 여러 번 적용할 경우,
동일한 타입에 대해서 여러 번 정의되었다는 컴파일러 오류를 만들 수 있음
이를 없애기 위해서 사용

### 절대경로와 상대경로
?

## 2일차
   
### 입출력
- std::cout 출력
	```c++
	#include <iostream>
	std::cout << "Hello" << endl; // endl 은 줄바꿈
	```
- std::cin 입력
	```c++
	#include <iostream>
	std::cin >> num;
	```
	#### C언어 표준 입출력 함수와의 차이점
	1. 삽입 연산자 (<<)와 추출 연산자(>>)가 데이터의 흐름을 더 직관적으로 나타냄
	2. 입출력 데이터의 타입을 자동으로 변환 -> 더욱 편리하고 안전

###  String Class
```c++
#include <string> 
```
- 문자열 초기화 및 접근
	```c++
	string str;
	str = "Hello World!";
	cout << str << endl;
	cout << "str 문자열의 길이 : " << str.length() << endl;
	cout << "str[0]의 문자 : " << str[0]; // 각 원소에 접근 가능
	```		
- 문자열 대입
	```
	string str1 = "월요일";
	string str2 = "화요일";

	str1 = str2;

	cout << str1 << endll;
	```

- 문자열 결합
	 ```c++
	string monday = "월요일";
	string like = " 조아";

	//결합 연산
	string LikeMonday = monday + like;
	cout << LikeMonday << endl;

	//추가 연산
	monday += like;
	cout << monday << endll;
	```
- 문자열 입력
	```c++
	string name;
	cout << "이름 입력 : ";
	getline(cin, name);

	cout << "이름 : " << name << endll;
	```
- String 메서드들
	- length(); / size();
		```c++
		string str1;
		string str2 = "C++";
		string str3 = "시플플";

		cout << "문자열 str1 의 크기 : " << str1.length() << endl;
		cout << "문자열 str2 의 크기 : " << str2.size() << endl;
		cout << "문자열 str3 의 크기 : " << str3.size() << endll;
		```
	- append();
		```c++
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
		```
	- find();
	- compare();
	- replace();

## Class
C++의 구조체 멤버로 함수를 포함할 수 있기에, C언어의 구조체보다는 상위호환
구조체와 클래스의 차이는 기본 접근 제어의 차이일 뿐, 나머지는 거의 같다.
	- 클래스의 멤버 변수 : 프로퍼티(property)
	- 클래스의 멤버 함수 : 메소드(method)
- Object : 객체
	- 실세계에 존재하거나 생각할 수 있는 것
	- 속성과 기능을 가지는 프로그램 단위

- Instance : 인스턴스
	- 클래스(설계도)를 바탕으로 실체화되어 메모리에 존재하는 실체

실재하느냐 아니냐에 따라 Object(생각에만 존재) 와 Instance(실재) 가 나뉨

접근제어 연산자
- public: 아무데서나 접근 가능
- private: 딴 곳에서 접근 불가능
- protected: 자손 클래스에서만 접근 가능

- private 내의 요소를 바꾸기 위해서 public 내의 함수를 이용하는 등의 방법을 사용


