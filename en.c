#include<stdio.h>
#include<string.h>

enum friends{
	Vanshit=65,
    Semi=5,
	vasu,
	Vaibhav,
	Tarun
}name;

int main(){
	name=Tarun;
	name=vasu;
	printf("%d",name);
	
	return 0;
}