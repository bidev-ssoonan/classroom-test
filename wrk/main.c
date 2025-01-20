#include <stdio.h>

// print_alphabet 함수: a부터 z까지의 문자를 출력
void print_alphabet()
{
  static char letter = 'a'; // 정적 변수로 문자 상태 유지

  // 출력 형식에 맞게 문자열 출력
  printf("[         work.c:                print_alphabet] %c\n", letter);

  // 문자 증가 및 'z'를 넘으면 'a'로 초기화
  letter++;
  if (letter > 'z')
  {
    letter = 'a';
  }
}

// print_numbers 함수: 1부터 20까지의 숫자를 출력
void print_numbers()
{
  static int num = 1; // 정적 변수로 숫자 상태 유지

  // 출력 형식에 맞게 문자열 출력
  printf("[         work.c:                 print_numbers] %d\n", num);

  // 숫자 증가 및 20을 넘으면 1로 초기화
  num++;
  if (num > 20)
  {
    num = 1;
  }
}

int main()
{
  // 무한 루프 시작
  while (1)
  {
    print_alphabet(); // 알파벳 출력
    print_numbers();  // 숫자 출력
  }

  return 0; // 실제로는 도달하지 않음
}
