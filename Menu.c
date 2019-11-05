#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 10
#define TAMANHO_PILHA 10

void Inserir( int fila[], int *fim, int tam, int valor )
{ fila[(*fim)] = valor;
*fim= (*fim)+1;
}
int Remover(int fila[], int *fim )
{ int excluido, posicaoAux;
excluido = fila[0];
*fim = (*fim-1);
for ( posicaoAux=0; posicaoAux < *fim; posicaoAux++ )
{
fila[posicaoAux] = fila[ posicaoAux + 1 ];
}
return excluido;
}

int removerValorPilha( int pilha[], int *topoPilha )
{
int retorno = -1;
if ( *topoPilha > 0 )
{
*topoPilha = (*topoPilha)-1;
retorno = pilha[*topoPilha];
}
return retorno;
}

typedef struct data{
unsigned short dia, mes;
unsigned int ano;	
}Data;


void LerData (Data *d){
	scanf ("%d", &d->dia);
	scanf ("%d", &d->mes);
	scanf ("%d", &d->ano);
	
}

void m(){
	int c;
	system("color 0D");
    gotoxy(2,2);
    printf("%c", 201);
    for (c=0;c<75;c++){
    printf ("%c", 205);	
	}
	printf ("%c",187);
	for (c=3; c<50; c++){
	gotoxy(78,c);
	printf ("%c",186);
	}
	gotoxy (78,50);
	printf("%c",188);
	for (c=77;c>2;c--){
	gotoxy (c,50);
	printf ("%c", 205);		
	}
	gotoxy (2,50);
	printf ("%c",200);
	for (c=49; c>2; c--){
    gotoxy (2,c);
	printf ("%c",186);	
	} 
	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado");
	gotoxy (15,4);
	textbackground(RED);
    printf ("ALUNO");
    gotoxy (32,4);
    textbackground(BLACK);
    printf ("PILHA");
    gotoxy (47,4);
    printf ("FILA");
    gotoxy (60,4);
    printf ("SOBRE");
    gotoxy (3,16);
    for (c=3; c<78; c++){
    gotoxy (c,6);	
    printf ("%c",205);}
	
}

void aluno () 
{
   int c;
   	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado");
	system("color 0D");
    gotoxy(2,2);
    printf("%c", 201);
    for (c=0;c<75;c++){
    printf ("%c", 205);	
	}
	printf ("%c",187);
	for (c=3; c<50; c++){
	gotoxy(78,c);
	printf ("%c",186);
	}
	gotoxy (78,50);
	printf("%c",188);
	for (c=77;c>2;c--){
	gotoxy (c,50);
	printf ("%c", 205);		
	}
	gotoxy (2,50);
	printf ("%c",200);
	for (c=49; c>2; c--){
    gotoxy (2,c);
	printf ("%c",186);	
	}
	gotoxy (15,4);
	textbackground(RED);
    printf ("ALUNO");
    gotoxy (32,4);
    textbackground(BLACK);
    printf ("PILHA");
    gotoxy (47,4);
    printf ("FILA");
    gotoxy (60,4);
    printf ("SOBRE");
    gotoxy (3,16);
    for (c=3; c<78; c++){
    gotoxy (c,6);	
    printf ("%c",205);	
    
    gotoxy(10,9);
	printf (" 1- Cadastrar dados");
	gotoxy(10,11 );
	printf (" 2- Listar dados");
	}
		
	}
	
