#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a,b,c,o1,o2;
int i,CorrectAnswer,answer,useranswser;
int number;//�û��������Ŀ����Ŀ
float divideuseranswser,divideanswer;



main(){
	printf("\n\n");
	printf("       |--------------------�����������-------------------|");
	printf("\n       |                                                   |");
	printf("\n       |          �༶��16��2��                          |");
	printf("\n       |          ѧ�ţ�201606120103                       |");
	printf("\n       |          �������Ƽ�ܿ                             |");
	printf("\n       |                                                   |");
	printf("\n       |---------------------------------------------------|");
	
	
	
	printf("\n\n\n����������Ҫ��ȡ����Ŀ������");
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{
		o1 = rand() % 4+1;//���������1�������
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
	a = rand() % 99+1;//�����a
	b = rand() % 99+1;//�����b
	c = rand() % 99+1;//�����c
	
	o2 = rand() % 4+1;//���������2�������
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n�����\n");
		printf("%d + %d + %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a+b+c;
		if(useranswser==answer)
		{                   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%d\n",answer);					 
		}
		break;
		
		
	case 2://-				
		if((a+b)<c)
		{
			printf("\n�����\n");
			printf("%d + %d - %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a+c-b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			} ;
		}
		else
		{
			printf("\n�����\n");
			printf("%d + %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a+b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			}
		}
		break;
		
	case 3:
		printf("\n�����\n");
		printf("%d + %d * %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a+b*c;
		if(useranswser==answer)
		{                    
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);				
		}
		else
		{
			printf("�ش������ȷ���ǣ�%d\n",answer);
			
		}
		break;
	case 4:
		printf("\n�����(С���������λ��ЧС��)\n");
		printf("%d + %d  / %d= ",a,b,c);
		scanf("%lf",&divideuseranswser);
		divideanswer=(float)a+(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);	 
		}
		break;
	}
}





int FistSubtract()
{
	int a,b,c;
	a = rand() % 99+1;//�����a
	b = rand() % 99+1;//�����b
	c = rand() % 99+1;//�����c		
	o2 = rand() % 4+1;//���������2�������
	switch(o2)
	{
	case 1://+
		if(a+c<b)
		{
			printf("\n�����\n");
			printf("%d - %d + %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a-c+b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			} ;
		}
		else{
			printf("\n�����\n");
			printf("%d - %d + %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b+c;
			if((useranswser-answer>1e-6)||(useranswser-answer<1e-6))
			{                   
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);					 
			}
		}
		break;
		
		
	case 2://-				
		if(a<(b+c))
		{
			printf("\n�����\n");
			printf("%d + %d + %d= ",a,c,b);
			scanf("%d",&useranswser);
			answer=a+b+c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			} ;
		}
		else
		{
			printf("\n�����\n");
			printf("%d - %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			}
		}
		break;
		
	case 3://*
		if(a-b*c<0)
		{
			printf("\n�����\n");
			printf("%d * %d - %d= ",b,c,a);
			scanf("%d",&useranswser);
			answer=b*c-a;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);				
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
				
			}
		}
		else
		{
			printf("\n�����\n");
			printf("%d - %d * %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a-b*c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);				
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);						
			}				
			break;
			
			
	case 4:
		if(a*c-b<0)
		{
			printf("\n�����\n");
			printf("%d - %d  * %d= ",b,a,c);
			scanf("%lf",&divideuseranswser);
			divideanswer=b-a*c;
			if(divideuseranswser==divideanswer)
			{   
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);	 
			}
		}
		else
		{
			printf("\n�����(С���������λ��ЧС��)\n");
			printf("%d - %d  / %d= ",a,b,c);
			scanf("%lf",&divideuseranswser);
			divideanswer=a-(float)b/c;
			if(divideuseranswser==divideanswer)
			{   
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);	 
			}
		}
		break;
		}
}
}


int FistMultiply(){
	int a,b,c;
	a = rand() % 99+1;//�����a
	b = rand() % 99+1;//�����b
	c = rand() % 99+1;//�����c
	
	o2 = rand() % 4+1;//���������2�������
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n�����\n");
		printf("%d * %d + %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a*b+c;
		if(useranswser==answer)
		{                   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%d\n",answer);					 
		}
		break;
		
		
	case 2://-				
		if(a*b<c)
		{
			printf("\n�����\n");
			printf("%d - %d * %d= ",c,a,b);
			scanf("%d",&useranswser);
			answer=c-a*b;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			} ;
		}
		else
		{
			printf("\n�����\n");
			printf("%d + %d - %d= ",a,b,c);
			scanf("%d",&useranswser);
			answer=a+b-c;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			}
		}
		break;
		
	case 3:
		printf("\n�����\n");
		printf("%d * %d * %d= ",a,b,c);
		scanf("%d",&useranswser);
		answer=a*b*c;
		if(useranswser==answer)
		{                    
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);				
		}
		else
		{
			printf("�ش������ȷ���ǣ�%d\n",answer);
			
		}
		break;
	case 4:
		printf("\n�����(С���������λ��ЧС��)\n");
		printf("%d * %d  / %d= ",a,b,c);
		scanf("%lf",&divideuseranswser);
		divideanswer=a*(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);	 
		}
		break;
	}
}





int FistDivide(){
	int a,b,c;
	a = rand() % 99+1;//�����a
	b = rand() % 99+1;//�����b
	c = rand() % 99+1;//�����c
	
	o2 = rand() % 4+1;//���������2�������
	//printf("%d,%d,%d",a,b,c);/////////////////
	switch(o2)
	{
	case 1://+
		printf("\n�����(С���������λ��ЧС��)\n");
		printf("%d / %d + %d= ",a,b,c);
		scanf("%f",&divideuseranswser);
		divideanswer=(float)a/b+c;
		if(divideuseranswser==divideanswer)
		{                   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);					 
		}
		break;
		
		
	case 2://-				
		if(a<(b*c))
		{
			printf("\n�����\n");
			printf("%d * %d - %d= ",b,c,a);
			scanf("%d",&useranswser);
			answer=b*c-a;
			if(useranswser==answer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%d\n",answer);
			} ;
		}
		else
		{
			printf("\n�����(С���������λ��ЧС��)\n");
			printf("%d / %d - %d= ",a,b,c);
			scanf("%f",&divideuseranswser);
			divideanswer=(float)a/b-c;
			if(divideuseranswser==divideanswer)
			{                    
				CorrectAnswer++;
				printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
			}
			else
			{
				printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);
			}
		}
		break;
		
	case 3:
		printf("\n�����(С���������λ��ЧС��)\n");
		printf("%d / %d * %d= ",a,b,c);
		scanf("%f",&useranswser);
		divideanswer=(float)a/b*c;
		if(divideuseranswser==divideanswer)
		{                    
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);				
		}
		else
		{
			printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);
			
		}
		break;
	case 4:
		printf("\n�����(С���������λ��ЧС��)\n");
		printf("%d / %d  / %d= ",a,b,c);
		scanf("%f",&divideuseranswser);
		divideanswer=(float)a/(float)b/c;
		if(divideuseranswser==divideanswer)
		{   
			CorrectAnswer++;
			printf("���Ѿ������%d����Ŀ\n",CorrectAnswer);
		}
		else
		{
			printf("�ش������ȷ���ǣ�%0.2f\n",divideanswer);	 
		}
		break;
	}
}