#include<stdio.h>


void sumavg(int a, int b,int *sum, int *avg){
	int *sum=a+b;
	float *avg=*sum/2;
}

int main(){
	int i, j , &sum, &avg;
	i=3;
	j=6;
	sumavg(i,j,&sum,&avg);
}