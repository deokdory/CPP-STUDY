﻿# CPP-STUDY
# 1일차

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
        - 추상 자료형 : 자료 추상화를 통해 정의된 자료형 **(class)**   
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

# 2일차
   
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

# 3일차
## 04_New

### new
- 자유 기억 공간(free store)이라고 불리는 메모리 공간에 객체를 위한 메모리를 할당받음
- new 연산자를 통해 할당받은 메모리는 따로 이름이 없으므로 해당 포인터로만 접근할 수 있음
- 생성자를 호출 (06번에서 설명)

### delete
- 더는 사용하지 않는 메모리를 다시 메모리 공간에 돌려줄 수 있음
- 이때, new 연산자를 통해서 생성한 메모리가 아니면 delete로 해제할 수 없다
- 해제하고 다시 해제할려고 하면 오류가 발생
(할당이 해제된 메모리를 가리키는 포인터를 댕글링 포인터(dangling pointer)라고 함)

### malloc과의 차이점
- new는 생성자를 호출한다
- new는 할당하고자 하는 자료형에 맞게 반환된 주소 값의 형변환
	ex) (int*)malloc(size) 에서 (int*) 이부분을 생략가능

## 05_Function

### Function Overloading : 함수 오버로딩
- 같은 이름의 함수를 중복하여 정의하는 것을 의미
- 같은 일을 처리하는 함수를 매개변수의 형식을 조금씩 달리하여, 하나의 이름으로 작성하게 해주는 것
- OOP 특징 중 다형성의 구현
- 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의하는 것

### Function Signature : 함수 시그니처
- 함수의 원형에 명시되는 매개변수 리스트
- 두 함수가 매개변수의 개수와 그 타입이 모두 같다면, 두 함수의 시그니처는 같다고 할 수 있다

### Default Argument : 디폴트 인수
- 기본값이 미리 정의되어 있는 인수
- 인수를 전달하지 않으면, 함수는 자동으로 미리 정의되어 있는 디폴트 인수값을 사용
- 인수를 전달하면 당연히 디폴트 값이 아닌 전달된 인수를 가지고 함수를 호출
- 주의사항
	1) 함수의 원형에서만 지정할 수 있음
	2) 가장 오른쪽에서부터 시작하여 순서대로만 지정이 가능
	3) 가운데 인수들만 별도로 디폴트 인수를 지정할 수는 없음

### Reference : 참조자
- 실제 이름 대신 사용할 수 있는 새로운 기능
- 크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달해야 할 경우 사용 가능
- 클래스를 설계할 때에도 자주 사용됨
- 참조자는 대상 변수와 같은 메모리 위치를 참조하게 된다
- 선언
	- int n;		변수 선언
	- int& rn = n;	참조자 선언
	- 이때 & 연산자는 주소가 아닌 타입을 식별하기 위해 사용하는 식별자
	- **주의사항**
		1) 참조자의 타입은 대상이 되는 변수의 타입과 동일해야 한다
		2) 선언과 동시에 초기화가 되야 한다
		3) 한 번 초기화되면, 대상 변경이 불가능하다
- 함수의 인수로서 전달이 가능하다
	- 함수가 참조자를 인수로 전달받으면, 참조자가 참조하고 있는 실제 변수의 값을 함수 내에서 조작이 가능
	- 참조에 의한 전달은 참조자뿐만 아니라 포인터를 사용해도 똑같은 결과를 얻을 수 있다
	- 포인터와 참조자를 사용하는 방법은 모두 같으며, 구문 형태상의 차이만 존재
- 함수의 인수로 참조자를 사용하는 방법의 특징
	1) 함수 내에서 참조 연산자(*)를 사용하지 않으므로, 함수 내부의 코드가 깔끔하고 직관적
	2) 값에 의한 전달 방법과 같은 형태가 되어, 코드를 읽기 쉽지 않음
	3) 참조 호출이 꼭 필요할 때에는 참조자보다는 포인터를 사용하는 것이 더욱 직관적

### 구조체의 참조
- 구조체 참조 시 매개변수를 const(상수)로 선언
- const (상수)
	- 변수 앞에 붙으면 값을 변경하지 못하도록 막음
	- 해당 변수를 상수로 취급
	- 변수의 값을 변경시키지 않기 위해서 사용

### 과제
오버로딩
- 문자 넣으면 문자, 정수 넣으면 정수, 실수 넣으면 실수 라고 표시해주는 함수 생성


# 4일차

