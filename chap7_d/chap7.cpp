#include <stdio.h>
#include <ctype.h>

/*
 * 1 - 2 
 * 1부터 100까지의 짝수의 곱을 구하는 프로그램을 작성하라
*/

/*
int main()
{
	double buf = 1,result =1; ;
	
	int x = 1;

	puts("1 ~ 100 까지의 짝수의 곱을 구하는 프로그램.");
	
	for(x=1; x<100; x++){
		
		// %2 : 짝수의 정의 어떠한 수를 2로 나누었을때 그 나머지가 0 인 경우 짝수.
		if(x % 2 == 0){
			buf = result;
			result = buf * x;
			printf("%d * %.1f = %.1f\n",x,buf,x*buf);
		}
	}

	printf("1~100까지의 곱 : %.1f \n",buf);
	return 0;
}
*/

/*
 * 2 - 3
 * 1부터 100까지 3씩 건너뀌면서 정수의 값을 출력하는 프로그램을 다음의 3가지 반복구조를 사용하여 작성하라
 * (a) whiile
 * (b) for
 * (c) do..while
*/

/*
void sum_for();
void sum_while();
void sum_do_while();

int main()
{	
	char type = 0;

	puts("확인하고자 하는 타입의 반복문을 입력\na : while b : for c : do..while");
	scanf("%c",&type);
	fflush(stdin);

	if(isalpha(type)){
		switch(type){
			case 'a': 
				sum_while();
			break;
			case 'b': 
				sum_for();
			break;
			case 'c': 
				sum_do_while();
			break;

		default:
			puts("a,b,c외에 잘못된 문자를 입력하였습니다.");
		break;
	}
} else {
		puts("문자를 입력하시오");
	}	

	return 0;
}

void sum_for()
{
	int int_num = 0,buf = 0; 


	for(int_num = 0; int_num < 100; int_num+=3)
	{
		buf += int_num;
		printf("buf : %d int_num : %d \n",buf,int_num);
	}

	printf("결과 : %d\n", buf);

	return;
}

void sum_while()
{
	int int_num = 0,buf = 0; 
	
	while(int_num < 100){
		buf += int_num;
		int_num  += 3;
		printf("buf : %d int_num : %d \n",buf,int_num);
	}

	printf("결과 : %d\n", buf);

	return;
}
void sum_do_while()
{
	int int_num = 0,buf = 0; 

	do{
		buf += int_num;
		int_num  += 3;
		printf("buf : %d int_num : %d \n",buf,int_num);
	} while(int_num < 100);

	printf("결과 : %d\n", buf);

	return;
}
*/

/*
 * 3 -4
 * 사용자가 입력한 특정한 정수의 자리를 반대로 바꾸어 출력하는 프로그램을 작성하라 
 * 예들어서 사용자가 정수 1206을 입력하였다면 6021이 출려되어야 한다.
 * 만양 음수를 입력하면 오류 메시지를 출력하라.
 * do...while 문을 사용하여 보라
 * (힌트) 1의 자리수는 n % 10으로 구할 수 있다. 10의 자리수는 먼저 n을 10으로 나눈 후에 n % 10 하면된다.
 * 100의 자리수는 n을 100으로 나눈 후에 n % 10하면 된다.
 * 한번 반복할때마다 하나의 자리수가 구해지도록 하라
 * 
 * 정수를 입력하시오 : 1206
 * 6201
 * */

#define DIGIT4 4

void separate_int(int target);
int power10(int num);

int main()
{
	int number_int = 0;

	puts("하나의 정수를 입력하시오");
	scanf("%d",&number_int);
	fflush(stdin);

	if(number_int < 0){
		puts("음수는 입력 불가.");
	} else{
		separate_int(number_int);
	}

	return 0;
}

void separate_int(int target)
{
	int separate_val = 0;
	int digiarr[DIGIT4] ={0,};
	int buf10 = 0, buf100 = 0, buf1000 = 0;


	do{
		switch(separate_val){
			case 0: 
				digiarr[separate_val]=target % 10;
			break;
			case 1: 
				buf10 = target / power10(1);
				digiarr[separate_val] = buf10 % 10;
			break;
			case 2: 
				buf100 = target / 100;
				digiarr[separate_val] = buf100 % 10;
			break;
			case 3: 
				buf1000 = target /1000;
				digiarr[separate_val] = buf1000 % 10;
			break;
		}
		separate_val++;
	}while(separate_val < DIGIT4);
	
	for(int i=0; i<DIGIT4; i++)
	{
		printf("%d",digiarr[i]);	
	}
	puts("");

	return ;
}

int power10(int num){
	if(num == 0)
		return 1;
	return 10*power10(num-1);
}


