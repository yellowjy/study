#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a,b,c,o1,o2;
int i,CorrectAnswer,answer,useranswser;
int number;//用户输入的题目的数目
float divideuseranswser,divideanswer;



main(){
	printf("\n\n");
	printf("       |--------------------四则运算初版-------------------|");
	printf("\n       |                                                   |");
	printf("\n       |          班级：16软工2班                          |");
	printf("\n       |          学号：201606120103                       |");
	printf("\n       |          姓名：黄佳芸                             |");
	printf("\n       |                                                   |");
	printf("\n       |---------------------------------------------------|");
	
	
	
	printf("\n\n\n请输入你想要获取的题目数量：");
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{
		o1 = rand() % 4+1;//随机产生第1个运算符
		switch(o1)
		{
		case 1:
			FistAdd();
			break;				
		case 2:
			FistSubtract();
			break;
		case 3:
			FistMultiply();
			break;
		case 4:
			FistDivide();
			break;	
		} 
	}
}


int FistAdd(){
	int a,b,c;
	a = rand() % 99+1;//随机数a
	b = rand() % 99+1;//随机数b
	c = rand() % 99+1;//随机数c
	
	o2 = rand() % 4+1;//随机产生第2个运算符
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n请计算\n");
		printf("%d + %d + %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a+b+c;
		if(useranswser==answer)
		{                   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%d\n",answer);					 
		}
		break;
		
		
	case 2://-				
		if((a+b)<c)
		{
			printf("\n请计算\n");
			printf("%d + %d - %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a+c-b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			} ;
		}
		else
		{
			printf("\n请计算\n");
			printf("%d + %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a+b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			}
		}
		break;
		
	case 3:
		printf("\n请计算\n");
		printf("%d + %d * %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a+b*c;
		if(useranswser==answer)
		{                    
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);				
		}
		else
		{
			printf("回答错误，正确答案是：%d\n",answer);
			
		}
		break;
	case 4:
		printf("\n请计算(小数点后保留两位有效小数)\n");
		printf("%d + %d  / %d= ",a,b,c);
		scanf("%lf",&divideuseranswser);
		divideanswer=(float)a+(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%0.2f\n",divideanswer);	 
		}
		break;
	}
}





int FistSubtract()
{
	int a,b,c;
	a = rand() % 99+1;//随机数a
	b = rand() % 99+1;//随机数b
	c = rand() % 99+1;//随机数c		
	o2 = rand() % 4+1;//随机产生第2个运算符
	switch(o2)
	{
	case 1://+
		if(a+c<b)
		{
			printf("\n请计算\n");
			printf("%d - %d + %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a-c+b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			} ;
		}
		else{
			printf("\n请计算\n");
			printf("%d - %d + %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b+c;
			if((useranswser-answer>1e-6)||(useranswser-answer<1e-6))
			{                   
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);					 
			}
		}
		break;
		
		
	case 2://-				
		if(a<(b+c))
		{
			printf("\n请计算\n");
			printf("%d + %d + %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a+b+c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			} ;
		}
		else
		{
			printf("\n请计算\n");
			printf("%d - %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			}
		}
		break;
		
	case 3://*
		if(a-b*c<0)
		{
			printf("\n请计算\n");
			printf("%d * %d - %d= ",b,c,a);
			scanf("%d",&useranswser);
			answer=b*c-a;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);				
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
				
			}
		}
		else
		{
			printf("\n请计算\n");
			printf("%d - %d * %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b*c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);				
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);						
			}				
			break;
			
			
	case 4:
		if(a*c-b<0)
		{
			printf("\n请计算\n");
			printf("%d - %d  * %d= ",b,a,c);
			scanf("%lf",&divideuseranswser);
			divideanswer=b-a*c;
			if(divideuseranswser==divideanswer)
			{   
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%0.2f\n",divideanswer);	 
			}
		}
		else
		{
			printf("\n请计算(小数点后保留两位有效小数)\n");
			printf("%d - %d  / %d= ",a,b,c);
			scanf("%lf",&divideuseranswser);
			divideanswer=a-(float)b/c;
			if(divideuseranswser==divideanswer)
			{   
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%0.2f\n",divideanswer);	 
			}
		}
		break;
		}
}
}


int FistMultiply(){
	int a,b,c;
	a = rand() % 99+1;//随机数a
	b = rand() % 99+1;//随机数b
	c = rand() % 99+1;//随机数c
	
	o2 = rand() % 4+1;//随机产生第2个运算符
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n请计算\n");
		printf("%d * %d + %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a*b+c;
		if(useranswser==answer)
		{                   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%d\n",answer);					 
		}
		break;
		
		
	case 2://-				
		if(a*b<c)
		{
			printf("\n请计算\n");
			printf("%d - %d * %d= ",c,a,b);
			scanf("%d",&useranswser);
			answer=c-a*b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			} ;
		}
		else
		{
			printf("\n请计算\n");
			printf("%d + %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a+b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			}
		}
		break;
		
	case 3:
		printf("\n请计算\n");
		printf("%d * %d * %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a*b*c;
		if(useranswser==answer)
		{                    
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);				
		}
		else
		{
			printf("回答错误，正确答案是：%d\n",answer);
			
		}
		break;
	case 4:
		printf("\n请计算(小数点后保留两位有效小数)\n");
		printf("%d * %d  / %d= ",a,b,c);
		scanf("%lf",&divideuseranswser);
		divideanswer=a*(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%0.2f\n",divideanswer);	 
		}
		break;
	}
}





int FistDivide(){
	int a,b,c;
	a = rand() % 99+1;//随机数a
	b = rand() % 99+1;//随机数b
	c = rand() % 99+1;//随机数c
	
	o2 = rand() % 4+1;//随机产生第2个运算符
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n请计算(小数点后保留两位有效小数)\n");
		printf("%d / %d + %d= ",a,b,c);
		scanf("%f",&divideuseranswser);
		divideanswer=(float)a/b+c;
		if(divideuseranswser==divideanswer)
		{                   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%0.2f\n",divideanswer);					 
		}
		break;
		
		
	case 2://-				
		if(a<(b*c))
		{
			printf("\n请计算\n");
			printf("%d * %d - %d= ",b,c,a);
			scanf("%d",&useranswser);
			answer=b*c-a;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%d\n",answer);
			} ;
		}
		else
		{
			printf("\n请计算(小数点后保留两位有效小数)\n");
			printf("%d / %d - %d= ",a,b,c);
			scanf("%f",&divideuseranswser);
			divideanswer=(float)a/b-c;
			if(divideuseranswser==divideanswer)
			{                    
				CorrectAnswer++;
				printf("你已经答对了%d道题目\n",CorrectAnswer);
			}
			else
			{
				printf("回答错误，正确答案是：%0.2f\n",divideanswer);
			}
		}
		break;
		
	case 3:
		printf("\n请计算(小数点后保留两位有效小数)\n");
		printf("%d / %d * %d= ",a,b,c);
		scanf("%f",&useranswser);
		divideanswer=(float)a/b*c;
		if(divideuseranswser==divideanswer)
		{                    
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);				
		}
		else
		{
			printf("回答错误，正确答案是：%0.2f\n",divideanswer);
			
		}
		break;
	case 4:
		printf("\n请计算(小数点后保留两位有效小数)\n");
		printf("%d / %d  / %d= ",a,b,c);
		scanf("%f",&divideuseranswser);
		divideanswer=(float)a/(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("你已经答对了%d道题目\n",CorrectAnswer);
		}
		else
		{
			printf("回答错误，正确答案是：%0.2f\n",divideanswer);	 
		}
		break;
	}
}