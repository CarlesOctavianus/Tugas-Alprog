#include<cstdio>
#include<cmath>




int main(){
	int n;
	scanf("%d", &n); // meminta input ukuran matriks nxn
	
	int A[n][n]; // deklarasi matriks A 
	int A_tridiagonal[n][n]; //deklarasi matriks tridiagnoal
	
	
	// meminta input nilai matriks A
	for ( int i=0; i<n; i++){
		for(int j = 0; j < n; j++){
		scanf("%d", &A[i][j]);
		}
	}
	
	// melakukan tridiagonalisasi. idenya selama absolute dari (i-j)<=1,
	// maka matriks A_tridiagonal[i][j] akan diisi dengan matriks A[i][j]
	// untuk kasus lainnya, isi matriks A_tridiagonal[i][j]=0
	for ( int i=0; i<n; i++){
		for(int j = 0; j < n; j++){
			if(abs(i-j)<=1){
			A_tridiagonal[i][j]= A[i][j];
			}
			else{
				A_tridiagonal[i][j]=0;
				
			}
		}
	}
	// menampilkan output matriks A dan matriks A_tridiagonal pada console
			printf("Matriks A =\n");
		
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(j==n-1){
				printf("%d", A[i][j]);
				}
				else{
					printf("%d ", A[i][j]);
				}
			}
			printf("\n");
			}
			
			printf("jika di-tridiagonal-kan menjadi =\n");
			
			for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(j==n-1){
				
				printf("%d", A_tridiagonal[i][j]);
				}
				else{
					printf("%d ", A_tridiagonal[i][j]);
				}
			}
			printf("\n");
			}
}