void pilhao(){
	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado");
	int c;
	system("color 0D");
    gotoxy(2,2);
    printf("%c", 201);
    for (c=0;c<75;c++){
    printf ("%c", 205);	
	}
	printf ("%c",187);
	for (c=3; c<50; c++){
	gotoxy(78,c);
	printf ("%c",186);
	}
	gotoxy (78,50);
	printf("%c",188);
	for (c=77;c>2;c--){
	gotoxy (c,50);
	printf ("%c", 205);		
	}
	gotoxy (2,50);
	printf ("%c",200);
	for (c=49; c>2; c--){
    gotoxy (2,c);
	printf ("%c",186);	
	}
	gotoxy (15,4);
    printf ("ALUNO");
    gotoxy (32,4);
    textbackground (RED);
    printf ("PILHA");
    gotoxy (47,4);
    textbackground (BLACK);
    printf ("FILA");
    gotoxy (60,4);
    printf ("SOBRE");
    gotoxy (3,16);
    for (c=3; c<78; c++){
    gotoxy (c,6);	
    printf ("%c",205);	
    
    
    	gotoxy (31,9);
			printf (" 1- Inserir");	
			gotoxy (31,11);
		    printf (" 2- Excluir");
		    gotoxy (31,13);
			printf (" 3- Buscar");
			 gotoxy (31,15);
			 	printf (" 4- Listar");
	}
}
void fila(){
	int c;
	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado");
	system("color 0D");
    gotoxy(2,2);
    printf("%c", 201);
    for (c=0;c<75;c++){
    printf ("%c", 205);	
	}
	printf ("%c",187);
	for (c=3; c<50; c++){
	gotoxy(78,c);
	printf ("%c",186);
	}
	gotoxy (78,50);
	printf("%c",188);
	for (c=77;c>2;c--){
	gotoxy (c,50);
	printf ("%c", 205);		
	}
	gotoxy (2,50);
	printf ("%c",200);
	for (c=49; c>2; c--){
    gotoxy (2,c);
	printf ("%c",186);	
	}
	gotoxy (15,4);
    printf ("ALUNO");
    gotoxy (32,4);
    printf ("PILHA");
    gotoxy (47,4);
    textbackground (RED);
    printf ("FILA");
    gotoxy (60,4);
    textbackground (BLACK);
    printf ("SOBRE");
    gotoxy (3,16);
    for (c=3; c<78; c++){
    gotoxy (c,6);	
    printf ("%c",205);	
    
    
    		gotoxy (46,9);
			printf ("1- Inserir");	
			gotoxy (46,11);
		    printf ("2- Excluir");
		    gotoxy (46,13);
			printf ("3- Buscar");
		    gotoxy (46,15);
			printf ("4- listar");
	
	}
}
void sobre(){
	int c;
	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado");
	system("color 0D");
    gotoxy(2,2);
    printf("%c", 201);
    for (c=0;c<75;c++){
    printf ("%c", 205);	
	}
	printf ("%c",187);
	for (c=3; c<50; c++){
	gotoxy(78,c);
	printf ("%c",186);
	}
	gotoxy (78,50);
	printf("%c",188);
	for (c=77;c>2;c--){
	gotoxy (c,50);
	printf ("%c", 205);		
	}
	gotoxy (2,50);
	printf ("%c",200);
	for (c=49; c>2; c--){
    gotoxy (2,c);
	printf ("%c",186);	
	}
	gotoxy (15,4);
    printf ("ALUNO");
    gotoxy (32,4);
    printf ("PILHA");
    gotoxy (47,4);
    printf ("FILA");
   
	for (c=3; c<78; c++){
    gotoxy (c,6);	
    printf ("%c",205);	
	} 
	gotoxy (60,4);
    textbackground (RED);
    printf ("SOBRE");
    gotoxy (3,16);
    
}


