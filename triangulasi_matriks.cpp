#include<cstdio>

int main(){
	int n;
	scanf("%d", &n); // meminta input ukuran matriks nxn
	
	int A[n][n]; // deklarasi matriks A 
	int A_atas[n][n]; //deklarasi matriks A_atas (matrisk segitiga atas)
	int A_bawah[n][n]; // deklarasi matriks A_bawah (matriks segitiga bawah)
	int A_tengah[n][n]; // deklarasi matriks A_tengah (matriks diagonal)
	
	// meminta input nilai matriks A
	for ( int i=0; i<n; i++){
		for(int j = 0; j < n; j++){
		scanf("%d", &A[i][j]);
		}
	}
	
	// melakukan looping untuk mengisi matriks A_bawah, dengan entrinya A selama indeks j>i
	// dan mengisi dengan angka 0 jika j<=i;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++){
				if( j>i){
					A_bawah[i][j]=A[i][j];
				} else{
					A_bawah[i][j]=0;
					}
			}
		}
		
	// melakukan looping untuk mengisi matriks A_atas, dengan entrinya A selama indeks i>j
	// dan mengisi dengan angka 0 jika i<=j;
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++){
				if( i>j){
					A_atas[i][j]=A[i][j];
				} else{
					A_atas[i][j]=0;
					}
			}
		}
		
		// melakukan looping untuk mengisi matriks A_tengah, dengan entrinya A selama indeks i==j
		// dan mengisi dengan angka 0 jika i!=j;
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++){
				if( j==i){
					A_tengah[i][j]=A[i][j];
				} else{
					A_tengah[i][j]=0;
					}
			}
		}
		
		// menampilkan outuput matriks A = Matriks A_atas + Matriks A_tengah + matriks A_bawah
		// di consolenya.
		
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
			
			printf("=\n");
			
			
			
	for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(j==n-1){
				printf("%d", A_bawah[i][j]);
				}
				else{
					printf("%d ", A_bawah[i][j]);
				}
			}
			printf("\n");
			}
			
			printf("+\n");
			
		
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(j==n-1){
				printf("%d", A_tengah[i][j]);
				}
				else{
					printf("%d ", A_tengah[i][j]);
				}
			}
			printf("\n");
			}
			printf("+\n");
			
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(j==n-1){
				printf("%d", A_atas[i][j]);
				}
				else{
					printf("%d ", A_atas[i][j]);
				}
			}
			printf("\n");
			}
			
			printf("\n");
			
			
			

		
	
	

	}