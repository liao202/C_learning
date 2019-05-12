#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
	double a[N] = {
		1.0, 2.0, 3.0, 4.0, 5.0
	};
	double b[N] = {0.0};
	size_t ret = 0;
	FILE* fp = fopen("temp.bin", "wb");

	fwrite(a, sizeof(*a), N, fp);

	fclose(fp);

	fp = fopen("temp.bin", "rb");
	ret = fread(b, sizeof(*b), N, fp);

	if(ret == N){
		puts("Array read successfully, contents: \n");
		int i = 0;
		for(; i < N; ++i){
			printf("%f ", b[i]);
		}
		printf("\n");
	}
	else{
		if(feof(fp)){
			printf("Error reading temp.bin: unexpected end of file.\n");
		}
		else if(ferror(fp)){
			perror("Error reading temp.bin.\n");
		}
	}

	fclose(fp);

	return 0;
}