/*
 * 3 - 5
 * 프로그램에서 미리 결덩된 정답을 사용자가 알아맞히는 게임을 설계하고 작성하여 보라 사용자가 하나의 수를 추측하면 프로그램은 
 * 그 수가 정답보다 높은지 낮은지만 알려준다.
 * 정답은 1 ~ 100 사이의 수라고 가정한다 사용자가 정답을 맞힐 때 까지 프로그램은 반복하여 숫자를 입력하라는 메시지를 내보낸다.
 * 사용자가 음수를 입력하면 반복이 중단되도록 하라
*/

/*
 * 4 - 6
 * 반복루프를 사용하여 다음과 같은 패턴을 출력하는 프로글램을 작성하라
 *
 * 1.
 ******
 ******
 ******
 ******
 ******
 ******
 ******
 * 2.
 *
 **
 ***
 ****
 *****
 ******
 *******
 ********
 * 3.
 ******
 ****
 **
 *
 ------
 사용자애개 폭과 높이를 입력받는다.
 1. 
 ******
 *    *
 *    *
 *    *
 *    *
 ******    
 2. 
    ****
   ******
  ********
 **********
*/

/*
 * 5 - 7
 * 자동차의 연비를 반복적으로 계산해주는 프로그램을 작성하여 보자.
 * 먼저 사용자에게 주입한 연료의 양과 주행 거리를 입력받는다.
 * 주행 거리를 연료의 양으로 나누어서 1L의 연료로 주행할수 있는 거리를 계산한다.
 * 반복문을 사용하여 하나의 계산이 끝나면사용자에게 계산을 다시 하것인지를 물어본다.
 *
 * 연료의 양을 입력하시오(L) : 10
 * 주행한 거리를 입력하시오 (km) : 100
 * 연비는 10km/l입니다.
 *
 * 다시계산하겠습니까?(y/n) : n
*/

/*
 * 6 - 9
 * 앞장에서 간단한 정수 계산기를 만들어본 적이 있다.
 * 이 계산기 프로그램에 메뉴를 추가하도록 한다.
 * 다음과 같은 메뉴를 화면에 출력하고 사용자가 메뉴 중에서 하나를 선택할 때까지 반복을 계속한다.
 * do...while 반복문을 사용하여 사용자가 적절한 선택을 했는지를검사하도록 하라.
 * 만약 사용자가 A,S,M,D,Q가 아닌 다른 문자를 입력하면 "연산을 선택하시오" 라는 메시지를 계속해서 출력한다.
 * 문자는 getchar() 함수를 이용하여 입력받도록 하라.
 * 하나의 메뉴가 선택되면 해당되는 연산을 실행하고 다시 메뉴를 선택할 수 있도록 하락.
 * 반복을 종료하는 메뉴인 Q는 break문을 이용하여 구현하도록 하라.
 * 
 */

/*
 * 7 - 11
 * 컴퓨터는 막대 그래프를 그리는데도 사용된다.
 * 사용자로부터 1부터 50사이의 숫자 10개를 입력받아서 숫자만큼의 볍표를 출력하는 프로그램을 작성하라.
 * 막대는 가로로 그려지게 된다.
 *
 * 막대 #1의 높이 : 5
 * *****
 * 막대 #2의 높이 : 10 
 * *****
 * .....
 * 
 * 막대 #10의 높이 : 20
 * ***************
 *
*/

/*
 * 8 - 12
 * 상품의 할인 액수를 계산하여 표로 만드는 프로긂을 작성하여 보자
 * 할인율이 30% 50% 70%인 경우에 상품의 할인가격을 표로 만든다.
 * 상품의 가격은 10,000 ~ 50,000 까지 오천원 다누이로 증가한다고 가정하라
 * 
 * 상품의 가격		30%		50%		70%
 * 10000 			7000 	5000    3000
 * 15000            10500   7500    4500
 * 20000 			14000   10000   7000
 * ...
 * */

/*
 * 9 - 15
 * 아스키 코드표를 화면에 출력하여 보자.
 * 32에서 127 까지의 값들을 10진수, 16진수, 문자형태로 화면에 출력한다.
 * -----------------------------------
 *  10진수		16진수		문자
 *  32  		20 			
 *  33          21          !
 *  34          22          "
 *  ...
 * */

/*
 * 10 - 22
 * 구구단표를 화면에 출력하는 프로그램을 작성하여 보자
 * 2단부터 시작하여 9단까지를 당ㅁ과 같은 형식으로 출력한다. 
 * 중첩된 반복문을 사용하라
 *
 * 2*1 = 2 
 * 2*2 = 4
 * 2*3 = 6
 * ...
 * 9*8 = 72
 * 9*9 = 81
 * */
