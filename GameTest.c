// Bibliotecas
	#include <stdio.h>
	#include <conio.h>
	
// Função que Limpa o Prompt (do Windows)
	void limparTela() {
	    system("cls");
	    
	}
	
// Parte Principal
	int main() {
		// Posição do player
		    int posX = 5;
		    int posY = 2;
	    
	    // Declarando ordem de X e Y
		    char tecla;
		    int x, y; 
	    
	    while (1) {
	
		// Utilizando a função que limpa a tela
	        limparTela();
	
	        // "Sala" feita de W
		        /* W = Wall
		         P = Player */
		        for (y = 0; y < 5; y++) {
		        	
		            for (x = 0; x < 15; x++) {
		            	
		                if (y == 0 || y == 4 || x == 0 || x == 14) {
		                	// Paredes
		                    	printf("W");
		                    
		                }
						
						else if (x == posX && y == posY) {
							// Player
		                    	printf("P");
		                }
						
						else {
							// Parte vazia
		                    	printf(" ");
		            
		                }
		                
		            }
		            
		            // Quebra de linha
		            	printf("\n");
		            	
	        }
	
	    // Vendo teclas via biblioteca (conio.h)
	        if (_kbhit()) {
	            tecla = _getch();
	            if (tecla == 'a' && posX > 1) {
	                // Clique no A = Esquerda
	                	posX--;
	                
	            }
				
				else if (tecla == 'd' && posX < 13) {
	                // Clique no D = Direita
	                	posX++;
	                	
	            }
				
				else if (tecla == 'w' && posY > 1) {
	                // Clique no W = Cima
	                	posY--;
	                	
	            }
				
				else if (tecla == 's' && posY < 3) {
	                // Clique no S = Baixo
	                	posY++;
	                	
	            }
	            
	        }
	        
	    }
	
	    return 0;
	    
	}