### inline
#define 과 비슷하게 작동
- inline 뒤쪽의 함수가 Ctrl+C , Ctrl+V 된다고 생각
- 함수를 불러오는 것이 아닌 바로 실행해서 함수 로딩 시간을 생략
- 주로 return만 하는 함수 등 간단한 함수에 사용

#### ※ C++에서의 함수 호출 과정
1. 스택에 함수로 전달달 매개변수와 함께 호출이 끝난 뒤 돌아갈 반환 주소값을 저장
2. 프로그램의 제어가 함수의 위치로 넘어와 함수 내에 선언된 지역 변수도 스택에 저장
3. 함수의 모든 코드를 실행
4. 실행이 전부 끝나고 반환값을 넘김
5. 프로그램의 제어는 스택에 저장된 돌아갈 반환 주소값으로 이동
6. 스택에 저장된 함수 호출 정보를 제거

####  Inline Function
```c++
inline const GetModel() {return Model;}
```
- 함수 호출 과정이 위처럼 복잡한 과정을 거쳐서 약간의 시간이 소요됨
- 함수를 실행하는 시간이 오래 걸린다면, 함수를 호출하는데 걸리는 시간은 전혀 문제가 없음
	- 실행시간 > 로딩시간
- 함수의 실행시간이 매우 짧다면, 함수 호출에 걸리는 시간도 부담이 될 수 있음
	- 실행시간 < 로딩시간
- 인라인 함수는 호출될 때 일반적인 함수의 호출 과정을 거치지 않음
- 함수의 모든 코드를 호출된 자리에 바로 삽입하는 방식의 함수
- 호출하는데 걸리는 시간은 줄어들지만 여러 이점을 포기하게 됨
- 따라서 매우 적은 함수만을 인라인 함수로 선언하는게 좋음
- 재귀 호출이 허용되지 않음

### Macro Function (Function-like Macro)
##### 매크로 함수 (함수 같은 매크로)
```c++
#define SQR(x) (x)*(x)
```

- define 선행 처리 지시문에 인수로 함수의 정의를 전달
- 함수처럼 동작하는 매크로
- 모든 인수를 괄호로 감싸야만 정상적으로 작동

#### inline 함수와 Macro 함수의 차이점
- Inline 함수는 단순 치환이 아닌 함수의 모든 코드를 호출된 자리에 인라인 코드로 삽입해 주는 것
- 일반 함수처럼 값이나 수식을 인수로 전달할 수 있음
- 매개변수 타임에 맞춘 자동 타입 변환도 지원

### Constructor 생성자

	- 클래스를 가지고 객체를 생성하면, 해당 객체는 메모리에 즉시 생성
	- 이 객체는 모든 멤버 변수를 초기화하지 않으면 사용 불가능
	- 객체의 멤버 변수는 사용자나 프로그램이 일반적인 초기화 방식으로 초기화가 불가능
		- private 멤버에 직접 접근이 불가능하기 때문
	- private 멤버에 접근할 수 있는 public 함수가 필요
	- 이러한 초기화 함수는 객체가 생성한 후 ~ 사용되기 전까지 반드시 멤버의 초기화를 위해서 호출해줘야 함
	- new 로 선언 시 생성자는 자동으로 호출이 됨

```c++
class Car {
	public: 
	Car() // 생성자 선언
}
```
- 객체의 생성과 동시에 멤버 변수를 초기화해주는 함수
- 클래스 생성자의 이름은 해당 클래스의 이름과 같아야 함
- 특징
	1) 생성자는 초기화를 위한 데이터를 인수로 전달받을 수 있다.
	2) 생성자는 반환값이 없지만, void형으로 선언하지 않는다.
	3) 객체를 초기화하는 방법이 여러개 존재할 경우에는 오버로딩 규칙에 따라 여러개의 생성자를 가질 수 있다.
