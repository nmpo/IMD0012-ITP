#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
/* Variáveis globais */
int thread_count; //número de threads
int m, n; //dimensão da matriz A
double* A; //matriz A
double* x; //matriz x
double* y; //matriz y

/* Funções seriais extras - Impressão e carga das matrizes/vetor

* Lendo o MAIN você entenderá estas funções
*/
void Usage(char* prog_name);
void Read_matrix(char* prompt, double A[], int m, int n);
void Read_vector(char* prompt, double x[], int n);
void Print_matrix(char* title, double A[], int m, int n);
void Print_vector(char* title, double y[], double m);

/* Função paralela - será executaa pelas threads */
void *Pth_mat_vect(void* rank);




/*------------------------------------------------------------------*/
int main(int argc, char* argv[]) {
	long thread;											//inteiro que conterá a ID da thread no pthread_create
	pthread_t* thread_handles; 								//ponteiro para as threads. Será um vetor alocado dinamicamente

	if (argc != 2) Usage(argv[0]); 							//Finaliza o código se não tem exatamente 2 parâmetros
	thread_count = atoi(argv[1]); 							//número de threads
	thread_handles = malloc(thread_count*sizeof(pthread_t)); //alocação dinâmica do ponteiro para as threads

/* ** Alocação e preenchimento das matrizes A, x e y ** */
	printf("Entre m e n\n");
	scanf("%d%d", &m, &n); 					//ler dados 'm' e 'n'

	A = malloc(m*n*sizeof(double)); 		//aloca dinamicamente A
	x = malloc(n*sizeof(double)); 			//aloca dinamicamente x
	y = malloc(m*sizeof(double)); 			//aloca dinamicamente y

	Read_matrix("Digite a Matriz A:", A, m, n); 			//usuáro deve fornecer todos os elemento da matriz A
	Print_matrix("Li:", A, m, n); 							//Imprime a matriz A

	Read_vector("Digite a Matriz B:", x, n); 				//usuáro deve fornecer todos os elemento da matriz x
	Print_vector("Li:", x, n); 								//Imprime a matriz x

/* ***************************************************** */


/* *************** Gera todas as threads *************** */
	for (thread = 0; thread < thread_count; thread++)
		pthread_create(&thread_handles[thread], NULL, Pth_mat_vect, (void*) thread);



/* ********** Main espera todas as threads criadas*********** */
	for (thread = 0; thread < thread_count; thread++)
		pthread_join(thread_handles[thread], NULL);


	//Imprime o vetor resultado (matriz y)
	Print_vector("O produto é:", y, m);


	//Libera as matrizes alocadas dinamicamente
	free(A);
	free(x);
	free(y);

	return 0;
} /* fim main */


//Código que cada thread irá executar
void *Pth_mat_vect(void* rank) {
	long my_rank = (long) rank; 			//Rank da thread
	int i, j; 								//i,j: variáveis temporárias linha e coluna, respectivamente.

	int local_m = m/thread_count; 			//número de linhas que cada thread irá computar
	int minha_primeira_linha = 0; 			// TO DO; //primeira linha de Y a ser computada pela thread.	<-----------------------------------QUESTÃO DA PROVA
	int minha_ultima_linha = 0; 			// TO DO; //última linha de Y a ser computada pela thread.		<-----------------------------------QUESTÃO DA PROVA		


//Faz a computação da primeira linha até última de Y
for (i = minha_primeira_linha; i <= minha_ultima_linha; i++) {
	y[i] = 0.0;
	for (j = 0; j < n; j++)
		y[i] += A[i*n+j]*x[j];
	}
return NULL;
}


void Usage (char* prog_name) {
	fprintf(stderr, "usage: %s <thread_count>\n", prog_name);
	exit(0);
}


void Read_matrix(char* prompt, double A[], int m, int n) {
	int i, j;

	printf("%s\n", prompt);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%lf", &A[i*n+j]);
}


void Read_vector(char* prompt, double x[], int n) {
	int i;

	printf("%s\n", prompt);
	for (i = 0; i < n; i++)
		scanf("%lf", &x[i]);
}


void Print_matrix( char* title, double A[], int m, int n) {
	int i, j;

	printf("%s\n", title);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%4.1f ", A[i*n + j]);
		printf("\n");
	}
}


void Print_vector(char* title, double y[], double m) {
	int i;

	printf("%s\n", title);
	for (i = 0; i < m; i++)
		printf("%4.1f ", y[i]);
	printf("\n");
}