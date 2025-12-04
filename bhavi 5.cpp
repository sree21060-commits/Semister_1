#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%.1f%1f,&first,&second");
	switch (op){
		case'+':
			printf("%.1if+%.1if=%.1if",first,second,first+second);
			break;
		case'-':
			printf("%.1if-%.1if=%.1if",first,second,first-second);
			break;
	    case'*':
	    	printf("%.1if*%,1if=%.1if",first,second,first*second);
	    	break;
	    case'/':
	    	printf("%.1if/%.1if=%.1if",first,second,first/second);
	    	break;
	    	//operator doesn't match any case constant
	    	default:
	    		printf("error!operator is not correct");
	     	}
	     	return 0;
	        }

