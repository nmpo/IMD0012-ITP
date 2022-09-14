/* Nathan e Theo - Aula 14: questão 33

33)  O  código  de  Cesar  é  uma  das  mais  simples  e  conhecidas  técnicas  de  criptografia.  É  
um   tipo   de   substituição   na   qual   cada   letra   do   texto   é   substituída   por   outra,   que   se  
apresenta  no  alfabeto  abaixo  dela  um  número  fixo  de  vezes.  Por  exemplo,  com  uma  
troca   de   três   posições,   ‘A’   seria   substituído  por   ‘D’,   ‘B’   se   tornaria   ‘E’,   e   assim   por  
diante.  Implemente  um  programa  para  cifrar  e  decifrar  através  do  Código  de  Cesar.    
	a. Utilize  somente  caracteres  sem  espaço  entre  as  palavras.  
	b. Na  tabela  ASCII,  “a”  =  65  e  “A”  =  97.  Modificar  o  código  para  aceitar  os  2  tipos  
de  caracteres  (maiúsculos  e  minúsculos).    
	c. O  código  para  cifrar  e  decifrar  um  caractere  maiúsculo  (valor  ASCII  de  “A”  é  
97),  é  o  seguinte:   

#include <stdio.h>
int main(int argc, char const *argv[]){
	// exemplo de texto de entrada
	char text[]="ABC";
	// valor do deslocamento a ser utilizado
	int deslocamento = 6;
	// vetor para armazenar texto cifrado
	char resultCifrado[sizeof(text)];
	//vetor para armazenar texto decifrado
	char resultDecifrado[sizeof(text)];
	// cifrando 1 caractere do texto
	resultCifrado[0] = ((text[0]+deslocamento)-65)%26+65;
	// inverte o deslocamento para decifrar
	deslocamento = 26-deslocamento;
	//decifrando 1 caracatere
	resultDecifrado[0] = ((resultCifrado[0]+deslocamento)-65)%26+65;
} 

*/

#include <stdio.h>