- 종류
	1) 기본 생성자
		- 매개변수가 없는 생성자   

		```c++
		Car::Car() { // source
			cout << "기본 생성자 호출됨" << endl;
		}
		```

	2) 매개변수가 있는 생성자 _(변환 생성자(매개변수가 1개) / 일반 생성자(매개변수가 2개 이상))_
		- 매개변수가 있는 생성자
		```c++
		// InModel -> Model 에, InBrand -> Brand 에 자동으로 초기화
		Car::Car(string InModel, string InBrand) : Model(InModel), Brand(InBrand) 
		```
	3) 복사 생성자
		- 다른 객체로부터 값을 복사해서 새로운 객체를 초기화하는데 사용되는 생성자
		
		```c++
		Car::Car(const Car& other) {
			cout << "복사생성자 호출됨" << endl;
			Brand = other.Brand;
			Model = other.Model;
		}
		```

		1. 얕은 복사
			- 값을 복사하는 것이 아닌 **값을 가리키는 포인터**를 복사하는 것
			- 따라서 변수의 생성에서 대입 연산자를 이용한 값의 복사는 문제가 ㄷ안 된다.
			- 하지만, 객체에서는 문제가 발생할 수도 있다.
			- 특히 객체의 멤버가 메모리 공간의 힙 영역을 참조할 경우 _(동적할당)_ 문제가 발생한다.
		2. 깊은 복사
			- 복사 생성자를 재정의함으로써 원하는 멤버 변수만 복사를 해주는 방식
			- 얕은 복사를 진행하되, 포인터나 참조한 값은 새로 메모리를 할당
	
	4) 이동 생성자
		- 객체가 살아있지만 안 쓴다고 보장할 수 없는 상황일 때 사용
		- 이동 생성자를 만들지 않으면 복사 생성자를 통해 생성하게 됨
		- 값을 복사하기 위해 메모리 재할당을 하지 않고 참조값을 사용해 소유권을 넘김
		- 복사 생성자보다 빠름
		```c++
		Car* car4 = new Car(move(*car3)); //new 선언 
		//move 는 lvalue -> rvalue 변환시켜서 반환(이동이 아님)
		
		//...

		Car::Car(Car&& other) {
		cout << "이동 생성자 호출됨" << endl;
		Model = move(other.Model);
		Brand = move(other.Brand);
		}
		```
	5) 이동 대입 연산자 ( 이동 생성자와 같은 개념)
		- 이동 생성자와 같은 개념
		- 다른 개체 멤버 변수들의 소유권을 가져옴
		- 메모리 재할당 안함
		- 얕은 복사

### 소멸자
객체 내에서 동적할당 한 경우, delete 하는 역할
```c++
~Car();
```


#### lvalue & rvalue : 좌측값, 우측값
> int a = 3
- a처럼 주소값을 취할 수 있는 값을 좌측값(lvalue)라고 부른다.
- '3' 처럼 주소값을 취할 수 없는 값을 우측값(rvalue)라고 부른다.
- 좌측값을 왼쪽 오른쪽 구분 없이 존재가 가능
- 우측값은 항상 오른쪽에 위치해야 한다.   

- lvalue : 일반적인 변수
- rvalue : 일시적인 값   

- & : lvalue 참조 연산자
- && : rvalue 참조 연산자

ex)
```c++
int num = 10;
int&& rnum1 = num; // num은 lavlue -> 불가능
int&& rnum2 = 34; // 34는 rvalue -> 0
float&& rflo = CalAvg(); // 일반적인 값을 리턴하는 함수의 값 =  rvalue -> 0
```

# 02.15
### casting
### static
### interface

# 02.16

### 게임 프로그래밍 패턴 책
읽어보면 좋다

### Singleton
- 전역 변수 사용을 최소화하고 객체를 하나만 생성해서 공용으로 사용하기 위한 디자인 패턴
- 애플리케이션에서 객체를 여러 번 생성하는 것을 방지하기 위해 사용
- 시스템에서 하나의 객체만 필요한 경우 사용
- ex) GameManager, LogManager 등 애플리케이션 전체에서 공통으로 사용하는 객체를 생성할 때
- 생성자는 private로 선언해서 외부에서 생성하지 못하도록 제한
- 정적 함수를 만들어서 외부에서 유일한 객체에 접근할 수 있도록 함

- 되도록 사용을 안하는게 좋은 이유
	1) 의존성
	- 싱글톤 객체가 다른 클래스에서 사용되는 경우, 해당 클래스는 싱글톤 클래스에 의존성을 갖게 되어 결합도가 높아진다
	2) 상태공유
	- 싱글톤 객체는 전역 상태를 유지하므로, 여러 모듈에서 해당 객체를 사용하게 되면 상태를 공유하게 된다
	- 예상치 못한 문제가 발생할 수 있다
	3) 멀티스레드 환경
	- 싱글톤 객체를 여러 스레드에서 동시에 접근하면 데이터 불일치 문제가 발생할 수 있다
	- 이 문제를 해결하기 위해서는 동기화 처리를 해야하는데, 성능 문제를 불러올 수 있으므로 주의가 필요하다


# 02.17 총정리

## 미리 컴파일된 헤더

