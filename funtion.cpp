#include<stdio.h>
////declaration /prototype
//void printhello();
//	int main() {
//		printhello();
//		printhello();
//		printhello();
//		printhello();
//		
//		
//		return 0;
//	}
//	//function definition
//void printhello(){
//	printf("hell nah! \n");
//}
//void sup();
//void mann();
//int main(){
//	sup();
//	mann();
//	return 0;
//}
//void sup(){
//	printf("hello\n");
//}
//void mann(){
//	printf("goodbye\n");
//}
//void a();
//void b();
//int main (){
//	char ch ;
//	printf("enter f for french and enter i for indian ");
//	scanf("%c",&ch);
//	
//	if (ch=='i'){
//		a();
//		
//	}
//	else if(ch=='f'){
//		b();
//		
//	
//	}else {
//		printf("invalid");
//	}
//
//	return 0;
//	
//	
//}
//void a(){
//	printf("namaste");
//}
//void b(){
//printf("bonjour");
//}


// int sum (int a ,int b);
// int main (){
// 	int a ,b;
// 	printf("enter 2 numbers :");
// 	scanf("%d %d",&a,&b);
// 	 int s=sum(a,b);
// 	 printf("sum is %d",s);
// 	 
// }
//int sum(int a ,int b){
//	return a+b;
//}
float sq(float n);
float re(float a , float b);
float ci(float rad);
int main (){
	float a=5.0;
	float b=10.0;
	printf("area is :%f", re( a, b));
	
	
	
}
float sq(float n){
	return n*n;
}
float re(float  a,float b){
	return a*b;
}
float ci(float rad){
	return 3.14*rad *rad;
}


















