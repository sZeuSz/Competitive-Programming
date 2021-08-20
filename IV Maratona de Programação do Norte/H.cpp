// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 1, b = 1;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);

	printf("a&b = %d\n", a & b);

  printf("b&a = %d\n", b & a);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

  printf("b|a = %d\n", b | a);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);
  printf("b^a = %d\n", b ^ a);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);
  printf("~b = %d\n", b = ~b);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);
  printf("a<<1 = %d\n", a << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);
  printf("a>>1 = %d\n", a >> 1);

  a = 2, b = 3;
  // The result is 00000001
	printf("a = %d, b = %d\n", a, b);

	printf("a&b = %d\n", a & b);

  printf("b&a = %d\n", b & a);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

  printf("b|a = %d\n", b | a);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);
  printf("b^a = %d\n", b ^ a);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);
  printf("~b = %d\n", b = ~b);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);
  printf("a<<1 = %d\n", a << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);
  printf("a>>1 = %d\n", a >> 1);

  a = 3, b = 5;

  printf("a = %d, b = %d\n", a, b);

	printf("a&b = %d\n", a & b);

  printf("b&a = %d\n", b & a);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

  printf("b|a = %d\n", b | a);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);
  printf("b^a = %d\n", b ^ a);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);
  printf("~b = %d\n", b = ~b);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);
  printf("a<<1 = %d\n", a << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);
  printf("a>>1 = %d\n", a >> 1);

	return 0;
}
