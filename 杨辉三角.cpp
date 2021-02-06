#include<cstdio>
#include<cstring>

int main(void){
	
	const int num = 10;
	int a[num];
	int cell;
	int n = 0;
	memset(a, 0, sizeof(a));

	scanf("%d", &cell);
	if(cell > num)
		printf("false!");
	else{
	
		for(int i = 0; i < cell; i++){
		
			for(int j = i-1; j > 0; j--){
				a[j] = a[j] + a[j - 1];
			}
			
			a[i] = 1;
		
			for(int j = 0; j <= i; j++){
			printf("%d"" ", a[j]);
			}
		
			printf("\n");
		}	
	}
	
	return 0;
} 
