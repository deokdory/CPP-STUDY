#include "08_Inheritance.h"
#include "stdafx.h"

void Inheritance() {
  {
      /*Parent* p = new Parent;
      p->print();
      ENDL;

      Child1* a = new Child1;
      a->print();
      ENDL;

      Child2* b = new Child2;
      ENDL;

      Child3* c = new Child3;
      ENDL;

      delete p;
      ENDL;

      delete a;
      ENDL;

      delete b;
      ENDL;

      delete c;
      ENDL;*/
  }

  {
    // PureParent* p = new PureParent;
    PureChild* c = new PureChild;
    c->func();
    delete c;
  }
}

PureParent::PureParent() { cout << "Pure P Constructor called" << endl; }

PureParent::~PureParent() { cout << "Pure P Destructor called" << endl; }

PureChild::PureChild() { cout << "Pure C Constructor called" << endl; }

PureChild::~PureChild() { cout << "Pure C Destructor called" << endl; }

void PureChild::func() { cout << "Pure C func Called" << endl; }

#pragma region S.O.L.I.D
/*
1. Single Responsiblilty Principle (SRP, 단일 책임 원칙)
2. Open-Closed Principle (OCP, 개방-폐쇄 원칙)

3. Liskov Substitution Principle (LSP, 리스코프 치환 원칙)
- 기반 클래스를 상속받은 파생 클래스는 기반 클래스의 객체와 동일하게 동작해야
한다
- ex) 기반 클래스인 Shape 클래스가 있고, 이를 상속받은 Circle 클래스가 있다
          Shape 클래스에서 구현한 메소드를 Circle 클래스에서 적절하게
오버라이딩하여, Shape 클래스의 객체와 마찬가지로 Circle 클래스의 객체도 동일하게
동작해야 한다

4. Interface Segregation Principle (ISP, 인터페이스 분리 원칙)
5. Dependency Inversion Principle (DIP, 의존성 역전 원칙)
*/
#pragma endregion

#pragma region Inheritance
/*
Inheritance : 상속
- 추상화, 캡슐화와 더불어 객체 지향 프로그래밍을 구성하는 중요한 특징 중 하나
- 상속은 사용자에게 높은 수준의 코드 재활용성을 제공
- 클래스 간의 계층적 관계를 구성함으로써 다형성의 문법적 토대를 마련

클래스간의 상속
- 기존의 정의되어 있는 클래스의 모든 멤버 변수와 멤버 함수를 물려받아, 새로운
클래스를 작성하는 것
- 기존에 정의해둔 클래스를 기초 클래스(base class) 또는 부모 클래스(parent
class), 상위 클래스(super class) 라고도 함
- 상속을 통해 새롭게 작성되는 클래스를 파생 클래스(derived class) 또는 자식
클래스(child class), 하위 클래스(sub class)라고도 함
- 장점
        1) 기존에 작성된 클래스를 재활용할 수 있음
        2) 공통적인 부분은 클래스에 미리 작성하여, 파생 클래스에서 중복되는
부분을 제거할 수 있음

자식 클래스
- 기초 클래스의 모든 특성을 물려받아 새롭게 작성된 클래스
- 접근 제어 지시자는 기초 클래스의 멤버를 사용할 수 있는 파생 클래스의 접근 제어
권한을 설정
- 기본적인 접근 제어 권한은 private로 되어있음
- 쉼표를 사용하여 상속받을 기초 클래스를 여러 개 명시할 수 있다
        - 이때 파생 클래스가 상속받는 부모 클래스가 하나면 단일 상속 (single
inheritance)
        - 여러 개의 기초 클래스를 상속받으면 다중 상속 (multiple inheritance)
- 특징
        1) 반드시 자신만의 생성자를 작성해야 함
        2) 기초 클래스의 접근할 수 있는 모든 멤버 변수들이 저장됨
        3) 파생 클래스는 기초 클래스의 접근할 수 있는 모든 멤버 함수를 사용할 수
있음 4) 파생 클래스에는 필요한 만큼 멤버를 추가할 수 있음
*/
#pragma endregion

#pragma region Overriding
/*
Overriding : 오버라이딩
- 이미 정의된 함수를 무시하고, 같은 이름의 함수를 새롭게 정의

멤버 함수 오버라이딩
- 자식 클래스는 상속을 받을 때 명시한 접근 제어 권한에 맞는 기초 클래스의 모든
멤버를 상속받음
- 상속받은 멤버는 그대로 사용해도 되고, 필요한 동작을 위해서 재정의하여 사용할
수도 있음
- 멤버 함수의 동작만을 재정의하는 것이므로, 함수의 원형은 기존 멤버 함수의
원형과 같아야 함
- 방법
        1) 자식 클래스에서 직접 오버라이딩 하는 방법
        2) 가상 함수를 이용해 오버라이딩 하는 방법
*/
#pragma endregion

