#include <stdio.h>
void print_bytes(const void * end_byte, int n);

int main(){
	double A;
	scanf("%lf",&A);
	unsigned char UC = A;
	unsigned short US = A;
	unsigned int UI = A;
	float F = A;
	double D =A;
	print_bytes(&UC,sizeof(UC));
	print_bytes(&US,sizeof(US));
	print_bytes(&UI,sizeof(UI));
	print_bytes(&F,sizeof(F));
	print_bytes(&D,sizeof(D));
return 0;	
}
	
	
 void print_bytes( const void * end_byte, int n ){
 	int i,j,k,y;
 	int str[9];
	unsigned char *pont = (unsigned char*) end_byte;
	for(i=0;i<n;i++){
		j = 7;
         y= *(pont+i);
        
        while(j+1){
        	str[j] = y%2;
        	j--;
        	y/=2;	
		} 
		for(k=0;k<8;k++)
		printf("%d",str[k]);
		printf(" ");
}
printf("\n");
}
	