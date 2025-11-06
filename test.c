#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
#define max 100000

int stack[max];

void push(char c){
	stack[++top]=c;
}
 
void pop(){
top--;
}
bool isvalid(char *s){
int i
for(i=0;s[i]!='\0';i++){
	if(s[i]=='('||s[i]=='{'||s[i]=='[')
	push(s[i]);
	else if(s[i]==')'||s[i]=='}'||s[i]==']'){
		if(top!=-1)
		pop();
		if(s[i]==')'&&stack[top]=='(')
		continue;
		else if(s[i]=='}'&&stack[top]=='{')	
		continue;
		else if(s[i]==']'&&stack[top]=='[')
		continue;
		else
		return false;
	}
}
}	


int main() {
char s[10000];
gets(s);  
}