#pragma region Virtual
/*
Virtual function : 가상 함수
- 자식 클래스에서 재정의할 것으로 '기대하는' 멤버 함수
- 가상 함수는 자신을 호출하는 객체의 동적 타입에 따라 실제 호출할 함수 범위가
결정
- 부모 클래스에서 virtual 키워드를 사용해 가상 함수를 선언하면, 파생 클래스에서
재정의된 멤버 함수도 자동으로 가상 함수가 됨

Override : 오버라이드 (재정의)
- 기존의 가상 함수를 재정의할 때 사용
- 자식 클래스에서 구현할 가상 함수를 정의하는 것
- 기존 가상 함수의 기능을 확장하거나 변경할 수 있다
- 정확성과 유지 보수성을 향상시킴

virtual 소멸자 (권장)
- 부모 클래스에 소멸자가 virtual이지 않을 경우, 자식 클래스의 객체가 소멸될 때
부모 클래스의 소멸자가 호출되지 않음 즉, 자식 클래스에서 추가한 메모리나 자원이
제대로 해제되지 않을 수 있다
- 근데, c++의 소멸자 자동 호출 매커니즘 때문에 virtual을 안달아도 호출됨
- 하지만, 부모 클래스의 소멸자를 virtual로 선언하면, 자식 클래스에서 추가한
메모리나 자원이 제대로 해제될 수 있도록 할 수 있음

Pure virtual function : 순수 가상 함수
- '반드시' 재정의해야 하는 함수
- 일반적으로 함수의 동작을 정의하는 본체를 가지고 있지 않다
- 파생 클래스에서 재정의하지 않으면 사용할 수 없다

Abstract class : 추상 클래스
- 하나 이상의 순수 가상 함수를 포함하는 클래스를 추상 클래스라고 함
- 다형성을 가진 함수의 집합을 정의할 수 있게 해줌
- 반드시 사용되어야 하는 멤버 함수를 추상 클래스에 순수 가상 함수로 선언해
놓으면, 이 클래스로부터 파생된 모든 클래스에서는 이 가상 함수를 반드시 재정의
해야 함
- 추상 클래스는 동작이 정의되지 않은 순수 가상 함수를 포함하고 있으므로
인스턴스를 생성할 수 없다
- 추상 클래스는 먼저 상속을 통해 자식 클래스를 만들고, 만든 자식 클래스에서 순수
가상 함수를 모두 오버라이딩하고 나서야 자식 클래스의 인스턴스를 생성할 수 있게
됨
- 하지만 추상 클래스의 포인터와 참조는 바로 사용할 수 있다
- 다음과 같은 용도로는 사용이 불가능하다
        1) 변수 또는 멤버 변수
        2) 함수의 전달되는 인수 타입
        3) 함수의 반환 타입
        4) 명시적 타입 변환의 타입

virtual 소멸자 ( 권장사항 )
- 부모 클래스에 소멸자가 virtual이지 않을 경우, 자식 클래스의 객체가 소멸될 때
부모 클래스의 소멸자가 호출되지 않을 수 있음
- 즉, 자식 클래스에서 추가한 메모리나 자원이 제대로 해제되지 않을 수 있음

- 근데, C++의 소멸자 자동 호출 매커니즘 때문에 virtual을 안달아도 호출됨
- 부모 클래스의 소멸자를 virtual로 선언하면, 자식 클래스에서 추가한 메모리나
자원이 제대로 해제될 수 있도록 할 수 있음

virtual 있는 것과 없는 것의 차이
있는 것
- 가상 함수 테이블(virtual table, vtable)을 사용하여 런타임 시점에서 함수를 결정
- 클래스의 인스턴스가 실제로 어떤 타입으로 생성되었는지에 따라 호출되는 함수가
결정 (이를 동적 바인딩(dynamic binding)이라고 함)
- 파생 클래스에서 부모 클래스의 가상 함수를 오버라이드(재정의)할 수 있음

없는 것
- 컴파일 시점에 함수 호출 결정
  (이를 정적 바인딩(static binding)이라고 함)
- 파생 클래스에서 부모 클래스의 함수를 오버라이드할 수 있지만
  부모 클래스로 업캐스팅 시 오버라이드된 함수가 호출되는 것이 아니라 부모
클래스의 함수가 호출됨

*/
#pragma endregion