int main()
{   int pilha[TAMANHO_PILHA];
    int con;
	int caso;
	char  nc [100], end [100], em[100], np[100], nm[100],cid[50],bai[50],cur[50],sem[20],cam[50];
	char rga[12], cel[9];
	Data dn;	
	int v,cont,op,remo, buscar;	
	int topoPilha = 0; //considera que uma a ser inciada tem valor de topo = 0
	int fila1[10];
	int fim = 0; //considera que uma fila a ser inciada tem valor de fim = 0
	int valor1,cont1, buscar1, excluido;int tam=10;
	gotoxy (15,48);
    printf ("mova as setas < > e tecle o numero desejado  ");
	setlocale (LC_ALL,"portugese");
	int posicao=-1, valor, seta, r=1;
	m();
	do{
	seta = getch ();
	
	if(seta>=49 && seta<=50 && posicao==0){
		switch(seta){
			
			case 49:{
				gotoxy(25,15);
				printf ("Preencha os campos abaixo:\n");
				gotoxy(25,16);
				printf ("\nNome completo: ");
				scanf ("%s",&nc);
   				printf ("\nRGA:");
				scanf ("%s",&rga);
	
				printf ("\nEndereço: ");
				scanf ("%s",&end);
	
				printf ("\nE-mail:");
				scanf ("%s",&em);
	
				printf ("\nNome do pai: ");
				scanf ("%s",&np);
	
				printf ("\nNome da mãe:");
				scanf ("%s",&nm);
	
				printf ("\nCelular: ");
				scanf ("%s",&cel);
	
				printf ("\nData de nascimento:");
				LerData (&dn);
	
				printf ("\nCidade: ");
				scanf ("%s",&cid);
	
				printf ("\nBairro: ");
				scanf ("%s",&bai);
	
				printf ("\nCurso: ");
				scanf ("%s",&cur);
	
				printf ("\nSemestre:");
				scanf ("%s",&sem);
	
				printf ("\nCampus: ");
				scanf ("%s",&cam);
				break;
			}
			case 50:{
					printf("\n");
					printf ("Nome completo: %s\n",nc);
					printf ("RGA: %s\n",rga);
					printf ("Endereço: %s\n",end);
					printf ("E-mail: %s\n",em);
					printf ("Nome do pai: %s\n",np);
					printf ("Nome da mãe: %s\n",nm);
					printf ("Celular: %s\n",cel);
					printf ("Data de nascimento: %s\n",dn);
					printf ("Cidade: %s\n",cid);
					printf ("Bairro: %s\n",bai);
					printf ("Curso: %s\n",cur);
					printf ("Semestre: %s\n",sem);
					printf ("Campus: %s\n",cam);
					system("pause>0");
				break;
			}	
		}
	}	
	
	
	
	
	if(seta<=52 && seta>=49 && posicao ==1){
	  
		switch(seta)
		{ 
			case 49 :
			{
			 	
					if(topoPilha<TAMANHO_PILHA){
					gotoxy (31,15);
					printf("Informe o valor a inserir: ");
					scanf("%d", &v);
					pilha[topoPilha] = v;
					topoPilha = (topoPilha)+1;
				}
					else{
					gotoxy (31,15);
					printf("\nPilha Cheia");
					printf("\n");
					system("pause>0");
				}
				break;
			}	
			case 50 :
			{
				if (topoPilha>0)
				{
					remo=removerValorPilha(pilha,&topoPilha);
					printf("\nElemento [%d] Excluido da Pilha",remo);
					system("pause>0");
				}
				else printf("\nPilha Vazia");
				printf("\n");
				break;
			}
			case 51 : 
			{
				if (topoPilha>0)
				{	gotoxy (31,15);
					printf("Insira o numero que deseja buscar: ");
					scanf ("%d", &buscar);
					for (cont =0;cont<topoPilha;cont++)
					{
						if (buscar==pilha[cont])
						{	gotoxy (31,16);
							printf ("o numero foi encontrado e esta na posicao [%d]", cont);
							system("pause>0");
						}
					}
				}
				else printf("\nPilha Vazia");
				printf("\n");
			break;
			}
		 	case 52:{ 
		    
		    for (cont=0;cont<topoPilha;cont++){
		 	printf ("[%d]",pilha[cont]);
		 	system("pause>0");
			 
			 }
		
		break;

			}
		}
	}

	
	
	if (seta>=49 && seta<=52 && posicao==2){
		
		switch(seta){
			case 49 :{
				 	if(fim<tam ){			
					printf("Informe o valor a inserir: ");
					scanf("%d",&valor1);
					Inserir(fila1,&fim,tam,valor1);
					}
					else{
						printf("\nFila Cheia");
						printf("\n");
						}
				break;
			}
			
			case 50:{
				if (fim>0){	
					excluido=Remover(fila1,&fim);
					printf("\nElemento [%d] Excluido da Fila",excluido);
					system("pause>0");
				}
				else{
					printf("\nFila Vazia");
					printf("\n");
				}
				break;
			}
			case 51:{
				if (fim!=0){
					printf("Digite o numero que quer buscar");
					scanf ("%d",&buscar1);	
					for (cont1 =0;cont1<fim;cont1++){				
						if (buscar1==fila1[cont1]){
						printf("o numero foi encontrado e esta na posicao [%d]", cont1);
						system("pause>0");	
						}
					}
				
					//textcolor(WHITE);
					//gotoxy(20,21);
					//printf("\n");
				}
				else{
					printf("\nFila Vazia");
					system("pause>0");
					printf("\n");
				}
				break;
			}
		}
	
	}
	
	
	
	
	
	if(seta==224){
	seta = getch ();	
	}
	
	if (seta==77){
	posicao++;
	}
	
	if (seta==75){
	posicao--;
	}
		
	if (posicao<0){
	posicao=3;	
	}
	
	posicao=posicao%4;
	
	switch (posicao){
		case 0:{
			clrscr ();
			aluno ();
		break;
		}		
		case 1:{
			clrscr ();
			pilhao ();
	
		break;
		}
		case 2:{
			clrscr ();
			fila ();	
		break;
		}
		case 3:{
	 		clrscr ();
			sobre ();	
		break;
		}
	}
	if (seta==27){
		r=-2;	
	}
}while (r==1);	
	
	
    return(0);
      
}

