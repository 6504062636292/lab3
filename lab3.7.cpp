#include<stdio.h>

int main(void){
	int score;
	
	scanf("%d",&score);
	if(score >= 68){
		//a85 b75 c55
		if(score >= 85){
			printf("%d(A)",score);
		}
		else if(score >= 75){
			printf("%d(B)",score);
		}
		else{
			printf("%d(C)",75-score);
		}
		
	}else{
		//d f
		if(score >= 55){
			printf("%d(D)",score);
		}
		else{
			printf("%d(F)",score);
		}
	}
}