## 절대경로, 상대경로

## 객체 지향 프로그래밍
- 명령어의 집합이 아닌 하나의 객체로 바라봄

1. 추상화  
2. 캡슐화  
3. 정보은닉  
4. 상속성  
5. 다형성

## InputOutput
std::cin & std::cout

## namespace 
(머릿말, 이름의 성씨와 비슷한 개념)

## string
```cpp
#include <string>
```
string 은 class다

`str[0]`과 같은 형식으로 접근 가능

`str.append("string")` 맨 끝에 문자열 추가

`str.find("string")` 문자 찾기

`str1.compare(str2)` 문자열 비교

`str1.replace()` 문자열 교체 (find와 같이 사용 가능)

## class
변수와 함수의 집합체
- 기본 접근 지정자 private
- 클래스 내 변수 = 멤버 변수

class 는 개념
instance 는 구체적 실체

## new / delete
`new 자료형` 을 `pointer 자료형` 으로 가리킴
`delete`하지 않으면 메모리 누수
`new[]`은 `delete[]`로 해야함

## Function
### Overloading
같은 이름의 함수로 인자를 다르게 받아서 각자의 기능을 사용
### Default argument < 복습 요

### 레퍼런스
포인터와 유사한 역할
직접 값을 바꿀 때는 레퍼런스보다 포인터로 직접 명시적으로 표현해주면 안전하게 관리 가능

### 구조체의 참조
주로 다룬 내용 - 안전하게 사용하기 위해 const 사용

### 매크로 함수 & inline 함수
- 매크로함수
	- define에 함수를 정의함 (각각의 인자를 모두 ()로 감싸줘야 함)
- inline함수
	- 함수 로딩시간이 실행시간보다 길 경우(실행시간이 매우 짧은 간단한 함수일 경우) 효율성을 위해 inline으로 함수 선언 및 정의

## 생성자, 소멸자
```cpp
class Class() : member1(_member1), member2(_member2) {} // 생성자 초기화
```
- 기본생성자
- 매개변수 있는 생성자
- 복사 생성자
	- 깊은 복사와 얕은 복사
- 이동 생성자
	- 이동했다고 해서 기존 클래스가 사라지는 건 아니고 값만 사라지고 주소값, 메모리만 차지하고 있음
- 이동 대입 연산자 (연산자 재정의)
- 소멸자

### lvalue, rvalue
lvalue : 주소값을 가지고 있는 값들
rvalue : 일시적인 값, 주소값을 가지고 있지 않음

## const
상수로 지정하여 수정을 못하도록 함

- `const int* ~ ` 참조 연산자로 값을 바꾸지 못함 ( 주소값 변경 가능 )
- `int* const` 참조 연산자로 값을 바꿀 수 있음 ( 주소값 변경 불가 )
- `const int* const` 주소값도, 값도 바꿀 수 없음

## 상속 Inheritance
- 부모클래스와 자식클래스 존재
- 부모 클래스 내부 함수를 virtual 선언하면 가상 함수가 됨, 자식 클래스에서 함수 오버라이딩 가능
- 접근 지정자 설정 가능
	- public
	- protected
	- private
---
- 순수 가상 함수 : 뒤쪽에 0을 선언해주면서 아무것도 없다고 선언함
- 자식 클래스에서 재정의 필수 ( 재정의를 강제 가능 )
- 추상 클래스 : 순수 가상 함수를 최소 1개 이상 갖고 있는 클래스
---
- 가상 함수 : 런타임 시점		가상 함수 X : 컴파일 시점
- 가상 함수 테이블 알아보면 좋음

## 캐스팅
- 자식 -> 부모 : 업캐스팅
- 부모 -> 자식 : 다운캐스팅
	-ChildClass* RealChildClass = dynamic_cast<ChildClass*>(ChildClass);
---
- 하위 클래스들을 변수로 넣어줄 수 있다
---
- const cast
	- 포인터를 위해 만들어졌다고 봄
---
- Type casting
	- reinterpret cast -> 자료형을 바꿔버림

## 인터페이스
순수 가상 함수로 이루어진 클래스

## static
모든 클래스가 공유하는 멤버 변수 또는 함수
팀이 공통적으로 사용할 자원 등을 지정하면 편함

함수의 경우 객체를 지정하지 않아도 사용 가능

## Singleton Pattern
시스템 상의 기능 등 객체 하나만 관리해도 되는 경우 사용하는 패턴
(예를 들어 키보드라던가 마우스 등의 입력 등 ?)