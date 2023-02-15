#include "stdafx.h"
#include "0215_MyString.h"

void MyString() {
  String Str1('c', 5);
  String Str2 = "Hello";
  String Str3 = Str1;

  cout << "Str1 : ";
  Str1.print_string();
  cout << "Str2 : ";
  Str2.print_string();
  cout << "Str3 : ";
  Str3.print_string();

  Str1.add_string(Str2);
  Str2.copy_string(Str3);
  cout << "Str1 : ";
  Str1.print_string();
  cout << "Str2 : ";
  Str2.print_string();
}

String::String(char c, unsigned int n) { 
  length = n;
  if (n) {
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
      str[i] = c;
    }
    str[length] = (char)NULL;
  } else {
    cout << "오류" << endl;
    str = NULL;
    length = 0;
    return;
  }
}

String::String(const char* s) {
  if (s != NULL) {
    length = std::strlen(s);
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
      str[i] = s[i];
    }
    str[length] = (char)NULL;
  } else {
    cout << "오류" << endl;
    str = NULL;
    length = 0;
  }
}

String::String(const String& s) {
  if (s.str != NULL) {
    length = s.length;
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
      str[i] = s.str[i];
    }
    str[length] = (char)NULL;
  } else {
    cout << "오류" << endl;
    str = NULL;
    length = 0;
  }
}


String::~String() {
  if (str != NULL) delete[] str;
}

void String::add_string(const String& s) {
  int prev_length = length;
  length = prev_length + s.length;
  if (length > 0 && s.length > 0) {
    char* temp = new char[prev_length + 1];
    for (int i = 0; i < prev_length; i++) {
      temp[i] = str[i];
    }
    delete[] str;
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
      if (i < prev_length) {
        str[i] = temp[i];
      } else {
        str[i] = s.str[i - prev_length];
      }
    }
    str[length] = (char)NULL;
    delete[] temp;
  }
}
void String::copy_string(const String& s) {
  if (s.str != NULL) {
    delete str;
    length = s.length;
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
      str[i] = s.str[i];
    }
    str[length] = (char)NULL;
  } else {
    return;
  }
}

const void String::print_string() { cout << str << endl; }

const int String::strlen() { return length; }

