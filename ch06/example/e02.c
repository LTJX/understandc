#include <stdio.h>
int compare(int,int);
int main(int argc,char const *argv[]){
	int input1,input2;
scanf("%d",&input1);
scanf("%d",&input2);
if(compare(int input1,input2)==1){
	
}


	int compare(int param1,int param2){
		if (param1>param2){
			return 1;
		}else if(param1==param2){
			return 0;
		}else{
			return-1;
		}
	}
}