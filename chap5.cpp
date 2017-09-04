#include <stdio.h>

/*
	1 - 10.
	다음과 같은 수식의 값을 계산하는 프로그램을 작성하라
	x는 실수라고 사정하고 사용자가 입력할 수 있도록 하라
	(a) 7x^3-6x^2+9ax^2+bx+c
	(b) 2x^2-6x+1/(x+1)
*/

void fomulaA(float x);
void fomulaB(float x);

int main() {
	float x = 0;
	char type = 0;

	puts("확인할 식의 타입을입력 ");
	puts("tyep A : 7 * x^3 - 6 * x^2 + 9 * a * x^2 + b * x + c");
	puts("tyep B : 2 * x^2 -6 * x + 1 / (x+1)");
	scanf("%c", &type);

	puts("실수 입력");
	scanf("%f",&x);

	switch (type)
	{
		case 'a':
			fomulaA(x);
			break;
		case 'b':
			fomulaB(x);
			break;
		default:
			break;
	}

}

void fomulaA(float x) {
	//7 * x*x*x - 6 * x*x + b*x + c;
	printf("타입 A : %.2f - %.2f + %.2fb + c \n", 7 * x*x*x,6 * x*x,x);

	return;
}

void fomulaB(float x) {
	//2 * x*x - 6 * x + 1 / (x + 1);
	printf("타입 B : %.2f \n", 2 * x*x - 6 * x + 1 / (x + 1));
		
	return;
}
/*	
	2 - 12.
	2년간의 이자를 계산하는 프로그램을 작성하여 보자
	사용자로부터 예금액, 연이율을 입력받아서 이자를 계산한다.
	이자는 복리로 계산된다고 가정하라.
	즉 첫해의 이자는 예금액에 이율을 곱하면 되지만 
	둘째해의 이자는 예금액과 첫해의 이자를 더한 액수에 이율을 곱하여야 한다.
*/

/*
	3 - 14.
	정수(i)를 다른 정수(m)의 배수로 올림하는 프로그램을 작성하라
	예를 들어서 123을 10의 배수로 올리하면 123보다 큰 10의 배수 중에서 가장 가까운 것은 130이될 것이다.
	이것은 다음과 같은 식을 이용하여 구할 수 있다.
	다음 배수 = i+m-(i%m)
	사용자로부터 i와 m의 값을 입력받아서 가장 가까운 다음 배수를 구하느 프로그램을 작성하여 보라.
	여러가지 값을 입력하여 테스트하여 보라
*/

/*
	4 - 15.
	구의 표면적과 궤적을 구하는 프로그램을 작성하라.
	구의 반지름은 실수로 입력된다.
	아래의 공식을 사용하라
	A = 4pr^2
	V = (4pr^2)/3
*/

/*
	5 - 19
	2차 방정식 ax^2+bx+c의 근을 구하는 프로그램을 작성하라.
	사용자로부터 정수 a,b,c의 값을 입력받고 제곱근은 sqrt()함수를 사용한다.
	다음과 같은 근의 공식을 이용하라 판별식인 b^2-4ac는 양수라고 가정하자.
	x = (-b+(b^2-4ac)^1/2)2a
	x = (-b-(b^2-4ac)^1/2)2a
*/

