#include "BigInteger.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  struct BigInteger num0 = initialize("170");
  struct BigInteger num01 = initialize("13");

  struct BigInteger sum0 = add(num0, num01);
  struct BigInteger diff0 = sub(num0, num01);
  struct BigInteger mul0 = mul(num0, num01);
  struct BigInteger div0 = div1(num0, num01);
  struct BigInteger mod0 = mod(num0, num01);

  printf("Case 0:\n");
  printf("First number: ");
  display(num0);
  printf("\n");
  printf("Second number: ");
  display(num01);
  printf("\n");
  printf("Addition: ");
  display(sum0);
  printf("\n");
  printf("Subtraction: ");
  display(diff0);
  printf("\n");
  printf("Multiplication: ");
  display(mul0);
  printf("\n");
  printf("Division: ");
  display(div0);
  printf("\n");
  printf("Modulus: ");
  display(mod0);
  printf("\n\n");
  struct BigInteger num1 = initialize("1234");
  struct BigInteger num2 = initialize("-5678");

  struct BigInteger sum1 = add(num1, num2);
  struct BigInteger diff1 = sub(num1, num2);
  struct BigInteger mul1 = mul(num1, num2);
  struct BigInteger div11 = div1(num1, num2);
  struct BigInteger mod1 = mod(num1, num2);

  printf("Case 1:\n");
  printf("First number: ");
  display(num1);
  printf("\n");
  printf("Second number: ");
  display(num2);
  printf("\n");
  printf("Addition: ");
  display(sum1);
  printf("\n");
  printf("Subtraction: ");
  display(diff1);
  printf("\n");
  printf("Multiplication: ");
  display(mul1);
  printf("\n");
  printf("Division: ");
  display(div11);
  printf("\n");
  printf("Modulus: ");
  display(mod1);
  printf("\n\n");

  struct BigInteger num3 = initialize("1234");
  struct BigInteger num4 = initialize("-5678");

  struct BigInteger sum2 = add(num3, num4);
  struct BigInteger diff2 = sub(num3, num4);
  struct BigInteger mul2 = mul(num3, num4);
  struct BigInteger div2 = div1(num3, num4);
  struct BigInteger mod2 = mod(num3, num4);

  printf("Case 2:\n");
  printf("First number: ");
  display(num3);
  printf("\n");
  printf("Second number: ");
  display(num4);
  printf("\n");
  printf("Addition: ");
  display(sum2);
  printf("\n");
  printf("Subtraction: ");
  display(diff2);
  printf("\n");
  printf("Multiplication: ");
  display(mul2);
  printf("\n");
  printf("Division: ");
  display(div2);
  printf("\n");
  printf("Modulus: ");
  display(mod2);
  printf("\n\n");

  struct BigInteger num5 = initialize("-1234");
  struct BigInteger num6 = initialize("-5678");

  struct BigInteger sum3 = add(num5, num6);
  struct BigInteger diff3 = sub(num5, num6);
  struct BigInteger mul3 = mul(num5, num6);
  struct BigInteger div3 = div1(num5, num6);
  struct BigInteger mod3 = mod(num5, num6);

  printf("Case 3:\n");
  printf("First number: ");
  display(num5);
  printf("\n");
  printf("Second number: ");
  display(num6);
  printf("\n");
  printf("Addition: ");
  display(sum3);
  printf("\n");
  printf("Subtraction: ");
  display(diff3);
  printf("\n");
  printf("Multiplication: ");
  display(mul3);
  printf("\n");
  printf("Division: ");
  display(div3);
  printf("\n");
  printf("Modulus: ");
  display(mod3);
  printf("\n\n");

  struct BigInteger num7 = initialize("5678");
  struct BigInteger num8 = initialize("123456");

  struct BigInteger sum4 = add(num7, num8);
  struct BigInteger diff4 = sub(num7, num8);
  struct BigInteger mul4 = mul(num7, num8);
  struct BigInteger div4 = div1(num7, num8);
  struct BigInteger mod4 = mod(num7, num8);

  printf("Case 4:\n");
  printf("First number: ");
  display(num7);
  printf("\n");
  printf("Second number: ");
  display(num8);
  printf("\n");
  printf("Addition: ");
  display(sum4);
  printf("\n");
  printf("Subtraction: ");
  display(diff4);
  printf("\n");
  printf("Multiplication: ");
  display(mul4);
  printf("\n");
  printf("Division: ");
  display(div4);
  printf("\n");
  printf("Modulus: ");
  display(mod4);
  printf("\n\n");

  struct BigInteger num9 = initialize("123456");
  struct BigInteger num10 = initialize("5678");

  struct BigInteger sum5 = add(num9, num10);
  struct BigInteger diff5 = sub(num9, num10);
  struct BigInteger mul5 = mul(num9, num10);
  struct BigInteger div5 = div1(num9, num10);
  struct BigInteger mod5 = mod(num9, num10);

  printf("Case 5:\n");
  printf("First number: ");
  display(num9);
  printf("\n");
  printf("Second number: ");
  display(num10);
  printf("\n");
  printf("Addition: ");
  display(sum5);
  printf("\n");
  printf("Subtraction: ");
  display(diff5);
  printf("\n");
  printf("Multiplication: ");
  display(mul5);
  printf("\n");
  printf("Division: ");
  display(div5);
  printf("\n");
  printf("Modulus: ");
  display(mod5);
  printf("\n\n");

  struct BigInteger num11 = initialize("2982763498726985692852592635928698263");
  struct BigInteger num12 = initialize("-374059485761984659816495861984359");

  struct BigInteger sum6 = add(num11, num12);
  struct BigInteger diff6 = sub(num11, num12);
  struct BigInteger mul6 = mul(num11, num12);
  struct BigInteger div6 = div1(num11, num12);
  struct BigInteger mod6 = mod(num11, num12);

  printf("Case 6:\n");
  printf("First number: ");
  display(num11);
  printf("\n");
  printf("Second number: ");
  display(num12);
  printf("\n");
  printf("Addition: ");
  display(sum6);
  printf("\n");
  printf("Subtraction: ");
  display(diff6);
  printf("\n");
  printf("Multiplication: ");
  display(mul6);
  printf("\n");
  printf("Division: ");
  display(div6);
  printf("\n");
  printf("Modulus: ");
  display(mod6);
  printf("\n\n");

  return 0;
}
